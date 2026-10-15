#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFKDDHJFHBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB16E9C0)
#define BFKDDHJFHBO_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB16E2B0)

inline static constexpr unsigned int BFKDDHJFHBO_TypeDefinitionIndex = 77884;

	class BFKDDHJFHBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKDDHJFHBO_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + BFKDDHJFHBO_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
