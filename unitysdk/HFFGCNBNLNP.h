#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFFGCNBNLNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6A840)
#define HFFGCNBNLNP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15C6A590)

inline static constexpr unsigned int HFFGCNBNLNP_TypeDefinitionIndex = 77886;

	class HFFGCNBNLNP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFGCNBNLNP_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + HFFGCNBNLNP_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
