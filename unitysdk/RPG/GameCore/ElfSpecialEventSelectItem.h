#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSpecialEventSelectItem; }
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6394D0)
#define RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D639250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventSelectItem_TypeDefinitionIndex = 18493;

	class ElfSpecialEventSelectItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Text; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 SelectNameTalkID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ElfSpecialEventSelectResultItem* EventResult; // 0x28
		::Il2CppArray<::System::String*>* ElfBuffList; // 0x30
		::System::UInt32 RewardID; // 0x38
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::UInt32>* SubmissionIDList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSpecialEventSelectItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSpecialEventSelectItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
