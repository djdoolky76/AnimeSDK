#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define MNKBBMJPIGA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x174AEE70)
#define MNKBBMJPIGA_DPJGFIFIKOM_OFFSET UNITYSDK_OFFSET(0x174AEE60)
#define MNKBBMJPIGA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x174AEE80)
#define MNKBBMJPIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x174AEE50)

inline static constexpr unsigned int MNKBBMJPIGA_TypeDefinitionIndex = 62483;

class MNKBBMJPIGA : public ::IGKOFMFKNNO
{
public:
	::System::UInt32 _JFPALPENGNB_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKBBMJPIGA__CTOR_OFFSET))(this);
	}

	::System::Void DPJGFIFIKOM(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNKBBMJPIGA_DPJGFIFIKOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKBBMJPIGA_ACOEONABOJL_OFFSET))(this);
	}

	static ::MNKBBMJPIGA* JFDOOELFAOA()
	{
		return ((::MNKBBMJPIGA*(*)())((::PBYTE)hIl2Cpp + MNKBBMJPIGA_JFDOOELFAOA_OFFSET))();
	}
};
