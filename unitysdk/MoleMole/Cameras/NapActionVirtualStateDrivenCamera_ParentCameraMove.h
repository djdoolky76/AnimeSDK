#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PARENTCAMERAMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapActionVirtualStateDrivenCamera_ParentCameraMove_TypeDefinitionIndex = 64475;

	struct alignas(8) NapActionVirtualStateDrivenCamera_ParentCameraMove
	{
		::System::String* m_CameraMoveMode; // 0x10
		::System::String* m_ParentCameraMoveMode; // 0x18

		::System::Void _ctor(::System::String* DMIAICJPPDL, ::System::String* JNDDJMAHNAI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PARENTCAMERAMOVE__CTOR_OFFSET))(this, DMIAICJPPDL, JNDDJMAHNAI);
		}
	};
}
