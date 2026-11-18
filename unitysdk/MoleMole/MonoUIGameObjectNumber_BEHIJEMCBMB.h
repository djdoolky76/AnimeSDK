#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUIGameObjectNumber; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D44330)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D44340)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB_WRITE_OFFSET UNITYSDK_OFFSET(0x10D445A0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D44760)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D44720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGameObjectNumber_BEHIJEMCBMB_TypeDefinitionIndex = 86280;

	class MonoUIGameObjectNumber_BEHIJEMCBMB
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_BEHIJEMCBMB_TypeDefinitionIndex)->GetStaticField(0x38970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_BEHIJEMCBMB_TypeDefinitionIndex)->GetStaticField(0x38978);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_BEHIJEMCBMB_TypeDefinitionIndex)->GetStaticField(0x38980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUIGameObjectNumber*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoUIGameObjectNumber*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_BEHIJEMCBMB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
