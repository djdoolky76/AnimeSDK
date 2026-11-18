#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFLPANDDGHG;
class CALIGLPABNP;
class CJMCICODFBN;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___C__DISPLAYCLASS88_0__ADDSUMMERTIDEMONSTER_B__0_OFFSET UNITYSDK_OFFSET(0x162F5750)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F5740)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem___c__DisplayClass88_0_TypeDefinitionIndex = 69667;

	class SummerTideTreasuresSubSystem___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::BFLPANDDGHG* fighterData; // 0x10
		::CJMCICODFBN* template_; // 0x18
		::CALIGLPABNP* monsterBaseTemplate; // 0x20
		::MoleMole::SkillCharacterScriptConfig* pScriptConfig; // 0x28
		::System::Boolean freezeAI; // 0x30
		::System::Boolean isLoadModelAsync; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single modelSize; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddSummerTideMonster_b__0(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___C__DISPLAYCLASS88_0__ADDSUMMERTIDEMONSTER_B__0_OFFSET))(this, components);
		}
	};
}
