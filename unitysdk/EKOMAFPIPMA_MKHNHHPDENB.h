#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FICPDKBMDCK.h"

class AMAJILNNDMA;
namespace System { class Object; }
namespace System { class String; }

#define EKOMAFPIPMA_MKHNHHPDENB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1354F5F0)
#define EKOMAFPIPMA_MKHNHHPDENB__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1354F690)
#define EKOMAFPIPMA_MKHNHHPDENB__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1354F6A0)
#define EKOMAFPIPMA_MKHNHHPDENB__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1354F6B0)
#define EKOMAFPIPMA_MKHNHHPDENB__CTOR_OFFSET UNITYSDK_OFFSET(0x1354F560)

inline static constexpr unsigned int EKOMAFPIPMA_MKHNHHPDENB_TypeDefinitionIndex = 62756;

class EKOMAFPIPMA_MKHNHHPDENB : public ::FICPDKBMDCK
{
public:
	::AMAJILNNDMA* MELLAMKNGEO; // 0x20
	::System::Object* PNIOHMOJIFN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_MKHNHHPDENB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::AMAJILNNDMA* MELLAMKNGEO)
	{
		return ((::System::Void(*)(::PVOID, ::AMAJILNNDMA*))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_MKHNHHPDENB__CTOR_1_OFFSET))(this, MELLAMKNGEO);
	}

	::System::Void _ctor_2(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_MKHNHHPDENB__CTOR_2_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_3(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_MKHNHHPDENB__CTOR_3_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_4(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_MKHNHHPDENB__CTOR_4_OFFSET))(this, EGEGIMGMJHN);
	}
};
