#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStoryLineBonusRow; }

#define RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFE300)
#define RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EDFE020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryLineBonusRow_TypeDefinitionIndex = 12523;

	class SwordTrainingStoryLineBonusRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* EffectDescList; // 0x10
		::RPG::Client::TextID EffectDesc1; // 0x18
		::RPG::Client::TextID EffectDesc3; // 0x28
		::System::UInt32 StoryLineNum; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EffectDesc2; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingStoryLineBonusRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
