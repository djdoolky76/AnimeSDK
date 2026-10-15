#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CENEFPOMFKG;
class OPBCNNEEFPP;
namespace RPG::GameCore { class GameEntity; }

#define GIKPKAPPFFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A460D0)
#define GIKPKAPPFFK_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15A45E60)
#define GIKPKAPPFFK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15A45F50)

	class GIKPKAPPFFK : public ::System::Object
	{
	public:
		::OPBCNNEEFPP* NPMFLJPODJF; // 0x10
		::RPG::GameCore::IVec2 INDBINHDJEK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKPKAPPFFK_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + GIKPKAPPFFK_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB(::CENEFPOMFKG* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GIKPKAPPFFK_KFGJEKJHIMB_OFFSET))(this, a1, a2, a3);
		}

	};
