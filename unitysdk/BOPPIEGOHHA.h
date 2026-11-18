#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class BFONKMKLHNI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOPPIEGOHHA_CJFFGAKECLH_OFFSET UNITYSDK_OFFSET(0x944DB0)
#define BOPPIEGOHHA_JICGPHAIEMP_OFFSET UNITYSDK_OFFSET(0x944DD0)
#define BOPPIEGOHHA_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x944DC0)

inline static constexpr unsigned int BOPPIEGOHHA_TypeDefinitionIndex = 28728;

struct alignas(8) BOPPIEGOHHA
{
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BFONKMKLHNI*>* AJAOGNHILFK; // 0x10

	::System::Void CJFFGAKECLH(::BFONKMKLHNI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BFONKMKLHNI*))((::PBYTE)hIl2Cpp + BOPPIEGOHHA_CJFFGAKECLH_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPPIEGOHHA_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Boolean JICGPHAIEMP(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOPPIEGOHHA_JICGPHAIEMP_OFFSET))(this, MGMDLMBEDJF);
	}
};
