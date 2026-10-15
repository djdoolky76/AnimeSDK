#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPGBDINBAB;
namespace RPG::Client { class CakeRaceEffectDataItem; }

#define ECPGBDINBAB___C__DISPLAYCLASS76_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13306F10)
#define ECPGBDINBAB___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__0_OFFSET UNITYSDK_OFFSET(0x133086C0)
#define ECPGBDINBAB___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__1_OFFSET UNITYSDK_OFFSET(0x13308730)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass76_0_TypeDefinitionIndex = 78017;

	class ECPGBDINBAB___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceEffectDataItem* effectDataItem; // 0x10
		::ECPGBDINBAB* __4__this; // 0x18
		::System::Int32 effectIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS76_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetupFightEffectShowTarget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__0_OFFSET))(this);
		}

		::System::Void __SetupFightEffectShowTarget_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__1_OFFSET))(this);
		}

	};
