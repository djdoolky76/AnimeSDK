#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/EA13F019F5C08611.h"
#include "unitysdk/E33DBE3D45A5731A/F65B394BF159CB9F.h"
#include "unitysdk/RayFire/RayfireRigidRoot_E8A1E5BB691974C3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RFActivation; }
namespace RayFire { class RFCluster; }
namespace RayFire { class RFFade; }
namespace RayFire { class RFPhysic; }
namespace RayFire { class RFReset; }
namespace RayFire { class RFShard; }
namespace RayFire { class RayfireConnectivity; }
namespace RayFire { class RayfireDebris; }
namespace RayFire { class RayfireDust; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireUnyielding; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRERIGIDROOT_A34A6C23D3B4993D_OFFSET UNITYSDK_OFFSET(0x29FB360)
#define RAYFIRE_RAYFIRERIGIDROOT_A3A8AF8456C1741E_OFFSET UNITYSDK_OFFSET(0x29F9B10)
#define RAYFIRE_RAYFIRERIGIDROOT_A8F21E419EBF0540_OFFSET UNITYSDK_OFFSET(0x29F9F20)
#define RAYFIRE_RAYFIRERIGIDROOT_AFE8AA880A970793_OFFSET UNITYSDK_OFFSET(0x29F9A50)
#define RAYFIRE_RAYFIRERIGIDROOT_B58CAF4A18D694BD_OFFSET UNITYSDK_OFFSET(0x29F98A0)
#define RAYFIRE_RAYFIRERIGIDROOT_B7ADBCD52DDFEAD0_OFFSET UNITYSDK_OFFSET(0x29FB020)
#define RAYFIRE_RAYFIRERIGIDROOT_BA2FBBDD3632E543_OFFSET UNITYSDK_OFFSET(0x29FA820)
#define RAYFIRE_RAYFIRERIGIDROOT_BCFD2BC51AA482AF_OFFSET UNITYSDK_OFFSET(0x29F93F0)
#define RAYFIRE_RAYFIRERIGIDROOT_BE4E07709B975841_OFFSET UNITYSDK_OFFSET(0x29F9C30)
#define RAYFIRE_RAYFIRERIGIDROOT_E7BBFAE558717E98_OFFSET UNITYSDK_OFFSET(0x29FA5B0)
#define RAYFIRE_RAYFIRERIGIDROOT_E8D1E345B5CCA4CE_OFFSET UNITYSDK_OFFSET(0x29FB110)
#define RAYFIRE_RAYFIRERIGIDROOT_F12841DB54B709DF_OFFSET UNITYSDK_OFFSET(0x29F9960)
#define RAYFIRE_RAYFIRERIGIDROOT_F44AAE1A189DB295_OFFSET UNITYSDK_OFFSET(0x29FB310)
#define RAYFIRE_RAYFIRERIGIDROOT_F4823352362AC311_OFFSET UNITYSDK_OFFSET(0x29F99D0)
#define RAYFIRE_RAYFIRERIGIDROOT_F5BA36D8513AC5CE_OFFSET UNITYSDK_OFFSET(0x29F9520)
#define RAYFIRE_RAYFIRERIGIDROOT_FBA1BD299A01AB44_OFFSET UNITYSDK_OFFSET(0x29FB0C0)
#define RAYFIRE_RAYFIRERIGIDROOT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x29F9890)
#define RAYFIRE_RAYFIRERIGIDROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x29FB1D0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireRigidRoot_TypeDefinitionIndex = 15851;

	class RayfireRigidRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireRigidRoot_E8A1E5BB691974C3 initialization; // 0x20
		::E33DBE3D45A5731A::EA13F019F5C08611 simulationType; // 0x24
		::RayFire::RFPhysic* physics; // 0x28
		::RayFire::RFActivation* activation; // 0x30
		::RayFire::RFFade* fading; // 0x38
		::RayFire::RFReset* reset; // 0x40
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* inactiveShards; // 0x48
		::RayFire::RFCluster* cluster; // 0x50
		::UnityEngine::Transform* tm; // 0x58
		::RayFire::RayfireConnectivity* connect; // 0x60
		::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* debrisList; // 0x68
		::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* dustList; // 0x70
		::System::Collections::Generic::List_1<::RayFire::RayfireUnyielding*>* unyList; // 0x78

		::System::Void BA2FBBDD3632E543()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_BA2FBBDD3632E543_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Void E7BBFAE558717E98(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* BFE7E2951589D96B, ::E33DBE3D45A5731A::F65B394BF159CB9F B4EF92D0FD50125B)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*, ::E33DBE3D45A5731A::F65B394BF159CB9F))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_E7BBFAE558717E98_OFFSET))(BE27CDF41D2DFAAD, BFE7E2951589D96B, B4EF92D0FD50125B);
		}

		::System::Void AFE8AA880A970793()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_AFE8AA880A970793_OFFSET))(this);
		}

		::System::Collections::IEnumerator* F12841DB54B709DF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_F12841DB54B709DF_OFFSET))(this);
		}

		::System::Void BE4E07709B975841()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_BE4E07709B975841_OFFSET))(this);
		}

		static ::System::Boolean F4823352362AC311(::UnityEngine::Transform* E1C906AC21402CBB)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_F4823352362AC311_OFFSET))(E1C906AC21402CBB);
		}

		::System::Void F5BA36D8513AC5CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_F5BA36D8513AC5CE_OFFSET))(this);
		}

		::System::Void B58CAF4A18D694BD(::RayFire::RayfireRigid* FEA8E87C1F9B53C4)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_B58CAF4A18D694BD_OFFSET))(this, FEA8E87C1F9B53C4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT__CTOR_OFFSET))(this);
		}

		::System::Void BCFD2BC51AA482AF(::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_BCFD2BC51AA482AF_OFFSET))(this, F86513DEE5D16613);
		}

		::System::Void B7ADBCD52DDFEAD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_B7ADBCD52DDFEAD0_OFFSET))(this);
		}

		::System::Boolean F44AAE1A189DB295()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_F44AAE1A189DB295_OFFSET))(this);
		}

		::System::Void A3A8AF8456C1741E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_A3A8AF8456C1741E_OFFSET))(this);
		}

		::System::Boolean A34A6C23D3B4993D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_A34A6C23D3B4993D_OFFSET))(this);
		}

		::System::Int32 FBA1BD299A01AB44()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_FBA1BD299A01AB44_OFFSET))(this);
		}

		::System::Void E8D1E345B5CCA4CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_E8D1E345B5CCA4CE_OFFSET))(this);
		}

		::System::Void A8F21E419EBF0540()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGIDROOT_A8F21E419EBF0540_OFFSET))(this);
		}
	};
}
