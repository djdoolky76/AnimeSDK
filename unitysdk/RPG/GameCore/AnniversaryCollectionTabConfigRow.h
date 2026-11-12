#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnniversaryCollectionTabConfigRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E616210)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E615F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionTabConfigRow_TypeDefinitionIndex = 12729;

	class AnniversaryCollectionTabConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishCondition; // 0x10
		::Il2CppArray<::System::UInt32>* RelatedAnniversaryContentList; // 0x18
		::System::String* TabIcon; // 0x20
		::System::UInt32 TabID; // 0x28
		::RPG::GameCore::AnniversaryCollectionPanelEnum PanelType; // 0x2C
		::RPG::Client::TextID TabName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnniversaryCollectionTabConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
