#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class KodamaBuildData; }

#define UNITYENGINE_ED8CE88CC2C5F631_A937EF5F4DF89E70_OFFSET UNITYSDK_OFFSET(0x410CC40)
#define UNITYENGINE_ED8CE88CC2C5F631_BB50117A2937E2D8_OFFSET UNITYSDK_OFFSET(0x410CC80)
#define UNITYENGINE_ED8CE88CC2C5F631__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int ED8CE88CC2C5F631_TypeDefinitionIndex = 16975;

	class ED8CE88CC2C5F631 : public ::System::Object
	{
	public:
		static ::System::Void BB50117A2937E2D8(::UnityEngine::KodamaBuildData* B286159CFDC40A9F)
		{
			return ((::System::Void(*)(::UnityEngine::KodamaBuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_ED8CE88CC2C5F631_BB50117A2937E2D8_OFFSET))(B286159CFDC40A9F);
		}

		static ::System::Void A937EF5F4DF89E70(::UnityEngine::KodamaBuildData* B286159CFDC40A9F, ::System::UInt32 F5AEFA05C9F71B82)
		{
			return ((::System::Void(*)(::UnityEngine::KodamaBuildData*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ED8CE88CC2C5F631_A937EF5F4DF89E70_OFFSET))(B286159CFDC40A9F, F5AEFA05C9F71B82);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ED8CE88CC2C5F631__CTOR_OFFSET))(this);
		}
	};
}
