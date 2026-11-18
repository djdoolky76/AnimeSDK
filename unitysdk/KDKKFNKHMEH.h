#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDKKFNKHMEH_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x1E2F59E0)
#define KDKKFNKHMEH_EABOJLHNBCD_OFFSET UNITYSDK_OFFSET(0x1E2F5B50)
#define KDKKFNKHMEH_HNKMCFDHOOM_OFFSET UNITYSDK_OFFSET(0x1E2F5B10)
#define KDKKFNKHMEH_JHIIOCPIABA_OFFSET UNITYSDK_OFFSET(0x1E2F5BB0)
#define KDKKFNKHMEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F5980)

inline static constexpr unsigned int KDKKFNKHMEH_TypeDefinitionIndex = 93995;

class KDKKFNKHMEH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* OOBOMJFEMEA; // 0x10
	::System::Boolean OKLLFEIJKHN; // 0x18
	::System::Boolean ILHKELCJCAC; // 0x19
	::System::Byte _padding0[0x2];
	::System::Single AJCFGFIHKML; // 0x1C
	::System::Int32 PKMKFHJFBAE; // 0x20
	::System::Int32 MGAKCKNHFGN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKKFNKHMEH__CTOR_OFFSET))(this);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKKFNKHMEH_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Int32 HNKMCFDHOOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKKFNKHMEH_HNKMCFDHOOM_OFFSET))(this);
	}

	::System::Single EABOJLHNBCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKKFNKHMEH_EABOJLHNBCD_OFFSET))(this);
	}

	::System::Single JHIIOCPIABA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKKFNKHMEH_JHIIOCPIABA_OFFSET))(this);
	}
};
