#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCIJHPLJOJ;

#define NFKCKIAINPM___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x18E7AEF0)
#define NFKCKIAINPM___C__DISPLAYCLASS1_0__CONTAINSNODE_B__0_OFFSET UNITYSDK_OFFSET(0x18E7AF00)

inline static constexpr unsigned int NFKCKIAINPM___c__DisplayClass1_0_TypeDefinitionIndex = 66629;

	class NFKCKIAINPM___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterID; // 0x10
		::System::UInt32 sectionID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKCKIAINPM___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsNode_b__0(::BCCIJHPLJOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCCIJHPLJOJ*))((::PBYTE)hIl2Cpp + NFKCKIAINPM___C__DISPLAYCLASS1_0__CONTAINSNODE_B__0_OFFSET))(this, a1);
		}

	};
