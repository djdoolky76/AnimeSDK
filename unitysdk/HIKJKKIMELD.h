#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKEOGIDPIKB.h"
#include "unitysdk/System/ValueType.h"

class IJBKAABGJJB;
namespace System { class String; }

#define HIKJKKIMELD_BJIOAGEGLKK_OFFSET UNITYSDK_OFFSET(0x6606E0)
#define HIKJKKIMELD_CFBHCJODKGP_OFFSET UNITYSDK_OFFSET(0x660650)
#define HIKJKKIMELD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6605C0)
#define HIKJKKIMELD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6605B0)

inline static constexpr unsigned int HIKJKKIMELD_TypeDefinitionIndex = 74936;

struct alignas(8) HIKJKKIMELD
{
	::IJBKAABGJJB* ADACEEBMFCI; // 0x10
	::HKEOGIDPIKB IEMHGNOMJEP; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKJKKIMELD_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKJKKIMELD_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean CFBHCJODKGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKJKKIMELD_CFBHCJODKGP_OFFSET))(this);
	}

	::System::Boolean BJIOAGEGLKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKJKKIMELD_BJIOAGEGLKK_OFFSET))(this);
	}
};
