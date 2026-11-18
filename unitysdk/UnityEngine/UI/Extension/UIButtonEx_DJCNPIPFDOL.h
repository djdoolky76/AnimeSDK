#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1F83A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C1F83B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL_WRITE_OFFSET UNITYSDK_OFFSET(0x1C1F8550)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1F86E0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F86A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_DJCNPIPFDOL_TypeDefinitionIndex = 48604;

	class UIButtonEx_DJCNPIPFDOL
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonEx_DJCNPIPFDOL_TypeDefinitionIndex)->GetStaticField(0x494B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UIButtonEx*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UIButtonEx*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DJCNPIPFDOL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
