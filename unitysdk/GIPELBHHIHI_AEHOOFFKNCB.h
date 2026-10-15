#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPELBHHIHI_FIHNKILNJBB.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoMapRotationVolumeV2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GIPELBHHIHI_AEHOOFFKNCB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4DC60)
#define GIPELBHHIHI_AEHOOFFKNCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A508B0)
#define GIPELBHHIHI_AEHOOFFKNCB_DOGMBDKLKPP_OFFSET UNITYSDK_OFFSET(0x15A4EE40)
#define GIPELBHHIHI_AEHOOFFKNCB_GET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x15A50900)
#define GIPELBHHIHI_AEHOOFFKNCB_GET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x15A50920)
#define GIPELBHHIHI_AEHOOFFKNCB_GFADLDLLAPH_OFFSET UNITYSDK_OFFSET(0x15A504D0)
#define GIPELBHHIHI_AEHOOFFKNCB_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15A4E040)
#define GIPELBHHIHI_AEHOOFFKNCB_OJJBEOHNFCP_OFFSET UNITYSDK_OFFSET(0x15A4FC60)
#define GIPELBHHIHI_AEHOOFFKNCB_SET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x15A50910)
#define GIPELBHHIHI_AEHOOFFKNCB_SET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x15A50930)

	class GIPELBHHIHI_AEHOOFFKNCB : public ::GIPELBHHIHI_FIHNKILNJBB
	{
	public:
		::UnityEngine::Transform* _PoseSwitcherRoot_k__BackingField; // 0x40
		::System::String* _PoseSwitcherAnchorName_k__BackingField; // 0x48
		::RPG::Client::MonoMapRotationVolumeV2* AIPJOAOPHEE; // 0x50
		::RPG::GameCore::MapRotationVolumeConfig* IGHAHBNLIJA; // 0x58
		::System::Void _ctor(::RPG::Client::MonoMapRotationVolumeV2* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::MapRotationVolumeConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapRotationVolumeV2*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MapRotationVolumeConfig*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_DISPOSE_OFFSET))(this);
		}

		::System::Single OJJBEOHNFCP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_OJJBEOHNFCP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* DOGMBDKLKPP(::System::Single a1, ::System::Action* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Single, ::System::Action*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_DOGMBDKLKPP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::String* get_PoseSwitcherAnchorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_GET_POSESWITCHERANCHORNAME_OFFSET))(this);
		}

		::System::Void set_PoseSwitcherAnchorName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_SET_POSESWITCHERANCHORNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_PoseSwitcherRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_GET_POSESWITCHERROOT_OFFSET))(this);
		}

		::System::Void set_PoseSwitcherRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_SET_POSESWITCHERROOT_OFFSET))(this, a1);
		}

		::System::Boolean GFADLDLLAPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_GFADLDLLAPH_OFFSET))(this);
		}

	};
