#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/ClockParkCardRarity.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::Client { class ClockParkSlotInfo; }
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace RPG::GameCore { class ClockParkCardRow; }
namespace RPG::GameCore { class ClockParkEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKCARDITEM_ADDDICE_OFFSET UNITYSDK_OFFSET(0xD4E4C20)
#define RPG_CLIENT_CLOCKPARKCARDITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4E56D0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E28F0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GETAVAILABLEACTIONROW_OFFSET UNITYSDK_OFFSET(0xD4E49F0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GETEFFECTROWS_OFFSET UNITYSDK_OFFSET(0xD4E4660)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDDESC_OFFSET UNITYSDK_OFFSET(0xD4E5550)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDFOREIMGPATH_OFFSET UNITYSDK_OFFSET(0xD4E5630)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDIMGPATH_OFFSET UNITYSDK_OFFSET(0xD4E5680)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xD4E2E10)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTAG_OFFSET UNITYSDK_OFFSET(0xD4E55C0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSPARAM_OFFSET UNITYSDK_OFFSET(0xD4E54E0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSTYPE_OFFSET UNITYSDK_OFFSET(0xD4E5490)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPS_OFFSET UNITYSDK_OFFSET(0xD4E53B0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDVALUE_OFFSET UNITYSDK_OFFSET(0xD4E5390)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD4E5530)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_SLOTINFO_OFFSET UNITYSDK_OFFSET(0xD4E5370)
#define RPG_CLIENT_CLOCKPARKCARDITEM_HASANYDICE_OFFSET UNITYSDK_OFFSET(0xD4E4510)
#define RPG_CLIENT_CLOCKPARKCARDITEM_HASEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0xD4E24F0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_REMOVEDICE_OFFSET UNITYSDK_OFFSET(0xD4E4F30)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SETDICE_OFFSET UNITYSDK_OFFSET(0xD4E29C0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SET_CARDVALUE_OFFSET UNITYSDK_OFFSET(0xD4E53A0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD4E5540)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SET_SLOTINFO_OFFSET UNITYSDK_OFFSET(0xD4E5380)
#define RPG_CLIENT_CLOCKPARKCARDITEM_TRYADDDICE_OFFSET UNITYSDK_OFFSET(0xD4E4AF0)
#define RPG_CLIENT_CLOCKPARKCARDITEM__INITCARDHINTRARITY_OFFSET UNITYSDK_OFFSET(0xD4E2FD0)
#define RPG_CLIENT_CLOCKPARKCARDITEM__ONDICECHANGED_OFFSET UNITYSDK_OFFSET(0xD4E4E70)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCardItem_TypeDefinitionIndex = 62869;

	class ClockParkCardItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeBuffHint; // 0x10
		::RPG::Client::ClockParkEffectResult* SuccessEffectResult; // 0x18
		::RPG::GameCore::ClockParkCardRow* _Config_k__BackingField; // 0x20
		::RPG::Client::ClockParkSlotInfo* _SlotInfo_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeDisplayNegativeHint; // 0x30
		::RPG::Client::ClockParkEffectResult* EffectResult; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeDisplayPositiveHint; // 0x40
		::System::UInt32 CardID; // 0x48
		::System::UInt32 _CardValue_k__BackingField; // 0x4C
		::RPG::Client::ClockParkCardRarity Rarity; // 0x50
		static ::RPG::Client::ClockParkEffectResult** StaticGet__EffectHelper()
		{
			return (::RPG::Client::ClockParkEffectResult**)UnitySDK::FromName("RPG.Client", "ClockParkCardItem")->GetStaticField(0x16980);
		}

		static ::System::Action_1<::RPG::Client::ClockParkCardItem*>** StaticGet_OnDiceChangedActionCallback()
		{
			return (::System::Action_1<::RPG::Client::ClockParkCardItem*>**)UnitySDK::FromName("RPG.Client", "ClockParkCardItem")->GetStaticField(0x16988);
		}

		static ::System::UInt32* StaticGet__DiceMaxValue()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ClockParkCardItem")->GetStaticField(0x4A90);
		}

		static ::System::UInt32* StaticGet__DiceMinValue()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ClockParkCardItem")->GetStaticField(0x4A94);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_CCTOR_OFFSET))();
		}

		::System::Boolean HasEmptySlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_HASEMPTYSLOT_OFFSET))(this);
		}

		::System::Boolean HasAnyDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_HASANYDICE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ClockParkEffectRow*>* GetEffectRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ClockParkEffectRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GETEFFECTROWS_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkCardActionRow* GetAvailableActionRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkCardActionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GETAVAILABLEACTIONROW_OFFSET))(this, a1);
		}

		::System::Boolean TryAddDice(::RPG::Client::ClockParkDiceItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkDiceItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_TRYADDDICE_OFFSET))(this, a1);
		}

		::System::Boolean AddDice(::System::Int32 a1, ::RPG::Client::ClockParkDiceItem* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkDiceItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_ADDDICE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDice(::System::Int32 a1, ::RPG::Client::ClockParkDiceItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkDiceItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SETDICE_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveDice(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_REMOVEDICE_OFFSET))(this, a1);
		}

		::System::Void _InitCardHintRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM__INITCARDHINTRARITY_OFFSET))(this);
		}

		::System::Void _OnDiceChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM__ONDICECHANGED_OFFSET))(this);
		}

		::RPG::Client::ClockParkSlotInfo* get_SlotInfo()
		{
			return ((::RPG::Client::ClockParkSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_SLOTINFO_OFFSET))(this);
		}

		::System::Void set_SlotInfo(::RPG::Client::ClockParkSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SET_SLOTINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_CardValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDVALUE_OFFSET))(this);
		}

		::System::Void set_CardValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SET_CARDVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CardTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPS_OFFSET))(this);
		}

		::System::UInt32 get_CardTipsParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSPARAM_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkCardRow* get_Config()
		{
			return ((::RPG::GameCore::ClockParkCardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ClockParkCardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkCardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CardDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_CardTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTAG_OFFSET))(this);
		}

		::System::String* get_CardForeImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDFOREIMGPATH_OFFSET))(this);
		}

		::System::String* get_CardImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDIMGPATH_OFFSET))(this);
		}

		::System::UInt32 get_CardSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDSLOTCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkCardTipsTypeEnum get_CardTipsType()
		{
			return ((::RPG::GameCore::ClockParkCardTipsTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSTYPE_OFFSET))(this);
		}

	};
}
