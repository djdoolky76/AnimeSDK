#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEPCHFNCDPO.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFJDHNBAMKE_DIGEIBDMKDO_OFFSET UNITYSDK_OFFSET(0x363D60)
#define BFJDHNBAMKE_FAHPGMLGALM_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define BFJDHNBAMKE_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x97E2C0)

inline static constexpr unsigned int BFJDHNBAMKE_TypeDefinitionIndex = 95304;

struct alignas(8) BFJDHNBAMKE
{
	::System::Collections::Generic::List_1<::IEPCHFNCDPO>* AJPFOFGJEHG; // 0x10
	::System::UInt32 _DGNFONGLMAB_k__BackingField; // 0x18

	::System::UInt32 DIGEIBDMKDO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJDHNBAMKE_DIGEIBDMKDO_OFFSET))(this);
	}

	::System::Void FAHPGMLGALM(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFJDHNBAMKE_FAHPGMLGALM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJDHNBAMKE_JJEJHGOJOII_OFFSET))(this);
	}
};
