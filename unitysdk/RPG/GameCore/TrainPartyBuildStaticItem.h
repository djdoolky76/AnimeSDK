#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2F260)
#define RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildStaticItem_TypeDefinitionIndex = 16270;

	class TrainPartyBuildStaticItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* UniqueName; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::RPG::MVector3 LocalRotation; // 0x2C
		::RPG::MVector3 LocalScale; // 0x38
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildItemSlot*>* Slots; // 0x48
		::System::String* BindFloorCustomString; // 0x50
		::System::Int32 BindFloorCustomValue; // 0x58
		::RPG::GameCore::LogicOperation BindDynamicLogic; // 0x5C
		::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* BindDynamicValue; // 0x60
		::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* BindDynamicValueExt; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildStaticItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildStaticItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
