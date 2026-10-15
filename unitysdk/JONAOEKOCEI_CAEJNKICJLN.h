#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define JONAOEKOCEI_CAEJNKICJLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2AA580)
#define JONAOEKOCEI_CAEJNKICJLN_FIIPIACAIAC_OFFSET UNITYSDK_OFFSET(0xB2AAA10)
#define JONAOEKOCEI_CAEJNKICJLN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB2AA290)

	class JONAOEKOCEI_CAEJNKICJLN : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x18
		::RPG::GameCore::TransformComponent* BKLBJFJHOLF; // 0x20
		::UnityEngine::Animator* FOPCFKFAGPM; // 0x28
		::System::Boolean CAGCHKJHMPD; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 EMNLCPDHLFF; // 0x34
		::RPG::Client::Prop::MusicRhythmPropType GMPGDEINODK; // 0x38
		::System::UInt32 DOLFIMKHDPI; // 0x3C
		::UnityEngine::Vector3 EDLHLKAFDFA; // 0x40
		::System::UInt32 DJHILJPDNPP; // 0x4C
		::System::UInt32 AMMPNOLLCIN; // 0x50
		::System::Single EBDMPMAPMOB; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_CAEJNKICJLN_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_CAEJNKICJLN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FIIPIACAIAC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JONAOEKOCEI_CAEJNKICJLN_FIIPIACAIAC_OFFSET))(this, a1);
		}

	};
