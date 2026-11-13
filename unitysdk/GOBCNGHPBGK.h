#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class LLMEONJFLMD;

#define GOBCNGHPBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x187A7B60)
#define GOBCNGHPBGK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x187A8350)
#define GOBCNGHPBGK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x187A7B70)

inline static constexpr unsigned int GOBCNGHPBGK_TypeDefinitionIndex = 80990;

	class GOBCNGHPBGK : public ::KNFCEJEJINK
	{
	public:
		::LLMEONJFLMD* MKKLHFCCCNF; // 0x18
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::LLMEONJFLMD* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LLMEONJFLMD*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + GOBCNGHPBGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBCNGHPBGK_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOBCNGHPBGK_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
