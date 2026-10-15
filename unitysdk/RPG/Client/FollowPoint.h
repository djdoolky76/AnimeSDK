#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EFollowFreezeSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class FollowPointMapping; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FOLLOWPOINT_ACFFDGMJAEC_OFFSET UNITYSDK_OFFSET(0xD0494F0)
#define RPG_CLIENT_FOLLOWPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD049E00)
#define RPG_CLIENT_FOLLOWPOINT_FBNFJPEMADH_OFFSET UNITYSDK_OFFSET(0xD049650)
#define RPG_CLIENT_FOLLOWPOINT_GET_ISFOLLOWDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD049D30)
#define RPG_CLIENT_FOLLOWPOINT_GET_ISPOINTDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD049C60)
#define RPG_CLIENT_FOLLOWPOINT_GFLDENPCEFF_OFFSET UNITYSDK_OFFSET(0xD049B90)
#define RPG_CLIENT_FOLLOWPOINT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD0493E0)
#define RPG_CLIENT_FOLLOWPOINT_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xD049770)
#define RPG_CLIENT_FOLLOWPOINT_SET_ISFOLLOWDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD049D90)
#define RPG_CLIENT_FOLLOWPOINT_SET_ISPOINTDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD049CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FollowPoint_TypeDefinitionIndex = 68424;

	class FollowPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _PointTransformPosition; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x20
		::UnityEngine::Transform* PointTransform; // 0x28
		::System::String* PointPath; // 0x30
		::UnityEngine::Transform* FollowTransform; // 0x38
		::System::String* FollowingPath; // 0x40
		::UnityEngine::Vector3 Offset; // 0x48
		::UnityEngine::Vector3 WorldOffset; // 0x54
		::UnityEngine::Vector3 EntityOffset; // 0x60
		::RPG::Client::EFollowFreezeSpace followFreezeFreezeSpace; // 0x6C
		::System::Boolean X; // 0x70
		::System::Boolean Y; // 0x71
		::System::Boolean Z; // 0x72
		::System::Boolean FollowRotation; // 0x73
		::UnityEngine::Vector3 OriginPos; // 0x74
		::UnityEngine::Transform* EntityRootTransform; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1, ::RPG::Client::FollowPointMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void ACFFDGMJAEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_ACFFDGMJAEC_OFFSET))(this);
		}

		::System::Void FBNFJPEMADH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_FBNFJPEMADH_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_LJBCDJNNBJH_OFFSET))(this);
		}

		::UnityEngine::Vector3 GFLDENPCEFF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_GFLDENPCEFF_OFFSET))(this);
		}

		::System::Boolean get_IsPointDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_GET_ISPOINTDYNAMIC_OFFSET))(this);
		}

		::System::Void set_IsPointDynamic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_SET_ISPOINTDYNAMIC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFollowDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_GET_ISFOLLOWDYNAMIC_OFFSET))(this);
		}

		::System::Void set_IsFollowDynamic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINT_SET_ISFOLLOWDYNAMIC_OFFSET))(this, a1);
		}

	};
}
