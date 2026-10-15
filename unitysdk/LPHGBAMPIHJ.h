#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLKIJPKFOFO.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }

#define LPHGBAMPIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB81FCE0)
#define LPHGBAMPIHJ_DPJAHBLOBOM_OFFSET UNITYSDK_OFFSET(0xB81FCF0)

	class LPHGBAMPIHJ : public ::DLKIJPKFOFO
	{
	public:
		::RPG::Client::GridFightBattleGameContext* GDCKBJKFJEH; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBattleGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + LPHGBAMPIHJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* DPJAHBLOBOM(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + LPHGBAMPIHJ_DPJAHBLOBOM_OFFSET))(this, a1);
		}

	};
