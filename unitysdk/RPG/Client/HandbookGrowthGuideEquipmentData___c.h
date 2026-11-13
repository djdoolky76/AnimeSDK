#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HandbookGrowthGuideEquipmentDataItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5CE570)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CE5B0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C___PREPAREDATALIST_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C5CE5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentData___c_TypeDefinitionIndex = 67547;

	class HandbookGrowthGuideEquipmentData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1CF80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1CF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __PrepareDataList_b__8_0(::RPG::Client::HandbookGrowthGuideEquipmentDataItem* a1, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem*, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C___PREPAREDATALIST_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
