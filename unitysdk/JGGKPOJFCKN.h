#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PIPAOOIIBJH;

#define JGGKPOJFCKN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x198B8510)
#define JGGKPOJFCKN_JMAFOLJBDGG_OFFSET UNITYSDK_OFFSET(0x198B8600)
#define JGGKPOJFCKN_OHEEKHADOCM_OFFSET UNITYSDK_OFFSET(0x198B8580)
#define JGGKPOJFCKN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x198B8400)
#define JGGKPOJFCKN_PAGKDPGFPEB_OFFSET UNITYSDK_OFFSET(0x198B84B0)
#define JGGKPOJFCKN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x198B8460)
#define JGGKPOJFCKN__CTOR_OFFSET UNITYSDK_OFFSET(0x198B8500)

inline static constexpr unsigned int JGGKPOJFCKN_TypeDefinitionIndex = 75904;

class JGGKPOJFCKN : public ::System::Object
{
public:
	::System::Double HACJFKBLODH; // 0x10
	::System::Double MDPPNMIPDMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKPOJFCKN__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single JFLHDBCKGGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGGKPOJFCKN_OKJCHFGIKBH_OFFSET))(this, JFLHDBCKGGF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKPOJFCKN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PAGKDPGFPEB(::PIPAOOIIBJH*& IIOENHKMJNE)
	{
		return ((::System::Void(*)(::PVOID, ::PIPAOOIIBJH*&))((::PBYTE)hIl2Cpp + JGGKPOJFCKN_PAGKDPGFPEB_OFFSET))(this, IIOENHKMJNE);
	}

	::System::Void BBOMJDBNHIC(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGGKPOJFCKN_BBOMJDBNHIC_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Boolean OHEEKHADOCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKPOJFCKN_OHEEKHADOCM_OFFSET))(this);
	}

	::System::Single JMAFOLJBDGG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKPOJFCKN_JMAFOLJBDGG_OFFSET))(this);
	}
};
