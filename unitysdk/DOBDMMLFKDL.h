#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop::CoilPuzzle { class RigCoilPuzzleBoard; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DOBDMMLFKDL_BCKNHMHNFLL_OFFSET UNITYSDK_OFFSET(0x11FDE4B0)
#define DOBDMMLFKDL_BHJAKPIEFDG_OFFSET UNITYSDK_OFFSET(0x11FDDE90)
#define DOBDMMLFKDL_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x11FDE3A0)
#define DOBDMMLFKDL_CALAADAOBEF_OFFSET UNITYSDK_OFFSET(0x11FDE3F0)
#define DOBDMMLFKDL_CCMIKLANPPL_OFFSET UNITYSDK_OFFSET(0x11FDDCC0)
#define DOBDMMLFKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDDB30)
#define DOBDMMLFKDL_DEMCMJMEBOG_OFFSET UNITYSDK_OFFSET(0x11FDDF90)
#define DOBDMMLFKDL_FHGKLMABMOH_OFFSET UNITYSDK_OFFSET(0x11FDE240)
#define DOBDMMLFKDL_GKAMFFLNMON_OFFSET UNITYSDK_OFFSET(0x11FDDEF0)
#define DOBDMMLFKDL_KFNNBMIFKCP_OFFSET UNITYSDK_OFFSET(0x11FDDD80)
#define DOBDMMLFKDL_PFJPIPEHMMH_OFFSET UNITYSDK_OFFSET(0x11FDDB70)
#define DOBDMMLFKDL_PIMOGOHKEOC_OFFSET UNITYSDK_OFFSET(0x11FDE2A0)

	class DOBDMMLFKDL : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GNGICBBHKEJ; // 0x10
		::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* MIPPNCGOJNM; // 0x18
		::UnityEngine::Transform* KMBHJOPDEJK; // 0x20
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x28
		::System::Boolean FMNEEONAMNO; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 KNGEKPKBIDK; // 0x34
		::UnityEngine::Vector3 GNPBGAKIAHM; // 0x40
		::System::Void _ctor(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CCMIKLANPPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_CCMIKLANPPL_OFFSET))(this);
		}

		::System::Void PFJPIPEHMMH(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_PFJPIPEHMMH_OFFSET))(this, a1);
		}

		::System::Void BHJAKPIEFDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_BHJAKPIEFDG_OFFSET))(this, a1);
		}

		::System::Void KFNNBMIFKCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_KFNNBMIFKCP_OFFSET))(this);
		}

		::System::Void DEMCMJMEBOG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_DEMCMJMEBOG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 FHGKLMABMOH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_FHGKLMABMOH_OFFSET))(this);
		}

		::UnityEngine::Vector3 GKAMFFLNMON()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_GKAMFFLNMON_OFFSET))(this);
		}

		::UnityEngine::Vector3 PIMOGOHKEOC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_PIMOGOHKEOC_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void CALAADAOBEF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_CALAADAOBEF_OFFSET))(this, a1);
		}

		::System::Void BCKNHMHNFLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBDMMLFKDL_BCKNHMHNFLL_OFFSET))(this);
		}

	};
