#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityMultiChatNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14315AD0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14315AE0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA_WRITE_OFFSET UNITYSDK_OFFSET(0x14315C70)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA__CTOR_OFFSET UNITYSDK_OFFSET(0x14315D90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityMultiChatNPCEnterAction_CNFNDHAAOIA_TypeDefinitionIndex = 92670;

	class MainCityMultiChatNPCEnterAction_CNFNDHAAOIA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CNFNDHAAOIA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
