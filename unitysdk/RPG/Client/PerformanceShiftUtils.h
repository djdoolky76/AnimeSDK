#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAPBPBNNHP;

#define RPG_CLIENT_PERFORMANCESHIFTUTILS_CANSHIFT_OFFSET UNITYSDK_OFFSET(0x1DC3B760)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_GETFIRSTCLICKFLAG_OFFSET UNITYSDK_OFFSET(0x1DC3BAD0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_GETSHIFTRATIO_OFFSET UNITYSDK_OFFSET(0x1DC3B980)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_ISINSHIFT_OFFSET UNITYSDK_OFFSET(0x1DC3B900)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_ISSHIFTENABLED_OFFSET UNITYSDK_OFFSET(0x1DC3B7B0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_REFRESHSHIFTTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C1BEE60)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_SETFIRSTCLICKFLAG_OFFSET UNITYSDK_OFFSET(0x1DC3BB80)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_SETSHIFT_OFFSET UNITYSDK_OFFSET(0x1DC3B9E0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS__GETSHIFTMANAGER_OFFSET UNITYSDK_OFFSET(0x1C1BEEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceShiftUtils_TypeDefinitionIndex = 62118;

	class PerformanceShiftUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CanShift()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_CANSHIFT_OFFSET))();
		}

		static ::System::Boolean IsShiftEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_ISSHIFTENABLED_OFFSET))();
		}

		static ::System::Boolean IsInShift()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_ISINSHIFT_OFFSET))();
		}

		static ::System::Single GetShiftRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_GETSHIFTRATIO_OFFSET))();
		}

		static ::System::Void SetShift(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_SETSHIFT_OFFSET))(a1);
		}

		static ::System::Boolean GetFirstClickFlag()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_GETFIRSTCLICKFLAG_OFFSET))();
		}

		static ::System::Void SetFirstClickFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_SETFIRSTCLICKFLAG_OFFSET))(a1);
		}

		static ::System::Void RefreshShiftTimeScale()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_REFRESHSHIFTTIMESCALE_OFFSET))();
		}

		static ::OBAPBPBNNHP* _GetShiftManager()
		{
			return ((::OBAPBPBNNHP*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS__GETSHIFTMANAGER_OFFSET))();
		}

	};
}
