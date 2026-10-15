#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define KJKLIJBEOJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB45A7B0)
#define KJKLIJBEOJJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB45A860)
#define KJKLIJBEOJJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB45A7C0)

	class KJKLIJBEOJJ : public ::KNFCEJEJINK
	{
	public:
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* FLPMDDEMIBJ; // 0x18
		::System::Single HBDJCFFDGDD; // 0x20
		::System::Boolean OELBLBCINNB; // 0x24
		::System::Boolean MFLJMFPCNFL; // 0x25
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
