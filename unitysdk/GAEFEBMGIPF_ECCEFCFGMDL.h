#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKBAMHGDEJC;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }

#define GAEFEBMGIPF_ECCEFCFGMDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1686D840)

inline static constexpr unsigned int GAEFEBMGIPF_ECCEFCFGMDL_TypeDefinitionIndex = 74098;

	class GAEFEBMGIPF_ECCEFCFGMDL : public ::System::Object
	{
	public:
		::RPG::Client::BattleAvatarNihiluxCustomUIData* NPDCLPNMNMN; // 0x10
		::IKBAMHGDEJC* MAJJCFLLBCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFEBMGIPF_ECCEFCFGMDL_CTOR_OFFSET))(this);
		}

	};
