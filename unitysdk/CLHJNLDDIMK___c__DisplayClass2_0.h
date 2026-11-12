#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeGameProp; }

#define CLHJNLDDIMK___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE353A30)
#define CLHJNLDDIMK___C__DISPLAYCLASS2_0__ONEXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xE353A50)

inline static constexpr unsigned int CLHJNLDDIMK___c__DisplayClass2_0_TypeDefinitionIndex = 67813;

	class CLHJNLDDIMK___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHJNLDDIMK___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnExecute_b__0(::RPG::Client::MatchThreeGameProp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + CLHJNLDDIMK___C__DISPLAYCLASS2_0__ONEXECUTE_B__0_OFFSET))(this, a1);
		}

	};
