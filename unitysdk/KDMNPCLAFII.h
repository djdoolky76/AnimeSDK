#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }

#define KDMNPCLAFII_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0xB3678F0)
#define KDMNPCLAFII_CTOR_OFFSET UNITYSDK_OFFSET(0xB367900)
#define KDMNPCLAFII_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB367560)
#define KDMNPCLAFII_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB367420)

	class KDMNPCLAFII : public ::System::Object
	{
	public:
		::RPG::GameCore::EntityPosAdaptionConfig* PFPMMIEEOMI; // 0x10
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x18
		::System::Boolean LFJHKGPGMKN; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OANHAILGOIG; // 0x24
		::System::Single NMCJLENIEFC; // 0x30
		// static const ::System::Object ACJCPLPFJKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMNPCLAFII_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::GameCore::EntityPosAdaptionConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::EntityPosAdaptionConfig*))((::PBYTE)hIl2Cpp + KDMNPCLAFII_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDMNPCLAFII_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMNPCLAFII_CONHCMOGADH_OFFSET))(this);
		}

	};
