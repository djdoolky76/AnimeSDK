#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OPOLGOPBBJB_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0xFD989E0)
#define OPOLGOPBBJB_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0xFD98850)
#define OPOLGOPBBJB_GFBHAONGMOP_OFFSET UNITYSDK_OFFSET(0xFD98990)
#define OPOLGOPBBJB_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0xFD98800)
#define OPOLGOPBBJB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xFD98940)
#define OPOLGOPBBJB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xFD988C0)
#define OPOLGOPBBJB__CTOR_OFFSET UNITYSDK_OFFSET(0xFD987F0)

inline static constexpr unsigned int OPOLGOPBBJB_TypeDefinitionIndex = 69597;

class OPOLGOPBBJB : public ::System::Object
{
public:
	::System::Action* NOHAMNDLOCF; // 0x10
	::System::Single NHLCCIEKEPD; // 0x18
	::System::Single HACJFKBLODH; // 0x1C
	::System::Boolean HPINBCPMHJE; // 0x20

	::System::Void _ctor(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPOLGOPBBJB__CTOR_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOLGOPBBJB_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOLGOPBBJB_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPOLGOPBBJB_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOLGOPBBJB_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Single GFBHAONGMOP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOLGOPBBJB_GFBHAONGMOP_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOLGOPBBJB_CDIPBMMDICL_OFFSET))(this);
	}
};
