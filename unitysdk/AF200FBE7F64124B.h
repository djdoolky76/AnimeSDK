#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B2169B4B4F42CCD1.h"
#include "unitysdk/AB893667BB6F371B.h"

#define AF200FBE7F64124B_F4D3BDBC52B921FD_OFFSET UNITYSDK_OFFSET(0x177ECE0)
#define AF200FBE7F64124B__CTOR_OFFSET UNITYSDK_OFFSET(0x16DDBD0)

inline static constexpr unsigned int AF200FBE7F64124B_TypeDefinitionIndex = 115;

class AF200FBE7F64124B : public ::B2169B4B4F42CCD1
{
public:
	::AB893667BB6F371B F4D3BDBC52B921FD(::System::UInt32 A17B63D59999F130)
	{
		return ((::AB893667BB6F371B(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AF200FBE7F64124B_F4D3BDBC52B921FD_OFFSET))(this, A17B63D59999F130);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF200FBE7F64124B__CTOR_OFFSET))(this);
	}
};
