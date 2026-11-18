#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIGDBLKDFIF;

#define DANIPGGLEAK_LFAMEJOHPDD_COMPARE_OFFSET UNITYSDK_OFFSET(0x19507610)
#define DANIPGGLEAK_LFAMEJOHPDD__CTOR_OFFSET UNITYSDK_OFFSET(0x19507680)

inline static constexpr unsigned int DANIPGGLEAK_LFAMEJOHPDD_TypeDefinitionIndex = 17749;

class DANIPGGLEAK_LFAMEJOHPDD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DANIPGGLEAK_LFAMEJOHPDD__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::LIGDBLKDFIF* HAAEBCOBKFF, ::LIGDBLKDFIF* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::LIGDBLKDFIF*, ::LIGDBLKDFIF*))((::PBYTE)hIl2Cpp + DANIPGGLEAK_LFAMEJOHPDD_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
