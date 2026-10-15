#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEKNPICHBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15725450)
#define FEKNPICHBEJ_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x157251A0)

inline static constexpr unsigned int FEKNPICHBEJ_TypeDefinitionIndex = 77888;

	class FEKNPICHBEJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKNPICHBEJ_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + FEKNPICHBEJ_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
