#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/F65B394BF159CB9F.h"
#include "unitysdk/RayFire/RayfireConnectivity_E7AB3F717F39B134.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RFCluster; }
namespace RayFire { class RFCollapse; }
namespace RayFire { class RFShard; }
namespace RayFire { class RFStress; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRECONNECTIVITY_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2A140C0)
#define RAYFIRE_RAYFIRECONNECTIVITY_A5FDBFDFF44D593C_OFFSET UNITYSDK_OFFSET(0x2A14760)
#define RAYFIRE_RAYFIRECONNECTIVITY_A821133704B62C28_OFFSET UNITYSDK_OFFSET(0x2A11FF0)
#define RAYFIRE_RAYFIRECONNECTIVITY_AC42273FFCEAC61F_OFFSET UNITYSDK_OFFSET(0x2A11A30)
#define RAYFIRE_RAYFIRECONNECTIVITY_AC43FF9C16BEAA89_OFFSET UNITYSDK_OFFSET(0x2A14AF0)
#define RAYFIRE_RAYFIRECONNECTIVITY_AEA307543D83F8EF_OFFSET UNITYSDK_OFFSET(0x2A141C0)
#define RAYFIRE_RAYFIRECONNECTIVITY_B0C0196739ECA8A3_OFFSET UNITYSDK_OFFSET(0x2A13A40)
#define RAYFIRE_RAYFIRECONNECTIVITY_B2692760C73A239B_OFFSET UNITYSDK_OFFSET(0x2A12610)
#define RAYFIRE_RAYFIRECONNECTIVITY_B8E4318CA40BAEBE_OFFSET UNITYSDK_OFFSET(0x2A13C20)
#define RAYFIRE_RAYFIRECONNECTIVITY_BA0A4782E18020AA_OFFSET UNITYSDK_OFFSET(0x2A12C00)
#define RAYFIRE_RAYFIRECONNECTIVITY_BAFD9165AB7E6D97_OFFSET UNITYSDK_OFFSET(0x2A14500)
#define RAYFIRE_RAYFIRECONNECTIVITY_BEA03FE4A5480385_OFFSET UNITYSDK_OFFSET(0x2A12DF0)
#define RAYFIRE_RAYFIRECONNECTIVITY_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2A140D0)
#define RAYFIRE_RAYFIRECONNECTIVITY_E0BFEBAD6D94B88C_OFFSET UNITYSDK_OFFSET(0x2A141D0)
#define RAYFIRE_RAYFIRECONNECTIVITY_E28A4287D0256FEA_OFFSET UNITYSDK_OFFSET(0x2A11DF0)
#define RAYFIRE_RAYFIRECONNECTIVITY_E502165224D7C680_OFFSET UNITYSDK_OFFSET(0x2A139D0)
#define RAYFIRE_RAYFIRECONNECTIVITY_E9CC9FE326749DDF_OFFSET UNITYSDK_OFFSET(0x2A13B80)
#define RAYFIRE_RAYFIRECONNECTIVITY_EA5E48DA300B1DFD_OFFSET UNITYSDK_OFFSET(0x2A142C0)
#define RAYFIRE_RAYFIRECONNECTIVITY_EB869F3CD0E4FD49_OFFSET UNITYSDK_OFFSET(0x2A12460)
#define RAYFIRE_RAYFIRECONNECTIVITY_F1F9EC2BDC7CBD2D_OFFSET UNITYSDK_OFFSET(0x2A12B90)
#define RAYFIRE_RAYFIRECONNECTIVITY_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2A14D00)
#define RAYFIRE_RAYFIRECONNECTIVITY_F3451D6A1B570D53_OFFSET UNITYSDK_OFFSET(0x2A14400)
#define RAYFIRE_RAYFIRECONNECTIVITY_F3A46E97D7C9B5E4_OFFSET UNITYSDK_OFFSET(0x2A11BF0)
#define RAYFIRE_RAYFIRECONNECTIVITY_F4014C8C700A5F0C_OFFSET UNITYSDK_OFFSET(0x2A12830)
#define RAYFIRE_RAYFIRECONNECTIVITY_F40B143C0FA2896F_OFFSET UNITYSDK_OFFSET(0x2A12250)
#define RAYFIRE_RAYFIRECONNECTIVITY_F56FC1C045ED6238_OFFSET UNITYSDK_OFFSET(0x2A14E60)
#define RAYFIRE_RAYFIRECONNECTIVITY_F65ACAE10FECDC58_OFFSET UNITYSDK_OFFSET(0x2A11CD0)
#define RAYFIRE_RAYFIRECONNECTIVITY_F793EBF4E3935F0E_OFFSET UNITYSDK_OFFSET(0x2A12EE0)
#define RAYFIRE_RAYFIRECONNECTIVITY_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2A11BF0)
#define RAYFIRE_RAYFIRECONNECTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x2A14E20)

namespace RayFire
{
	inline static constexpr unsigned int RayfireConnectivity_TypeDefinitionIndex = 15924;

