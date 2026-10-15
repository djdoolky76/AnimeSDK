#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

	struct alignas(8) LOKABAGIKFG
	{
		::RPG::GameCore::SoundEmitterType KNNPHOJOKBC; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::System::UInt32 LLDCHLHNADA; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x2C
	};
