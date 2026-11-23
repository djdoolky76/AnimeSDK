#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFShard; }
namespace RayFire { class RayfireConnectivity; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RAYFIRE_RAYFIREUNYIELDING_A964656D17F8A6B0_OFFSET UNITYSDK_OFFSET(0x29955C0)
#define RAYFIRE_RAYFIREUNYIELDING_AE26C71BF575F04E_OFFSET UNITYSDK_OFFSET(0x2995260)
#define RAYFIRE_RAYFIREUNYIELDING_AEB46DD28E5E21AA_OFFSET UNITYSDK_OFFSET(0x2994B90)
#define RAYFIRE_RAYFIREUNYIELDING_B3218E8728A3A1C8_OFFSET UNITYSDK_OFFSET(0x2995C00)
#define RAYFIRE_RAYFIREUNYIELDING_B8D616E2F5AEA5EB_OFFSET UNITYSDK_OFFSET(0x2995AB0)
#define RAYFIRE_RAYFIREUNYIELDING_B9882D44A47CFCA5_OFFSET UNITYSDK_OFFSET(0x2995960)
#define RAYFIRE_RAYFIREUNYIELDING_E265A6754AD2766D_OFFSET UNITYSDK_OFFSET(0x2994CB0)
#define RAYFIRE_RAYFIREUNYIELDING_E374F48A574BFB1D_OFFSET UNITYSDK_OFFSET(0x2995C50)
#define RAYFIRE_RAYFIREUNYIELDING_E570876DC2FABEF8_OFFSET UNITYSDK_OFFSET(0x2995370)
#define RAYFIRE_RAYFIREUNYIELDING_F29523C9856B4065_OFFSET UNITYSDK_OFFSET(0x2995B00)
#define RAYFIRE_RAYFIREUNYIELDING_F5295FB3D82F7051_OFFSET UNITYSDK_OFFSET(0x29941C0)
#define RAYFIRE_RAYFIREUNYIELDING_F78DE90A76D12D48_OFFSET UNITYSDK_OFFSET(0x29946A0)
#define RAYFIRE_RAYFIREUNYIELDING_F7BA2F5B7C9901D8_OFFSET UNITYSDK_OFFSET(0x2994550)
#define RAYFIRE_RAYFIREUNYIELDING_F7D068BC7F8ED55F_OFFSET UNITYSDK_OFFSET(0x29953F0)
#define RAYFIRE_RAYFIREUNYIELDING_FF0395A5DB736D77_OFFSET UNITYSDK_OFFSET(0x2994DE0)
#define RAYFIRE_RAYFIREUNYIELDING__CTOR_OFFSET UNITYSDK_OFFSET(0x2995AD0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireUnyielding_TypeDefinitionIndex = 15540;

	class RayfireUnyielding : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean unyielding; // 0x20
		::System::Boolean activatable; // 0x21
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 centerPosition; // 0x24
		::UnityEngine::Vector3 size; // 0x30
		::System::Byte _padding1[0x4];
		::RayFire::RayfireConnectivity* connHost; // 0x40
		::RayFire::RayfireRigid* rigidHost; // 0x48
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* rigidList; // 0x50
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* shardList; // 0x58
		::System::Boolean showGizmo; // 0x60
		::System::Boolean showCenter; // 0x61
		::System::Byte _padding2[0x2];
		::System::Int32 id; // 0x64

		static ::System::Int32 E570876DC2FABEF8()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_E570876DC2FABEF8_OFFSET))();
		}

		static ::System::Void AE26C71BF575F04E(::RayFire::RayfireConnectivity* B4EF92D0FD50125B)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_AE26C71BF575F04E_OFFSET))(B4EF92D0FD50125B);
		}

		::UnityEngine::Vector3 F29523C9856B4065()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_F29523C9856B4065_OFFSET))(this);
		}

		::System::Void F7D068BC7F8ED55F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_F7D068BC7F8ED55F_OFFSET))(this);
		}

		::System::Boolean E374F48A574BFB1D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_E374F48A574BFB1D_OFFSET))(this);
		}

		::System::Boolean B3218E8728A3A1C8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_B3218E8728A3A1C8_OFFSET))(this);
		}

		static ::System::Void B9882D44A47CFCA5(::RayFire::RayfireRigid* E9D1ABA13C0D414F, ::System::Int32 AD6C7AC31FB2AC1B, ::System::Boolean ED0A74C91A5215B0, ::System::Boolean FB49469B84A20EB3)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_B9882D44A47CFCA5_OFFSET))(E9D1ABA13C0D414F, AD6C7AC31FB2AC1B, ED0A74C91A5215B0, FB49469B84A20EB3);
		}

		::System::Void A964656D17F8A6B0(::RayFire::RayfireRigidRoot* E88A7A0900B01658)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigidRoot*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_A964656D17F8A6B0_OFFSET))(this, E88A7A0900B01658);
		}

		static ::System::Int32 E265A6754AD2766D(::RayFire::RayfireConnectivity* B4EF92D0FD50125B)
		{
			return ((::System::Int32(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_E265A6754AD2766D_OFFSET))(B4EF92D0FD50125B);
		}

		static ::System::Void FF0395A5DB736D77(::RayFire::RayfireUnyielding* B3EE8900ACFBD55E)
		{
			return ((::System::Void(*)(::RayFire::RayfireUnyielding*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_FF0395A5DB736D77_OFFSET))(B3EE8900ACFBD55E);
		}

		static ::System::Void F78DE90A76D12D48(::RayFire::RayfireUnyielding* B3EE8900ACFBD55E)
		{
			return ((::System::Void(*)(::RayFire::RayfireUnyielding*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_F78DE90A76D12D48_OFFSET))(B3EE8900ACFBD55E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING__CTOR_OFFSET))(this);
		}

		static ::System::Int32 F7BA2F5B7C9901D8(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Int32(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_F7BA2F5B7C9901D8_OFFSET))(E9D1ABA13C0D414F);
		}

		static ::System::Void B8D616E2F5AEA5EB(::RayFire::RFShard* A9B58EA01420571C, ::System::Boolean ED0A74C91A5215B0, ::System::Boolean FB49469B84A20EB3)
		{
			return ((::System::Void(*)(::RayFire::RFShard*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_B8D616E2F5AEA5EB_OFFSET))(A9B58EA01420571C, ED0A74C91A5215B0, FB49469B84A20EB3);
		}

		static ::System::Void AEB46DD28E5E21AA(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_AEB46DD28E5E21AA_OFFSET))(E9D1ABA13C0D414F);
		}

		::System::Void F5295FB3D82F7051()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREUNYIELDING_F5295FB3D82F7051_OFFSET))(this);
		}
	};
}
