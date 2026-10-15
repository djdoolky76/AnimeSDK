#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMGHEKCKAAP;
namespace RPG { template <typename T> class PoolList_1; }

#define FPNNKMDELEA_BMGCLNNDLGC_OFFSET UNITYSDK_OFFSET(0x1CA73100)
#define FPNNKMDELEA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA73230)
#define FPNNKMDELEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73370)

	class FPNNKMDELEA : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::KMGHEKCKAAP*>* NIIHIBMNDFF; // 0x10
		::RPG::PoolList_1<::KMGHEKCKAAP*>* MBLMCBOBIDD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNNKMDELEA_CTOR_OFFSET))(this);
		}

		::System::Boolean BMGCLNNDLGC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPNNKMDELEA_BMGCLNNDLGC_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNNKMDELEA_CLEAR_OFFSET))(this);
		}

	};
