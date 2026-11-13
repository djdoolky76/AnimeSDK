#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class DepletablePoolContentRow; }

#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B805880)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1B8058E0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ISGRANDPRIZE_OFFSET UNITYSDK_OFFSET(0x1B805920)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ISTAKEN_OFFSET UNITYSDK_OFFSET(0x1B805930)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1B805910)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1B8058F0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x1B805900)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_SETTAKEN_OFFSET UNITYSDK_OFFSET(0x1B8032E0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_SET_ISTAKEN_OFFSET UNITYSDK_OFFSET(0x1B805940)

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePoolPrize_TypeDefinitionIndex = 76978;

	class DepletablePoolPrize : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
		::System::UInt32 _ItemNum_k__BackingField; // 0x18
		::System::Boolean _IsTaken_k__BackingField; // 0x1C
		::System::Boolean _IsGrandPrize_k__BackingField; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 _ItemId_k__BackingField; // 0x20
		::System::UInt32 _ContentId_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::GameCore::DepletablePoolContentRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DepletablePoolContentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_CTOR_OFFSET))(this, a1);
		}

		::System::Void SetTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_SETTAKEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ITEMID_OFFSET))(this);
		}

		::System::UInt32 get_ItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ITEMNUM_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ITEMDATA_OFFSET))(this);
		}

		::System::Boolean get_IsGrandPrize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ISGRANDPRIZE_OFFSET))(this);
		}

		::System::Boolean get_IsTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_GET_ISTAKEN_OFFSET))(this);
		}

		::System::Void set_IsTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLPRIZE_SET_ISTAKEN_OFFSET))(this, a1);
		}

	};
}
