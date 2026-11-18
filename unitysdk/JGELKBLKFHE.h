#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGELKBLKFHE_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1A475470)
#define JGELKBLKFHE_EFJMALGNJBG_OFFSET UNITYSDK_OFFSET(0x1A475610)
#define JGELKBLKFHE_ELHJGNAMKHJ_OFFSET UNITYSDK_OFFSET(0x1A4753E0)
#define JGELKBLKFHE_HIJFIKNDGGN_OFFSET UNITYSDK_OFFSET(0x1A475530)
#define JGELKBLKFHE_ODDAFDEGLHI_OFFSET UNITYSDK_OFFSET(0x1A475420)
#define JGELKBLKFHE_OLAJNCBNDIO_OFFSET UNITYSDK_OFFSET(0x1A4754D0)
#define JGELKBLKFHE_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A4753A0)
#define JGELKBLKFHE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A475360)
#define JGELKBLKFHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A475460)

inline static constexpr unsigned int JGELKBLKFHE_TypeDefinitionIndex = 45401;

class JGELKBLKFHE : public ::System::Object
{
public:
	::System::Boolean GIIHDHHJLOJ; // 0x10
	::System::Boolean DKDJPHNMENM; // 0x11
	::System::Boolean GGMOMPPLNIG; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void ELHJGNAMKHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_ELHJGNAMKHJ_OFFSET))(this);
	}

	::System::Void ODDAFDEGLHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_ODDAFDEGLHI_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void OLAJNCBNDIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_OLAJNCBNDIO_OFFSET))(this);
	}

	::System::Void HIJFIKNDGGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_HIJFIKNDGGN_OFFSET))(this);
	}

	::System::Void EFJMALGNJBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELKBLKFHE_EFJMALGNJBG_OFFSET))(this);
	}
};
