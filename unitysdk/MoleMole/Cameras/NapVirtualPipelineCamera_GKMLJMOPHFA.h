#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GKMLJMOPHFA_KDNBDHDDBDL_OFFSET UNITYSDK_OFFSET(0xFA8C510)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GKMLJMOPHFA__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8C500)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_GKMLJMOPHFA_TypeDefinitionIndex = 47283;

	class NapVirtualPipelineCamera_GKMLJMOPHFA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* AJIAEKCFFHJ; // 0x10
		::System::String* CEOABKCAFOF; // 0x18
		::Il2CppArray<::System::String*>* JLCHCGOHHEP; // 0x20
		::UnityEngine::LayerMask INMJMJHIFDL; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GKMLJMOPHFA__CTOR_OFFSET))(this);
		}

		::System::Boolean KDNBDHDDBDL(::UnityEngine::RaycastHit OFLHPPDJLNL)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GKMLJMOPHFA_KDNBDHDDBDL_OFFSET))(this, OFLHPPDJLNL);
		}
	};
}
