#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJEEJFDPPNG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS169_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE79A000)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS169_0___REARRANGEPUPPETCHARACTERS_B__0_OFFSET UNITYSDK_OFFSET(0xE79B6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent___c__DisplayClass169_0_TypeDefinitionIndex = 57711;

	class TeamFormationComponent___c__DisplayClass169_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CJEEJFDPPNG*>* rowDatas; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS169_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __RearrangePuppetCharacters_b__0(::CJEEJFDPPNG* a1, ::CJEEJFDPPNG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CJEEJFDPPNG*, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS169_0___REARRANGEPUPPETCHARACTERS_B__0_OFFSET))(this, a1, a2);
		}

	};
}
