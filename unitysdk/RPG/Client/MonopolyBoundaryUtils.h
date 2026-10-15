#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonopolyWorldBoundary; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xD87B370)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_CONGGKDMNMG_OFFSET UNITYSDK_OFFSET(0xD87ABC0)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0xD87B340)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_EKEKDMKCKJM_OFFSET UNITYSDK_OFFSET(0xD87AF50)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_GETVALIDMOVE_OFFSET UNITYSDK_OFFSET(0xD87A2F0)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_PLJDPLDOFFC_OFFSET UNITYSDK_OFFSET(0xD87A450)
#define RPG_CLIENT_MONOPOLYBOUNDARYUTILS_REGISTERCURRENTBOUNDARYPROVIDER_OFFSET UNITYSDK_OFFSET(0xD87A2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBoundaryUtils_TypeDefinitionIndex = 72839;

	class MonopolyBoundaryUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonopolyWorldBoundary* OFFPODABAEC; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* FPBIENMODOP; // 0x20
		::UnityEngine::Vector3 RecoverRotationParam; // 0x28
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_DHDOIBKDJFF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("RPG.Client", "MonopolyBoundaryUtils")->GetStaticField(0x6A540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_CCTOR_OFFSET))();
		}

		::System::Void RegisterCurrentBoundaryProvider(::RPG::Client::MonopolyWorldBoundary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyWorldBoundary*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_REGISTERCURRENTBOUNDARYPROVIDER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetValidMove(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_GETVALIDMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CONGGKDMNMG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_CONGGKDMNMG_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* PLJDPLDOFFC(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_PLJDPLDOFFC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 EKEKDMKCKJM(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBOUNDARYUTILS_EKEKDMKCKJM_OFFSET))(this, a1, a2);
		}

	};
}
