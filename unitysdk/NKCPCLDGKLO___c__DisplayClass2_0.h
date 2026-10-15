#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKCPCLDGKLO;
namespace RPG::Client { class AdventurePhase; }

#define NKCPCLDGKLO___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC30CA0)
#define NKCPCLDGKLO___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBC311B0)

inline static constexpr unsigned int NKCPCLDGKLO___c__DisplayClass2_0_TypeDefinitionIndex = 58792;

	class NKCPCLDGKLO___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::NKCPCLDGKLO* __4__this; // 0x10
		::RPG::Client::AdventurePhase* pADP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCPCLDGKLO___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCPCLDGKLO___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
