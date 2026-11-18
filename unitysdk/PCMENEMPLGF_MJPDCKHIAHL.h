#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_MJPDCKHIAHL_KJCCPAOKGPJ_OFFSET UNITYSDK_OFFSET(0x18461130)
#define PCMENEMPLGF_MJPDCKHIAHL__CTOR_OFFSET UNITYSDK_OFFSET(0x18461120)

inline static constexpr unsigned int PCMENEMPLGF_MJPDCKHIAHL_TypeDefinitionIndex = 62853;

class PCMENEMPLGF_MJPDCKHIAHL : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Boolean KDJAPJFJIMJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MJPDCKHIAHL__CTOR_OFFSET))(this);
	}

	::System::Int32 KJCCPAOKGPJ(::System::Object* PAPGNKGOBGM, ::System::Object* LJJOHAAJGBG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MJPDCKHIAHL_KJCCPAOKGPJ_OFFSET))(this, PAPGNKGOBGM, LJJOHAAJGBG);
	}
};
