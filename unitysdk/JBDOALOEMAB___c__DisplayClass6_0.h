#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBDOALOEMAB;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelMasterSelectorConfig; }

#define JBDOALOEMAB___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1655B620)
#define JBDOALOEMAB___C__DISPLAYCLASS6_0___SELECTENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x1655B810)

inline static constexpr unsigned int JBDOALOEMAB___c__DisplayClass6_0_TypeDefinitionIndex = 77637;

	class JBDOALOEMAB___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::JBDOALOEMAB* __4__this; // 0x10
		::RPG::GameCore::ChimeraDuelMasterSelectorConfig* masterConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDOALOEMAB___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SelectEntities_b__0(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + JBDOALOEMAB___C__DISPLAYCLASS6_0___SELECTENTITIES_B__0_OFFSET))(this, a1);
		}

	};
