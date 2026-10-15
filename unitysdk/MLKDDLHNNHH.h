#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
namespace System { class Action; }

#define MLKDDLHNNHH_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9B3F50)
#define MLKDDLHNNHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B4360)
#define MLKDDLHNNHH_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0xB9B40D0)
#define MLKDDLHNNHH_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB9B4320)
#define MLKDDLHNNHH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB9B4010)
#define MLKDDLHNNHH_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xB9B4180)
#define MLKDDLHNNHH_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB9B42E0)
#define MLKDDLHNNHH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB9B42A0)

	class MLKDDLHNNHH : public ::System::Object
	{
	public:
		::System::Action* LGAOOKPFIMF; // 0x10
		::System::Boolean APHAAOCDAGN; // 0x18
		::System::Boolean MEIOBBAOACJ; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_CLEAR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void DDKJIMBJBMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_DDKJIMBJBMH_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_ONCLEAR_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKDDLHNNHH_EPJFIHHDMAK_OFFSET))(this);
		}

	};
