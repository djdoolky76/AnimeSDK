#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class ALDMDBEKHPL;
class FJOADPKDFLC;
namespace System::Collections::Generic { class KeyValuePair; }

#define ALDMDBEKHPL___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53EF30)
#define ALDMDBEKHPL___C__DISPLAYCLASS6_0__DETERMINEPRODUCTTRAITS_B__0_OFFSET UNITYSDK_OFFSET(0x1C53F280)

inline static constexpr unsigned int ALDMDBEKHPL___c__DisplayClass6_0_TypeDefinitionIndex = 41741;

	class ALDMDBEKHPL___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::ALDMDBEKHPL* __4__this; // 0x10
		::FJOADPKDFLC* targetTraitTypes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _DetermineProductTraits_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C__DISPLAYCLASS6_0__DETERMINEPRODUCTTRAITS_B__0_OFFSET))(this, a1);
		}

	};
