#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKABBILAGAN.h"
#include "unitysdk/HLKHNNFPGDC.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCALGJDJON_LAAECEFBDJP_OFFSET UNITYSDK_OFFSET(0x18E243C0)
#define NPCALGJDJON_NPJAADMDLBM_OFFSET UNITYSDK_OFFSET(0x18E245A0)
#define NPCALGJDJON__CTOR_OFFSET UNITYSDK_OFFSET(0x18E243B0)

inline static constexpr unsigned int NPCALGJDJON_TypeDefinitionIndex = 9534;

class NPCALGJDJON : public ::CKABBILAGAN
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HKGNLBBDPDK; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* MCNEBOFJCOI; // 0x60

	::System::Void _ctor(::HLKHNNFPGDC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLKHNNFPGDC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NPCALGJDJON__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LAAECEFBDJP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCALGJDJON_LAAECEFBDJP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NPJAADMDLBM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCALGJDJON_NPJAADMDLBM_OFFSET))(this);
	}
};
