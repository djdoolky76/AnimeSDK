#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

	struct alignas(8) KCNLLMOFJNM
	{
		::System::Int32 BJIOBCHFCAA; // 0x10
		::System::Int32 NALMBOOCCIN; // 0x14
		::System::String* CDEEHGCEOKN; // 0x18
		::System::Int32 CNKBDIIMELP; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* KLFKJIGKMNK; // 0x28
		::System::Boolean CJFBJEIMEDP; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::MVector3 GLOPFHODBFJ; // 0x34
		::RPG::GameCore::ModifierHitEffectStacking DFEGFPNGEIO; // 0x40
		::System::Boolean AIEPHAMHJGA; // 0x44
		::System::Byte _padding2[0x3];
		::System::UInt32 OOIOLIBOGIN; // 0x48
		::System::Boolean NIPJKIPJPCN; // 0x4C
	};
