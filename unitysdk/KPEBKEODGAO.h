#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChangeHintType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChargeType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KPEBKEODGAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE080E0)

inline static constexpr unsigned int KPEBKEODGAO_TypeDefinitionIndex = 59395;

	class KPEBKEODGAO : public ::System::Object
	{
	public:
		::System::String* LHOJDELAMJL; // 0x10
		::RPG::GameCore::FixPoint JIAOEIMMPBB; // 0x18
		::RPG::GameCore::GridFightTraitEffectChargeType MJPHFBALDBM; // 0x20
		::RPG::GameCore::GridFightTraitEffectChangeHintType HMOAIJEANAP; // 0x24
		::RPG::GameCore::FixPoint APMCPIPIJOI; // 0x28
		::RPG::Client::TextID MPIEEPEGFGA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEBKEODGAO_CTOR_OFFSET))(this);
		}

	};
