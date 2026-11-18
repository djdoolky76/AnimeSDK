#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::ChessStateMachine { class ChessStateMachineConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163E5600)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163E5610)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA_WRITE_OFFSET UNITYSDK_OFFSET(0x163E5860)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA__CTOR_OFFSET UNITYSDK_OFFSET(0x163E59E0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessStateMachineConfig_ANLKAIOMPLA_TypeDefinitionIndex = 52113;

	class ChessStateMachineConfig_ANLKAIOMPLA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ChessStateMachine::ChessStateMachineConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ChessStateMachine::ChessStateMachineConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_ANLKAIOMPLA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
