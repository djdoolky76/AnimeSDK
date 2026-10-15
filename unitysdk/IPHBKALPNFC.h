#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIIKBJFOKHL.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPHBKALPNFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1651FD70)
#define IPHBKALPNFC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1651FE00)

	class IPHBKALPNFC : public ::CIIKBJFOKHL
	{
	public:
		::CIIKBJFOKHL* LNGNFBOLKDD; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* AEJNBIDCBCM; // 0x48
		::System::Void _ctor(::CIIKBJFOKHL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::CIIKBJFOKHL*, ::System::Int32))((::PBYTE)hIl2Cpp + IPHBKALPNFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* KFGJEKJHIMB(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + IPHBKALPNFC_KFGJEKJHIMB_OFFSET))(this, a1);
		}

	};
