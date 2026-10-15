#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class GuideRogueDataConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDEROGUEDATACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74FE40)
#define RPG_GAMECORE_GUIDEROGUEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74FAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueDataConfigRow_TypeDefinitionIndex = 13394;

	class GuideRogueDataConfigRow : public ::System::Object
	{
	public:
		::System::String* TabIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* OpenConditions; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x28
		::System::UInt32 Priority; // 0x30
		::System::UInt32 MapEntranceID; // 0x34
		::System::UInt32 ID; // 0x38
		::System::UInt32 RelatedID; // 0x3C
		::System::UInt32 TabID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUEDATACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuideRogueDataConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuideRogueDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUEDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
