#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDGEFKPIJJJ;
namespace RPG::Client { class GridFightAugmentSelectItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA64320)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_AUGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xDA64250)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_COMPENSATIONCOIN_OFFSET UNITYSDK_OFFSET(0xDA64230)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA642A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xDA641F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xDA64210)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_SET_COMPENSATIONCOIN_OFFSET UNITYSDK_OFFSET(0xDA64240)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xDA64200)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xDA64220)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentGroupOption_TypeDefinitionIndex = 66700;

	class GridFightAugmentGroupOption : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentSelectItem*>* _Augments; // 0x10
		::System::UInt32 _CompensationCoin_k__BackingField; // 0x18
		::System::UInt32 _RollTimes_k__BackingField; // 0x1C
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x20
		::System::Void _ctor(::DDGEFKPIJJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDGEFKPIJJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_SET_MAXROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_SET_ROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompensationCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_COMPENSATIONCOIN_OFFSET))(this);
		}

		::System::Void set_CompensationCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_SET_COMPENSATIONCOIN_OFFSET))(this, a1);
		}

		::System::Int32 get_AugmentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_AUGMENTCOUNT_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentSelectItem* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPOPTION_GET_ITEM_OFFSET))(this, a1);
		}

	};
}
