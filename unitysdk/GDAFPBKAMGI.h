#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FICJADOJGMF;
class KFELGAIGHAP;
namespace RPG::Client { class MonoWolfBroBulletLine; }
namespace RPG::Client { class MonoWolfBroBulletPoint; }
namespace RPG::Client { class WolfBroGunPlayerProjectile; }
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GDAFPBKAMGI_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x19ECCA80)
#define GDAFPBKAMGI_CTOR_OFFSET UNITYSDK_OFFSET(0x19ECBE70)
#define GDAFPBKAMGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19ECC7A0)
#define GDAFPBKAMGI_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0x19ECCE70)
#define GDAFPBKAMGI_FOBIBIDLPDF_OFFSET UNITYSDK_OFFSET(0x19ECC170)
#define GDAFPBKAMGI_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0x19ECD3D0)
#define GDAFPBKAMGI_GKOIKCBJICD_OFFSET UNITYSDK_OFFSET(0x19ECD160)
#define GDAFPBKAMGI_HDEOMAEPOMK_OFFSET UNITYSDK_OFFSET(0x19ECD4C0)
#define GDAFPBKAMGI_HGKIDGABIOL_OFFSET UNITYSDK_OFFSET(0x19ECD3F0)
#define GDAFPBKAMGI_ICDMGDBDIKF_OFFSET UNITYSDK_OFFSET(0x19ECD4A0)
#define GDAFPBKAMGI_IPBLDBIEPDJ_OFFSET UNITYSDK_OFFSET(0x19ECD340)
#define GDAFPBKAMGI_IPHBABLIKOE_OFFSET UNITYSDK_OFFSET(0x19ECDAA0)
#define GDAFPBKAMGI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19ECCA10)
#define GDAFPBKAMGI_KFJGIKDLMBN_OFFSET UNITYSDK_OFFSET(0x19ECD3E0)
#define GDAFPBKAMGI_NIALNKDEBPC_OFFSET UNITYSDK_OFFSET(0x19ECC610)

inline static constexpr unsigned int GDAFPBKAMGI_TypeDefinitionIndex = 70714;

	class GDAFPBKAMGI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EKODGCDDPNI; // 0x10
		::RPG::Client::MonoWolfBroBulletPoint* NMAFKIEHMBB; // 0x18
		::FICJADOJGMF* _RoadMap_k__BackingField; // 0x20
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::RPG::Client::MonoWolfBroBulletLine* KHNHANNJFBH; // 0x30
		::RPG::Client::WolfBroGunPlayerProjectile* LAEMELONLDO; // 0x38
		::System::Single GJGBBOBGACM; // 0x40
		::System::Single HACBICLKMDA; // 0x44
		::UnityEngine::Vector3 KBNLFEJALEO; // 0x48
		::UnityEngine::Quaternion PLKDOIPKLHO; // 0x54
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2, ::RPG::Client::WolfBroGunPlayerProjectile* a3, ::FICJADOJGMF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::RPG::Client::WolfBroGunPlayerProjectile*, ::FICJADOJGMF*))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FOBIBIDLPDF(::System::String* a1, ::RPG::Client::MonoWolfBroBulletLine* a2, ::RPG::Client::MonoWolfBroBulletPoint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::MonoWolfBroBulletLine*, ::RPG::Client::MonoWolfBroBulletPoint*))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_FOBIBIDLPDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NIALNKDEBPC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_NIALNKDEBPC_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean AEGMLJMJBDO(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_AEGMLJMJBDO_OFFSET))(this, a1);
		}

		::System::Void EPHFABNKFGJ(::UnityEngine::Vector3 a1, ::KFELGAIGHAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_EPHFABNKFGJ_OFFSET))(this, a1, a2);
		}

		::System::Void GKOIKCBJICD(::RPG::Client::WolfBroGunTargetProjectile* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunTargetProjectile*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_GKOIKCBJICD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion IPBLDBIEPDJ()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_IPBLDBIEPDJ_OFFSET))(this);
		}

		::FICJADOJGMF* get_RoadMap()
		{
			return ((::FICJADOJGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_GET_ROADMAP_OFFSET))(this);
		}

		::System::Boolean KFJGIKDLMBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_KFJGIKDLMBN_OFFSET))(this);
		}

		::UnityEngine::Vector3 HGKIDGABIOL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_HGKIDGABIOL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* ICDMGDBDIKF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_ICDMGDBDIKF_OFFSET))(this);
		}

		::System::Void HDEOMAEPOMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_HDEOMAEPOMK_OFFSET))(this);
		}

		::System::Void IPHBABLIKOE(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + GDAFPBKAMGI_IPHBABLIKOE_OFFSET))(this, a1, a2);
		}

	};
