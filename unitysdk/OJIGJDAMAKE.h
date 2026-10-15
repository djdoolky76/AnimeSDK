#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJIGJDAMAKE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB3450)
#define OJIGJDAMAKE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBEB2FB0)

inline static constexpr unsigned int OJIGJDAMAKE_TypeDefinitionIndex = 77877;

	class OJIGJDAMAKE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIGJDAMAKE_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + OJIGJDAMAKE_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
