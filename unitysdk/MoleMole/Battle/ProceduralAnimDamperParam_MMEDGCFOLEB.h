#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19082220)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19082230)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB_WRITE_OFFSET UNITYSDK_OFFSET(0x19082500)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x19082730)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x190826D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimDamperParam_MMEDGCFOLEB_TypeDefinitionIndex = 86903;

	class ProceduralAnimDamperParam_MMEDGCFOLEB
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimDamperParam_MMEDGCFOLEB_TypeDefinitionIndex)->GetStaticField(0x41A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ProceduralAnimDamperParam& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Battle::ProceduralAnimDamperParam& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_MMEDGCFOLEB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
