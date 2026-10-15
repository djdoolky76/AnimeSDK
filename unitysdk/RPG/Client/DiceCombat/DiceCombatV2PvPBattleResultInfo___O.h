#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHMEPOMCGNG;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPScoreData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPBattleResultInfo___O_TypeDefinitionIndex = 76147;

	class DiceCombatV2PvPBattleResultInfo___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::EHMEPOMCGNG*, ::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::EHMEPOMCGNG*, ::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>O")->GetStaticField(0x2D0F0);
		}

	};
}
