#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPELBHHIHI_FIHNKILNJBB.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoMapRotationVolumeV2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define GIPELBHHIHI_AEHOOFFKNCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F2E10)
#define GIPELBHHIHI_AEHOOFFKNCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3F5CA0)
#define GIPELBHHIHI_AEHOOFFKNCB_DOGMBDKLKPP_OFFSET UNITYSDK_OFFSET(0x1A3F4140)
#define GIPELBHHIHI_AEHOOFFKNCB_GET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x1A3F5CF0)
#define GIPELBHHIHI_AEHOOFFKNCB_GET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x1A3F5D10)
#define GIPELBHHIHI_AEHOOFFKNCB_GFADLDLLAPH_OFFSET UNITYSDK_OFFSET(0x1A3F5890)
#define GIPELBHHIHI_AEHOOFFKNCB_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1A3F3210)
#define GIPELBHHIHI_AEHOOFFKNCB_OJJBEOHNFCP_OFFSET UNITYSDK_OFFSET(0x1A3F4FF0)
#define GIPELBHHIHI_AEHOOFFKNCB_SET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x1A3F5D00)
#define GIPELBHHIHI_AEHOOFFKNCB_SET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x1A3F5D20)

inline static constexpr unsigned int GIPELBHHIHI_AEHOOFFKNCB_TypeDefinitionIndex = 62006;

	class GIPELBHHIHI_AEHOOFFKNCB : public ::GIPELBHHIHI_FIHNKILNJBB
	{
	public:
		::RPG::GameCore::MapRotationVolumeConfig* IGHAHBNLIJA; // 0x40
		::UnityEngine::Transform* _PoseSwitcherRoot_k__BackingField; // 0x48
		::System::String* _PoseSwitcherAnchorName_k__BackingField; // 0x50
		::RPG::Client::MonoMapRotationVolumeV2* AIPJOAOPHEE; // 0x58
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

		::RPG::GameCore::GameEntity* DOGMBDKLKPP(::System::Single a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Single, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GIPELBHHIHI_AEHOOFFKNCB_DOGMBDKLKPP_OFFSET))(this, a1, a2, a3, a4);
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
