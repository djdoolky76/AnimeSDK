#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordOperation; }
namespace RPG::GameCore { class TutorialOperationRecord; }

#define RPG_GAMECORE_TUTORIALOPERATIONRECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3F990)
#define RPG_GAMECORE_TUTORIALOPERATIONRECORD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3F8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialOperationRecord_TypeDefinitionIndex = 18205;

	class TutorialOperationRecord : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RecordOperation*>* OpList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALOPERATIONRECORD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialOperationRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialOperationRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALOPERATIONRECORD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
