#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"
class MLEMMDNMHCG;
namespace System { class Object; }

#define MLEMMDNMHCG___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544440)
#define MLEMMDNMHCG___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__6_OFFSET UNITYSDK_OFFSET(0x1C544720)
#define MLEMMDNMHCG___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__7_OFFSET UNITYSDK_OFFSET(0x1C5447E0)

inline static constexpr unsigned int MLEMMDNMHCG___c__DisplayClass13_0_TypeDefinitionIndex = 41880;

	class MLEMMDNMHCG___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MLEMMDNMHCG* __4__this; // 0x10
		::RPG::Client::MechCraft::MechCraftEffectType type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEMMDNMHCG___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Object* __IterateSortedActiveTalentEffectsOfType_b__6(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLEMMDNMHCG___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__6_OFFSET))(this, a1);
		}

		::System::Boolean __IterateSortedActiveTalentEffectsOfType_b__7(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLEMMDNMHCG___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__7_OFFSET))(this, a1);
		}

	};
