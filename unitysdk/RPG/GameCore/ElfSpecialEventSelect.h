#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfSelectEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSelectEventTalk; }
namespace RPG::GameCore { class ElfSpecialEventSelect; }
namespace RPG::GameCore { class ElfSpecialEventSelectItem; }
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSPECIALEVENTSELECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60B660)
#define RPG_GAMECORE_ELFSPECIALEVENTSELECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60AFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventSelect_TypeDefinitionIndex = 18491;

	class ElfSpecialEventSelect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventTip; // 0x10
		::RPG::GameCore::ElfSelectEventType Type; // 0x18
		::System::UInt32 TagID; // 0x1C
		::System::UInt32 MaterialID; // 0x20
		::System::Boolean IsExpensive; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ElfSpecialEventSelectResultItem* GoodResult; // 0x28
		::RPG::GameCore::ElfSpecialEventSelectResultItem* BadResult; // 0x30
		::Il2CppArray<::RPG::GameCore::ElfSpecialEventSelectItem*>* SelectList; // 0x38
		::Il2CppArray<::RPG::GameCore::ElfSelectEventTalk*>* TalkIDList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSpecialEventSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSpecialEventSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
