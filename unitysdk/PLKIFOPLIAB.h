#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
class LADCEAIPJIO;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDiceEX; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLKIFOPLIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F4830)
#define PLKIFOPLIAB_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C7F4A20)

inline static constexpr unsigned int PLKIFOPLIAB_TypeDefinitionIndex = 36291;

	class PLKIFOPLIAB : public ::AJBKGPOEBFG
	{
	public:
		::LADCEAIPJIO* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* LOBDBKFPMGA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + PLKIFOPLIAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKIFOPLIAB_MLKLPMJEHPF_OFFSET))(this);
		}

	};
