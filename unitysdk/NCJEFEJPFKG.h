#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define NCJEFEJPFKG_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x18FAEB50)
#define NCJEFEJPFKG__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAEBD0)

inline static constexpr unsigned int NCJEFEJPFKG_TypeDefinitionIndex = 77996;

class NCJEFEJPFKG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJEFEJPFKG__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + NCJEFEJPFKG_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
