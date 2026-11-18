#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHOGAEIGHGD.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMHAKAJPIIB_JAMHDAPAKHM_OFFSET UNITYSDK_OFFSET(0xFF8DBF0)
#define BMHAKAJPIIB_KABJJCFLHPF_OFFSET UNITYSDK_OFFSET(0xFF8DF20)
#define BMHAKAJPIIB_KEPJKBFOPDN_OFFSET UNITYSDK_OFFSET(0xFF8DD70)
#define BMHAKAJPIIB_PPBKAMGHPEH_OFFSET UNITYSDK_OFFSET(0xFF8DE80)
#define BMHAKAJPIIB__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8DBE0)

inline static constexpr unsigned int BMHAKAJPIIB_TypeDefinitionIndex = 92661;

class BMHAKAJPIIB : public ::System::Object
{
public:
	::IBENDELLLAO* LMJBDKEEOHJ; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NOKDBGIOANI; // 0x18
	::IHOGAEIGHGD FJHJLABCGBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAKAJPIIB__CTOR_OFFSET))(this);
	}

	::System::Void JAMHDAPAKHM(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMHAKAJPIIB_JAMHDAPAKHM_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void KEPJKBFOPDN(::IBENDELLLAO* HHIJHDFHPOI, ::System::Int32 LABJKINHNMH, ::IHOGAEIGHGD FJHJLABCGBH)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Int32, ::IHOGAEIGHGD))((::PBYTE)hIl2Cpp + BMHAKAJPIIB_KEPJKBFOPDN_OFFSET))(this, HHIJHDFHPOI, LABJKINHNMH, FJHJLABCGBH);
	}

	::System::Void PPBKAMGHPEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAKAJPIIB_PPBKAMGHPEH_OFFSET))(this);
	}

	::System::Void KABJJCFLHPF(::System::Int32 LABJKINHNMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMHAKAJPIIB_KABJJCFLHPF_OFFSET))(this, LABJKINHNMH);
	}
};
