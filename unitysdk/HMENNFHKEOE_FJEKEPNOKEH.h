#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMENNFHKEOE_KOONENKMDMD;
namespace System { class String; }

#define HMENNFHKEOE_FJEKEPNOKEH_JAKOEPBNFEJ_OFFSET UNITYSDK_OFFSET(0x15DC5EC0)
#define HMENNFHKEOE_FJEKEPNOKEH__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC5EB0)

inline static constexpr unsigned int HMENNFHKEOE_FJEKEPNOKEH_TypeDefinitionIndex = 53336;

class HMENNFHKEOE_FJEKEPNOKEH : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::HMENNFHKEOE_KOONENKMDMD* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_FJEKEPNOKEH__CTOR_OFFSET))(this);
	}

	::System::Void JAKOEPBNFEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_FJEKEPNOKEH_JAKOEPBNFEJ_OFFSET))(this);
	}
};
