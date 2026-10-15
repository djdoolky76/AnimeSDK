#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHPMKLGOCHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1642E450)
#define IHPMKLGOCHN_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1642DB60)

inline static constexpr unsigned int IHPMKLGOCHN_TypeDefinitionIndex = 77889;

	class IHPMKLGOCHN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPMKLGOCHN_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + IHPMKLGOCHN_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
