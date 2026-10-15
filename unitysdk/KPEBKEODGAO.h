#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChangeHintType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChargeType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KPEBKEODGAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B41A0)

	class KPEBKEODGAO : public ::System::Object
	{
	public:
		::System::String* LHOJDELAMJL; // 0x10
		::RPG::Client::TextID MPIEEPEGFGA; // 0x18
		::RPG::GameCore::FixPoint APMCPIPIJOI; // 0x28
		::RPG::GameCore::FixPoint JIAOEIMMPBB; // 0x30
		::RPG::GameCore::GridFightTraitEffectChargeType MJPHFBALDBM; // 0x38
		::RPG::GameCore::GridFightTraitEffectChangeHintType HMOAIJEANAP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEBKEODGAO_CTOR_OFFSET))(this);
		}

	};