	class RayfireConnectivity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::E33DBE3D45A5731A::F65B394BF159CB9F type; // 0x20
		::System::Single minimumArea; // 0x24
		::System::Single minimumSize; // 0x28
		::System::Int32 percentage; // 0x2C
		::System::Int32 seed; // 0x30
		::System::Boolean clusterize; // 0x34
		::System::Boolean demolishable; // 0x35
		::System::Byte _padding0[0x2];
		::RayFire::RayfireConnectivity_E7AB3F717F39B134 startCollapse; // 0x38
		::System::Int32 collapseByIntegrity; // 0x3C
		::RayFire::RFCollapse* collapse; // 0x40
		::RayFire::RayfireConnectivity_E7AB3F717F39B134 startStress; // 0x48
		::System::Int32 stressByIntegrity; // 0x4C
		::RayFire::RFStress* stress; // 0x50
		::System::Boolean showConnections; // 0x58
		::System::Boolean showNodes; // 0x59
		::System::Boolean showStress; // 0x5A
		::System::Boolean showGizmo; // 0x5B
		::System::Boolean checkConnectivity; // 0x5C
		::System::Boolean connectivityCheckNeed; // 0x5D
		::System::Byte _padding1[0x2];
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* rigidList; // 0x60
		::RayFire::RFCluster* cluster; // 0x68
		::System::Int32 initShardAmount; // 0x70
		::System::Byte _padding2[0x4];
		::RayFire::RayfireRigid* rigidHost; // 0x78
		::RayFire::RayfireRigidRoot* rigidRootHost; // 0x80
		::System::Boolean F584E6C4722F2BD7; // 0x88
		::System::Boolean B96F2B94FC72CC7E; // 0x89
		::System::Boolean E4BAD0B64187D643; // 0x8A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY__CTOR_OFFSET))(this);
		}

		::System::Boolean B2692760C73A239B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_B2692760C73A239B_OFFSET))(this);
		}

		static ::System::Void EB869F3CD0E4FD49(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_EB869F3CD0E4FD49_OFFSET))(BE27CDF41D2DFAAD);
		}

		static ::System::Void BEA03FE4A5480385(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_BEA03FE4A5480385_OFFSET))(BE27CDF41D2DFAAD);
		}

		::System::Void E9CC9FE326749DDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_E9CC9FE326749DDF_OFFSET))(this);
		}

		::System::Void F4014C8C700A5F0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F4014C8C700A5F0C_OFFSET))(this);
		}

		::System::Void AC43FF9C16BEAA89(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* FD2D89AE277D129E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_AC43FF9C16BEAA89_OFFSET))(this, FD2D89AE277D129E);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void A821133704B62C28()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_A821133704B62C28_OFFSET))(this);
		}

		::System::Void A5FDBFDFF44D593C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_A5FDBFDFF44D593C_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E28A4287D0256FEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_E28A4287D0256FEA_OFFSET))(this);
		}

		::System::Void AC42273FFCEAC61F(::System::Collections::Generic::List_1<::RayFire::RFShard*>* AE8A8864D80707AE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_AC42273FFCEAC61F_OFFSET))(this, AE8A8864D80707AE);
		}

		static ::System::Void F40B143C0FA2896F(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F40B143C0FA2896F_OFFSET))(BE27CDF41D2DFAAD);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* F1F9EC2BDC7CBD2D()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F1F9EC2BDC7CBD2D_OFFSET))(this);
		}

		static ::System::Boolean B8E4318CA40BAEBE(::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* B7FA98F778C25381, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_B8E4318CA40BAEBE_OFFSET))(B7FA98F778C25381, BE27CDF41D2DFAAD);
		}

		::System::Void E0BFEBAD6D94B88C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_E0BFEBAD6D94B88C_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* F3451D6A1B570D53()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F3451D6A1B570D53_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E502165224D7C680()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_E502165224D7C680_OFFSET))(this);
		}

		::System::Void F793EBF4E3935F0E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F793EBF4E3935F0E_OFFSET))(this);
		}

		::System::Void BAFD9165AB7E6D97()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_BAFD9165AB7E6D97_OFFSET))(this);
		}

		::System::Single F56FC1C045ED6238()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F56FC1C045ED6238_OFFSET))(this);
		}

		::System::Void AEA307543D83F8EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_AEA307543D83F8EF_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F328E4D8818B1E12_OFFSET))(this);
		}

		static ::System::Void BA0A4782E18020AA(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_BA0A4782E18020AA_OFFSET))(BE27CDF41D2DFAAD);
		}

		::System::Void F3A46E97D7C9B5E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F3A46E97D7C9B5E4_OFFSET))(this);
		}

		::System::Void B0C0196739ECA8A3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_B0C0196739ECA8A3_OFFSET))(this);
		}

		::System::Void EA5E48DA300B1DFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_EA5E48DA300B1DFD_OFFSET))(this);
		}

		::System::Void F65ACAE10FECDC58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECONNECTIVITY_F65ACAE10FECDC58_OFFSET))(this);
		}
	};
}
