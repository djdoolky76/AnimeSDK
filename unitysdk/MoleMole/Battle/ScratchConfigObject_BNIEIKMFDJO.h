#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class ScratchConfigObject; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174C0600)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174C0610)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO_WRITE_OFFSET UNITYSDK_OFFSET(0x174C1460)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x174C1D30)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO__CTOR_OFFSET UNITYSDK_OFFSET(0x174C1CF0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ScratchConfigObject_BNIEIKMFDJO_TypeDefinitionIndex = 67332;

	class ScratchConfigObject_BNIEIKMFDJO
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_BNIEIKMFDJO_TypeDefinitionIndex)->GetStaticField(0x4A480);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_BNIEIKMFDJO_TypeDefinitionIndex)->GetStaticField(0x4A488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_BNIEIKMFDJO_TypeDefinitionIndex)->GetStaticField(0x4A490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_BNIEIKMFDJO_TypeDefinitionIndex)->GetStaticField(0x4A498);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ScratchConfigObject*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ScratchConfigObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Battle::ScratchConfigObject*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ScratchConfigObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_BNIEIKMFDJO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
