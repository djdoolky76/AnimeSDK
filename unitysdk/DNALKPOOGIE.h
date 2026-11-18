#pragma once
#include "unitysdk/unitysdk.h"

#define DNALKPOOGIE_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15879D00)
#define DNALKPOOGIE_FKNCDBFJKJG_OFFSET UNITYSDK_OFFSET(0x15879A40)
#define DNALKPOOGIE_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x15879CE0)
#define DNALKPOOGIE_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x15879CF0)
#define DNALKPOOGIE_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x15879CD0)
#define DNALKPOOGIE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x158795E0)
#define DNALKPOOGIE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15879B20)
#define DNALKPOOGIE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x158798D0)
#define DNALKPOOGIE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15879C40)
#define DNALKPOOGIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15879C90)

inline static constexpr unsigned int DNALKPOOGIE_TypeDefinitionIndex = 68141;

class DNALKPOOGIE
{
public:
	::System::Int32 EMIMKGOEAJB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_ONRECYCLE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_GONGHOPLHBD_OFFSET))(this);
	}

	::System::Boolean FKNCDBFJKJG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_FKNCDBFJKJG_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNALKPOOGIE_ANEOCOIFDDJ_OFFSET))(this);
	}
};
