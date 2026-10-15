#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class FJOADPKDFLC;

#define ELLMHEMKPPO___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C521FD0)
#define ELLMHEMKPPO___C__DISPLAYCLASS10_0__EXCEPT_B__0_OFFSET UNITYSDK_OFFSET(0x1C5225D0)

inline static constexpr unsigned int ELLMHEMKPPO___c__DisplayClass10_0_TypeDefinitionIndex = 41744;

	class ELLMHEMKPPO___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FJOADPKDFLC* traits; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLMHEMKPPO___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Except_b__0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + ELLMHEMKPPO___C__DISPLAYCLASS10_0__EXCEPT_B__0_OFFSET))(this, a1);
		}

	};
