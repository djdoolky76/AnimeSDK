#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BF52E70)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BF52E80)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ_WRITE_OFFSET UNITYSDK_OFFSET(0x1BF53020)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF53140)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_AKEJJGJCLPJ_TypeDefinitionIndex = 75178;

	class UIToggleButton_AKEJJGJCLPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UIToggleButton*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIToggleButton*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UIToggleButton*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIToggleButton*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AKEJJGJCLPJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
