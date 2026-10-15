#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/IKHitReactionChainEnd.h"
class IKMDCDBLFNB;
namespace RPG::Client { class IKHitReactionSpine; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IKHITREACTION_ANAECHEDEFP_OFFSET UNITYSDK_OFFSET(0xD32FE90)
#define RPG_CLIENT_IKHITREACTION_APNPPMPEKNG_OFFSET UNITYSDK_OFFSET(0xD331800)
#define RPG_CLIENT_IKHITREACTION_BHMKHBEPKNB_OFFSET UNITYSDK_OFFSET(0xD332590)
#define RPG_CLIENT_IKHITREACTION_BJMCAJCAHDP_OFFSET UNITYSDK_OFFSET(0xD331B10)
#define RPG_CLIENT_IKHITREACTION_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3326F0)
#define RPG_CLIENT_IKHITREACTION_CLBHBHBFPDN_OFFSET UNITYSDK_OFFSET(0xD332360)
#define RPG_CLIENT_IKHITREACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD3326B0)
#define RPG_CLIENT_IKHITREACTION_ELNNFCOKFIO_OFFSET UNITYSDK_OFFSET(0xD332620)
#define RPG_CLIENT_IKHITREACTION_FCMELCGPGCE_OFFSET UNITYSDK_OFFSET(0xD3300B0)
#define RPG_CLIENT_IKHITREACTION_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xD32E660)
#define RPG_CLIENT_IKHITREACTION_FJGOGFHEGKN_OFFSET UNITYSDK_OFFSET(0xD32F8D0)
#define RPG_CLIENT_IKHITREACTION_GBKCMJCFFFG_OFFSET UNITYSDK_OFFSET(0xD32E510)
#define RPG_CLIENT_IKHITREACTION_HJEJAHHFDIL_OFFSET UNITYSDK_OFFSET(0xD332520)
#define RPG_CLIENT_IKHITREACTION_ILLEOLCFPED_OFFSET UNITYSDK_OFFSET(0xD331890)
#define RPG_CLIENT_IKHITREACTION_JELOHMFIOHP_OFFSET UNITYSDK_OFFSET(0xD32E310)
#define RPG_CLIENT_IKHITREACTION_KAJBAFNHPGO_OFFSET UNITYSDK_OFFSET(0xD331C00)
#define RPG_CLIENT_IKHITREACTION_KLAJNDMPJBF_OFFSET UNITYSDK_OFFSET(0xD331580)
#define RPG_CLIENT_IKHITREACTION_LFKLDPPKMPP_OFFSET UNITYSDK_OFFSET(0xD330C20)
#define RPG_CLIENT_IKHITREACTION_MCBGOPGDJIA_OFFSET UNITYSDK_OFFSET(0xD331450)
#define RPG_CLIENT_IKHITREACTION_MMPODGBLDFG_OFFSET UNITYSDK_OFFSET(0xD32EB70)
#define RPG_CLIENT_IKHITREACTION_MNNHHJCIKPO_OFFSET UNITYSDK_OFFSET(0xD32FEF0)
#define RPG_CLIENT_IKHITREACTION_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xD32E8F0)
#define RPG_CLIENT_IKHITREACTION_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD32FBA0)
#define RPG_CLIENT_IKHITREACTION_PNCBGDBMBOI_OFFSET UNITYSDK_OFFSET(0xD330D80)

namespace RPG::Client
{
	inline static constexpr unsigned int IKHitReaction_TypeDefinitionIndex = 68461;

	class IKHitReaction : public ::System::Object
	{
	public:
		::System::Single EnergyLossFactor; // 0x10
		::System::Single AngularSpeedMax; // 0x14
		::System::Single ResilientSpeed; // 0x18
		::System::Single InertiaForceFactor; // 0x1C
		::RPG::Client::IKHitReactionSpine* Spine; // 0x20
		::System::Single _JointsDeltaRotSum; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* _RootTransform; // 0x30
		::Il2CppArray<::IKMDCDBLFNB*>* _JointChains; // 0x38
		::System::Collections::Generic::Stack_1<::UnityEngine::Vector3>* _PendingForce; // 0x40
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>** StaticGet__JointLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "IKHitReaction")->GetStaticField(0x14250);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet__ChainTargetCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)UnitySDK::FromName("RPG.Client", "IKHitReaction")->GetStaticField(0x14258);
		}

		static ::System::Collections::Generic::List_1<::IKMDCDBLFNB*>** StaticGet__ChainCache()
		{
			return (::System::Collections::Generic::List_1<::IKMDCDBLFNB*>**)UnitySDK::FromName("RPG.Client", "IKHitReaction")->GetStaticField(0x14260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_CCTOR_OFFSET))();
		}

		::System::Void JELOHMFIOHP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_JELOHMFIOHP_OFFSET))(this, a1, a2);
		}

		::System::Void GBKCMJCFFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_GBKCMJCFFFG_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void FJGOGFHEGKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_FJGOGFHEGKN_OFFSET))(this, a1);
		}

		::System::Void LFKLDPPKMPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_LFKLDPPKMPP_OFFSET))(this);
		}

		::System::Void PNCBGDBMBOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_PNCBGDBMBOI_OFFSET))(this);
		}

		::System::Void FCMELCGPGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_FCMELCGPGCE_OFFSET))(this, a1);
		}

		::System::Void MCBGOPGDJIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_MCBGOPGDJIA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IKMDCDBLFNB*>* KLAJNDMPJBF(::IKMDCDBLFNB* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::IKMDCDBLFNB*>*(*)(::PVOID, ::IKMDCDBLFNB*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_KLAJNDMPJBF_OFFSET))(this, a1, a2);
		}

		::System::Void MNNHHJCIKPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_MNNHHJCIKPO_OFFSET))(this);
		}

		::System::Void MMPODGBLDFG(::RPG::Client::IKHitReactionChainEnd a1, ::UnityEngine::Transform* a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IKHitReactionChainEnd, ::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_MMPODGBLDFG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KAJBAFNHPGO(::IKMDCDBLFNB* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IKMDCDBLFNB*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_KAJBAFNHPGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BJMCAJCAHDP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_BJMCAJCAHDP_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANAECHEDEFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_ANAECHEDEFP_OFFSET))(this);
		}

		static ::System::Single HJEJAHHFDIL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_HJEJAHHFDIL_OFFSET))(a1, a2);
		}

		static ::System::Single APNPPMPEKNG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_APNPPMPEKNG_OFFSET))(a1, a2, a3);
		}

		static ::System::Single BHMKHBEPKNB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_BHMKHBEPKNB_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ELNNFCOKFIO(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_ELNNFCOKFIO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ILLEOLCFPED(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_ILLEOLCFPED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 CLBHBHBFPDN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_CLBHBHBFPDN_OFFSET))(a1);
		}

	};
}
