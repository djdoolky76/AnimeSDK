#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define KJKLIJBEOJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB453B80)
#define KJKLIJBEOJJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB453C30)
#define KJKLIJBEOJJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB453B90)

inline static constexpr unsigned int KJKLIJBEOJJ_TypeDefinitionIndex = 78265;

	class KJKLIJBEOJJ : public ::KNFCEJEJINK
	{
	public:
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* FLPMDDEMIBJ; // 0x18
		::System::Boolean MFLJMFPCNFL; // 0x20
		::System::Boolean OELBLBCINNB; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Boolean))((::PBYTE)hIl2Cpp + KJKLIJBEOJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKLIJBEOJJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJKLIJBEOJJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
