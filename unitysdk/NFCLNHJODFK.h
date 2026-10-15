#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRightInfoSortType.h"
#include "unitysdk/System/Object.h"
class DKNKCGLEMFF;
class ECDNGOHAPMA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFCLNHJODFK_BEKPFIIEKJI_OFFSET UNITYSDK_OFFSET(0xBB79EA0)
#define NFCLNHJODFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB7A060)
#define NFCLNHJODFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB79270)
#define NFCLNHJODFK_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xBB794E0)
#define NFCLNHJODFK_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0xBB79670)
#define NFCLNHJODFK_PPDAGPPKEJD_OFFSET UNITYSDK_OFFSET(0xBB797E0)

	class NFCLNHJODFK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::BattleRightInfoSortType, ::DKNKCGLEMFF*>* MOKFNCHAJJK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCLNHJODFK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCLNHJODFK_DISPOSE_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::ECDNGOHAPMA* a1, ::RPG::Client::BattleRightInfoSortType a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECDNGOHAPMA*, ::RPG::Client::BattleRightInfoSortType))((::PBYTE)hIl2Cpp + NFCLNHJODFK_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Boolean PINOKCNDANM(::ECDNGOHAPMA* a1, ::RPG::Client::BattleRightInfoSortType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECDNGOHAPMA*, ::RPG::Client::BattleRightInfoSortType))((::PBYTE)hIl2Cpp + NFCLNHJODFK_PINOKCNDANM_OFFSET))(this, a1, a2);
		}

		::System::Void PPDAGPPKEJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCLNHJODFK_PPDAGPPKEJD_OFFSET))(this);
		}

		::System::Int32 BEKPFIIEKJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCLNHJODFK_BEKPFIIEKJI_OFFSET))(this);
		}

	};
