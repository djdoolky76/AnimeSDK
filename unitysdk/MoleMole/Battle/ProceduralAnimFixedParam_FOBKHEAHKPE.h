#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107955B0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107955C0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE_WRITE_OFFSET UNITYSDK_OFFSET(0x107959C0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10795C10)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimFixedParam_FOBKHEAHKPE_TypeDefinitionIndex = 65924;

	class ProceduralAnimFixedParam_FOBKHEAHKPE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ProceduralAnimFixedParam& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Battle::ProceduralAnimFixedParam& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_FOBKHEAHKPE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
