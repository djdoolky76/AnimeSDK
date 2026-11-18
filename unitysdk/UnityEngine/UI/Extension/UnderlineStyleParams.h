#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_UNDERLINESTYLEPARAMS_RESOLVEHEIGHTDELTALOCAL_OFFSET UNITYSDK_OFFSET(0x859940)
#define UNITYENGINE_UI_EXTENSION_UNDERLINESTYLEPARAMS_RESOLVEOFFSETLOCAL_OFFSET UNITYSDK_OFFSET(0x8599A0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINESTYLEPARAMS_RESOLVETHICKNESSLOCAL_OFFSET UNITYSDK_OFFSET(0x8598C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UnderlineStyleParams_TypeDefinitionIndex = 91787;

	struct alignas(4) UnderlineStyleParams
	{
		::System::Single effectiveThicknessScale; // 0x10
		::System::Single effectiveHeightOffset; // 0x14

		::System::Single ResolveThicknessLocal(::System::Single faceThicknessLocal, ::System::Single minimumThicknessLocal)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINESTYLEPARAMS_RESOLVETHICKNESSLOCAL_OFFSET))(this, faceThicknessLocal, minimumThicknessLocal);
		}

		::System::Single ResolveHeightDeltaLocal(::System::Single faceOffsetLocal)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINESTYLEPARAMS_RESOLVEHEIGHTDELTALOCAL_OFFSET))(this, faceOffsetLocal);
		}

		::System::Single ResolveOffsetLocal(::System::Single faceOffsetLocal)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINESTYLEPARAMS_RESOLVEOFFSETLOCAL_OFFSET))(this, faceOffsetLocal);
		}
	};
}
