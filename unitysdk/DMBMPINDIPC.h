#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMBMPINDIPC_CFGOIGELNBN_OFFSET UNITYSDK_OFFSET(0xFEB8190)
#define DMBMPINDIPC_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB84F0)
#define DMBMPINDIPC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xFEB7E10)

	class DMBMPINDIPC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBMPINDIPC_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + DMBMPINDIPC_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFGOIGELNBN(::ALMFLCJCHKP* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::BaseChenLingBattleResource*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + DMBMPINDIPC_CFGOIGELNBN_OFFSET))(this, a1, a2, a3);
		}

	};
