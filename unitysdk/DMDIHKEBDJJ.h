#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KANAGLAENIO;
namespace RPG { template <typename T> class PoolList_1; }

#define DMDIHKEBDJJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA2ED00)
#define DMDIHKEBDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EEE0)
#define DMDIHKEBDJJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA2ED90)
#define DMDIHKEBDJJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA2EEA0)

	class DMDIHKEBDJJ : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::UInt32>* OALMIOJOEAB; // 0x10
		::RPG::PoolList_1<::System::UInt32>* LJKPKIBFJJD; // 0x18
		::KANAGLAENIO* LCAHACFMHGK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDIHKEBDJJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDIHKEBDJJ_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDIHKEBDJJ_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDIHKEBDJJ_ONRECYCLE_OFFSET))(this);
		}

	};
