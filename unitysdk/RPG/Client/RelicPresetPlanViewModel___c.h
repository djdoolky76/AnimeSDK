#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetSlotViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE936330)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE936370)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__47_0_OFFSET UNITYSDK_OFFSET(0xE9363A0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__52_0_OFFSET UNITYSDK_OFFSET(0xE936460)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__50_0_OFFSET UNITYSDK_OFFSET(0xE936400)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__38_0_OFFSET UNITYSDK_OFFSET(0xE936380)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__41_0_OFFSET UNITYSDK_OFFSET(0xE936390)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanViewModel___c_TypeDefinitionIndex = 68821;

	class RelicPresetPlanViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A170);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A178);
		}

		static ::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A180);
		}

		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A188);
		}

		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A190);
		}

		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildPropertyViewModels_b__38_0(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__38_0_OFFSET))(this, a1);
		}

		::System::Boolean __UpdatePropertyViewModels_b__41_0(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__41_0_OFFSET))(this, a1);
		}

		::System::UInt32 _AddPlan_b__47_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__47_0_OFFSET))(this, a1);
		}

		::System::UInt32 _UpdatePlanRelics_b__50_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__50_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasEmptySlot_b__52_0(::RPG::Client::RelicPresetSlotViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetSlotViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__52_0_OFFSET))(this, a1);
		}

	};
}
