#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
class GDOHGDIFGCF;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMBIIJAPJMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5360D0)
#define KMBIIJAPJMM_NMMMJLNFPLG_OFFSET UNITYSDK_OFFSET(0xB535D80)
#define KMBIIJAPJMM_POEMKFCAECK_OFFSET UNITYSDK_OFFSET(0xB535C00)

inline static constexpr unsigned int KMBIIJAPJMM_TypeDefinitionIndex = 77865;

	class KMBIIJAPJMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBIIJAPJMM_CTOR_OFFSET))(this);
		}

		::System::Void POEMKFCAECK(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + KMBIIJAPJMM_POEMKFCAECK_OFFSET))(this, a1, a2, a3);
		}

		::GDOHGDIFGCF* NMMMJLNFPLG(::RPG::GameCore::BaseChenLingBattleEffect* a1)
		{
			return ((::GDOHGDIFGCF*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleEffect*))((::PBYTE)hIl2Cpp + KMBIIJAPJMM_NMMMJLNFPLG_OFFSET))(this, a1);
		}

	};
