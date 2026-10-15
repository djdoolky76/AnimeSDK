#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueSelectorType.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;

#define JMAAPINLPDI___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2583A0)
#define JMAAPINLPDI___C__DISPLAYCLASS2_0__SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xB2583B0)

inline static constexpr unsigned int JMAAPINLPDI___c__DisplayClass2_0_TypeDefinitionIndex = 77547;

	class JMAAPINLPDI___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelValueSelectorType selectType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _SelectTarget_b__0(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + JMAAPINLPDI___C__DISPLAYCLASS2_0__SELECTTARGET_B__0_OFFSET))(this, a1, a2);
		}

	};
