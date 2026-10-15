#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPGJPLMHKFL;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::DiceCombat
{
	class DiceCombatV2Util___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::LPGJPLMHKFL*, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::LPGJPLMHKFL*, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>O")->GetStaticField(0x2D6C0);
		}

	};
}
