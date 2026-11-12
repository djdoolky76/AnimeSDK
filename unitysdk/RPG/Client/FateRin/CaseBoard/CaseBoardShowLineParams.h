#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::CaseBoard { class TeamRelationViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWLINEPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xD918FD0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardShowLineParams_TypeDefinitionIndex = 83589;

	class CaseBoardShowLineParams : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* EffectList; // 0x10
		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* TeamRelation; // 0x18
		::System::Boolean NeedWaitFinish; // 0x20
		::System::Boolean IsShowTag; // 0x21
		::System::Boolean IsShow; // 0x22
		::System::Byte _padding0[0x1];
		::System::Single TagRatio; // 0x24
		::System::Single SagAmountRatio; // 0x28
		::System::Single Duration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWLINEPARAMS_CTOR_OFFSET))(this);
		}

	};
}
