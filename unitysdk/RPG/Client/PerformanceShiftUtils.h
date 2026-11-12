#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAPBPBNNHP;

#define RPG_CLIENT_PERFORMANCESHIFTUTILS_CANSHIFT_OFFSET UNITYSDK_OFFSET(0xE4FC140)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_GETFIRSTCLICKFLAG_OFFSET UNITYSDK_OFFSET(0xE4FC590)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_GETSHIFTRATIO_OFFSET UNITYSDK_OFFSET(0xE4FC440)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_ISINSHIFT_OFFSET UNITYSDK_OFFSET(0xE4FC3C0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_ISSHIFTENABLED_OFFSET UNITYSDK_OFFSET(0xE4FC270)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_REFRESHSHIFTTIMESCALE_OFFSET UNITYSDK_OFFSET(0xE4FC6F0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_SETFIRSTCLICKFLAG_OFFSET UNITYSDK_OFFSET(0xE4FC640)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_SETSHIFT_OFFSET UNITYSDK_OFFSET(0xE4FC4A0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS__GETSHIFTMANAGER_OFFSET UNITYSDK_OFFSET(0xE4FC190)

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
