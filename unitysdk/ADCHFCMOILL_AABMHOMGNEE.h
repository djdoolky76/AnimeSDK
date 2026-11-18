#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADCHFCMOILL;
namespace System { class Action; }

#define ADCHFCMOILL_AABMHOMGNEE_PIFBMCODHEJ_OFFSET UNITYSDK_OFFSET(0x14344860)
#define ADCHFCMOILL_AABMHOMGNEE__CTOR_OFFSET UNITYSDK_OFFSET(0x14344450)

inline static constexpr unsigned int ADCHFCMOILL_AABMHOMGNEE_TypeDefinitionIndex = 80183;

class ADCHFCMOILL_AABMHOMGNEE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::ADCHFCMOILL* KLHPEBKNIFB; // 0x18
	::System::Boolean OJNAILKJOHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHFCMOILL_AABMHOMGNEE__CTOR_OFFSET))(this);
	}

	::System::Void PIFBMCODHEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHFCMOILL_AABMHOMGNEE_PIFBMCODHEJ_OFFSET))(this);
	}
};
