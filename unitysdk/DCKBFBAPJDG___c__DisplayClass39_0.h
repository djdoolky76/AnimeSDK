#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHBHJAHCJHN;
namespace RPG::GameCore { class RtSkillConfig; }

#define DCKBFBAPJDG___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE24E850)
#define DCKBFBAPJDG___C__DISPLAYCLASS39_0___INITSKILLDATAS_B__0_OFFSET UNITYSDK_OFFSET(0xE24E960)

inline static constexpr unsigned int DCKBFBAPJDG___c__DisplayClass39_0_TypeDefinitionIndex = 54206;

	class DCKBFBAPJDG___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RtSkillConfig* config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKBFBAPJDG___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __InitSkillDatas_b__0(::FHBHJAHCJHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHBHJAHCJHN*))((::PBYTE)hIl2Cpp + DCKBFBAPJDG___C__DISPLAYCLASS39_0___INITSKILLDATAS_B__0_OFFSET))(this, a1);
		}

	};
