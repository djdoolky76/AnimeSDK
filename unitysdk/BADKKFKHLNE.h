#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
class GFANCGGPKPD;
class IPDJEKLHILE;
class NOPBGGCGFMM;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::Client { class MonoCustomRotateItem; }
namespace RPG::Client { class MonoHandOverlapTrigger; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchHandStateSync; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BADKKFKHLNE_AANLCPCOMDL_OFFSET UNITYSDK_OFFSET(0x16CE4810)
#define BADKKFKHLNE_APCFKDKHNFL_OFFSET UNITYSDK_OFFSET(0x16CE3830)
#define BADKKFKHLNE_CKNNAANJOGN_OFFSET UNITYSDK_OFFSET(0x16CE4A80)
#define BADKKFKHLNE_CTOR_OFFSET UNITYSDK_OFFSET(0x16CE3400)
#define BADKKFKHLNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CE3410)
#define BADKKFKHLNE_FCLNNMANAMH_OFFSET UNITYSDK_OFFSET(0x16CE4750)
#define BADKKFKHLNE_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0x16CE3470)
#define BADKKFKHLNE_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x16CE5620)
#define BADKKFKHLNE_JKLCLABDPHP_OFFSET UNITYSDK_OFFSET(0x16CE4450)
#define BADKKFKHLNE_LGBNACFCBLH_OFFSET UNITYSDK_OFFSET(0x16CE4F50)
#define BADKKFKHLNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CE3EF0)
#define BADKKFKHLNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16CE4A10)
#define BADKKFKHLNE_TICK_OFFSET UNITYSDK_OFFSET(0x16CE38F0)

inline static constexpr unsigned int BADKKFKHLNE_TypeDefinitionIndex = 54483;

	class BADKKFKHLNE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandStateSync* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x28
		::GFANCGGPKPD* NOLJIPMCEAK; // 0x30
		::RPG::Client::MonoCustomRotateItem* KIOMFMKAPEH; // 0x38
		::RPG::Client::MonoControllableHand* KNBJLAPEIFJ; // 0x40
		::RPG::Client::MonoHandOverlapTrigger* KEJPFIAHINP; // 0x48
		::UnityEngine::Transform* LNFLNINJBCN; // 0x50
		::System::UInt32 NJFKHPIHDEF; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandStateSync* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandStateSync*))((::PBYTE)hIl2Cpp + BADKKFKHLNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADKKFKHLNE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BADKKFKHLNE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADKKFKHLNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FCLNNMANAMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BADKKFKHLNE_FCLNNMANAMH_OFFSET))(this, a1);
		}

		::System::Void AANLCPCOMDL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BADKKFKHLNE_AANLCPCOMDL_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADKKFKHLNE_ONTASKRESET_OFFSET))(this);
		}

		::System::UInt32 JKLCLABDPHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BADKKFKHLNE_JKLCLABDPHP_OFFSET))(this, a1);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADKKFKHLNE_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Void CKNNAANJOGN(::IPDJEKLHILE* a1, ::NOPBGGCGFMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPDJEKLHILE*, ::NOPBGGCGFMM*))((::PBYTE)hIl2Cpp + BADKKFKHLNE_CKNNAANJOGN_OFFSET))(this, a1, a2);
		}

		::System::Void JEJLPHKIHLB(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + BADKKFKHLNE_JEJLPHKIHLB_OFFSET))(this, a1);
		}

		::System::Void APCFKDKHNFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADKKFKHLNE_APCFKDKHNFL_OFFSET))(this);
		}

		::System::Void LGBNACFCBLH(::RPG::GameCore::ESwitchHandGestureType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType, ::System::String*))((::PBYTE)hIl2Cpp + BADKKFKHLNE_LGBNACFCBLH_OFFSET))(this, a1, a2);
		}

	};
