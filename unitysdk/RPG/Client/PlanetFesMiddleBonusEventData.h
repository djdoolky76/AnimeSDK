#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesBonusEventData.h"
class OJHHACMHFKA;

#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET UNITYSDK_OFFSET(0xE636960)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE6368E0)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET UNITYSDK_OFFSET(0xE636D30)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xE636B90)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET UNITYSDK_OFFSET(0xE636BF0)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xE636AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiddleBonusEventData_TypeDefinitionIndex = 68489;

	class PlanetFesMiddleBonusEventData : public ::RPG::Client::PlanetFesBonusEventData
	{
	public:
		::System::Boolean _WaitInteractResult; // 0x80
		::System::Byte _padding0[0x3];
		::System::UInt32 _TakenNum; // 0x84
		::System::UInt32 _TotalNum; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean CanRefreshAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void _OnEventFinishCountUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET))(this);
		}

		::System::Void RequestInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET))(this);
		}

	};
}
