#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIHadalZone_LayerConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1768ACA0)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1768ACB0)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI_WRITE_OFFSET UNITYSDK_OFFSET(0x1768AE40)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1768AFD0)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1768AF90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerConfig_CKJBMACPNLI_TypeDefinitionIndex = 82594;

	class UIHadalZone_LayerConfig_CKJBMACPNLI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::GameObject*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerConfig_CKJBMACPNLI_TypeDefinitionIndex)->GetStaticField(0x489F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIHadalZone_LayerConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIHadalZone_LayerConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIHadalZone_LayerConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_LayerConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CKJBMACPNLI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
