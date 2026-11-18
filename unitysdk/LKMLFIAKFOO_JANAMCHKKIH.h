#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_JANAMCHKKIH_AENCIJFGFCM_OFFSET UNITYSDK_OFFSET(0x14DBD420)
#define LKMLFIAKFOO_JANAMCHKKIH_HIKBFHGMOIG_OFFSET UNITYSDK_OFFSET(0x14DBD380)
#define LKMLFIAKFOO_JANAMCHKKIH_MOENJEKBGFB_OFFSET UNITYSDK_OFFSET(0x14DBD3D0)
#define LKMLFIAKFOO_JANAMCHKKIH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBD370)

inline static constexpr unsigned int LKMLFIAKFOO_JANAMCHKKIH_TypeDefinitionIndex = 43609;

class LKMLFIAKFOO_JANAMCHKKIH : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10
	::System::Action* GOOPOJIJKKJ; // 0x18
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x20
	::System::Action* PFIGAHJOKAE; // 0x28
	::System::Int32 KLJNHMGMDNP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_JANAMCHKKIH__CTOR_OFFSET))(this);
	}

	::System::Void HIKBFHGMOIG(::System::Boolean LFPIKGNKOLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_JANAMCHKKIH_HIKBFHGMOIG_OFFSET))(this, LFPIKGNKOLM);
	}

	::System::Void AENCIJFGFCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_JANAMCHKKIH_AENCIJFGFCM_OFFSET))(this);
	}

	::System::Void MOENJEKBGFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_JANAMCHKKIH_MOENJEKBGFB_OFFSET))(this);
	}
};
