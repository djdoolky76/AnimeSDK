#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnniversaryCollectionTabConfigRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F5F90)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3F5CD0)

namespace RPG::GameCore
{
	class AnniversaryCollectionTabConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedAnniversaryContentList; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishCondition; // 0x18
		::System::String* TabIcon; // 0x20
		::RPG::Client::TextID TabName; // 0x28
		::System::UInt32 TabID; // 0x38
		::RPG::GameCore::AnniversaryCollectionPanelEnum PanelType; // 0x3C
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
