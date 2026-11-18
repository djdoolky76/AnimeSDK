#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6872B0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6872C0)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ_WRITE_OFFSET UNITYSDK_OFFSET(0x1C687520)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6876A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UISlider_DKBMBEGJEPJ_TypeDefinitionIndex = 84431;

	class UISlider_DKBMBEGJEPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UISlider*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UISlider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UISlider*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UISlider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_DKBMBEGJEPJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
