#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class ODHPCINKFKK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimLightningConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define DNDAAMPFNJG_AAOIBEJFGAO_OFFSET UNITYSDK_OFFSET(0x11942920)
#define DNDAAMPFNJG_ACBBECJNHEK_OFFSET UNITYSDK_OFFSET(0x11944020)
#define DNDAAMPFNJG_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0x11942130)
#define DNDAAMPFNJG_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0x11941E30)
#define DNDAAMPFNJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x11944610)
#define DNDAAMPFNJG_CTOR_OFFSET UNITYSDK_OFFSET(0x11941340)
#define DNDAAMPFNJG_DCDODFFMPJJ_OFFSET UNITYSDK_OFFSET(0x119421D0)
#define DNDAAMPFNJG_EJJOBKDOHAJ_OFFSET UNITYSDK_OFFSET(0x11942F80)
#define DNDAAMPFNJG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11941510)
#define DNDAAMPFNJG_GCCMKLLPFJE_OFFSET UNITYSDK_OFFSET(0x11941C20)
#define DNDAAMPFNJG_GMLKMFDNNFP_OFFSET UNITYSDK_OFFSET(0x119440B0)
#define DNDAAMPFNJG_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0x119442D0)
#define DNDAAMPFNJG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11941B60)
#define DNDAAMPFNJG_JMILCGFAGBL_OFFSET UNITYSDK_OFFSET(0x11942780)
#define DNDAAMPFNJG_JNFGADJJBMD_OFFSET UNITYSDK_OFFSET(0x11941560)
#define DNDAAMPFNJG_KMJCDAFGCJI_OFFSET UNITYSDK_OFFSET(0x119430A0)
#define DNDAAMPFNJG_KOBAAHNDPCA_OFFSET UNITYSDK_OFFSET(0x119417C0)
#define DNDAAMPFNJG_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x11941900)
#define DNDAAMPFNJG_LBJIANLEMLM_OFFSET UNITYSDK_OFFSET(0x119423A0)
#define DNDAAMPFNJG_LJBLJIBAOHP_OFFSET UNITYSDK_OFFSET(0x119444A0)
#define DNDAAMPFNJG_MOHOCLFPNMK_OFFSET UNITYSDK_OFFSET(0x11943950)
#define DNDAAMPFNJG_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0x11941950)
#define DNDAAMPFNJG_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0x11944310)
#define DNDAAMPFNJG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x11941ED0)

inline static constexpr unsigned int DNDAAMPFNJG_TypeDefinitionIndex = 77129;

	class DNDAAMPFNJG : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::Entitas::ICollector_1<::HIOEAKHGILF*>* LDBOPAHKHJL; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* JJJAKENOACB; // 0x28
		::System::Boolean ABKMPGNDAHO; // 0x30
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KIPGEBIACHF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "DNDAAMPFNJG")->GetStaticField(0x6F280);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "DNDAAMPFNJG")->GetStaticField(0x6F288);
		}

		static ::System::Int32* StaticGet_OKABKDMPCEA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DNDAAMPFNJG")->GetStaticField(0x158B0);
		}

		// static const ::System::Object BBLNFACHMEF; // 0x0
		// static const ::System::Object BNAJPMDCNBL; // 0x0
		// static const ::System::Object HEFBEOLEHCP; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNDAAMPFNJG_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_EXECUTE_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_TEARDOWN_OFFSET))(this);
		}

		::System::Void BNLPMEMODPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_BNLPMEMODPH_OFFSET))(this);
		}

		::System::Void AKBIKOKKBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_AKBIKOKKBFI_OFFSET))(this);
		}

		::System::Void JNFGADJJBMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_JNFGADJJBMD_OFFSET))(this);
		}

		::System::Void GCCMKLLPFJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_GCCMKLLPFJE_OFFSET))(this);
		}

		::System::Void DCDODFFMPJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_DCDODFFMPJJ_OFFSET))(this, a1);
		}

		::System::Void KOBAAHNDPCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_KOBAAHNDPCA_OFFSET))(this);
		}

		::System::Boolean JMILCGFAGBL(::HIOEAKHGILF* a1, ::ODHPCINKFKK* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::ODHPCINKFKK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_JMILCGFAGBL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 AAOIBEJFGAO(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimLightningConfig* a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_AAOIBEJFGAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LBJIANLEMLM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_LBJIANLEMLM_OFFSET))(this, a1);
		}

		::System::Void EJJOBKDOHAJ(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_EJJOBKDOHAJ_OFFSET))(this, a1, a2);
		}

		::System::Void MOHOCLFPNMK(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_MOHOCLFPNMK_OFFSET))(this, a1, a2);
		}

		::System::Void GMLKMFDNNFP(::HIOEAKHGILF* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_GMLKMFDNNFP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ACBBECJNHEK(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_ACBBECJNHEK_OFFSET))(this, a1, a2);
		}

		::System::Void KMJCDAFGCJI(::HIOEAKHGILF* a1, ::ODHPCINKFKK* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::ODHPCINKFKK*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_KMJCDAFGCJI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void POOLDMKLJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_POOLDMKLJLJ_OFFSET))(this);
		}

		::System::Void NGGHLBDENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_NGGHLBDENKP_OFFSET))(this);
		}

		::System::Void LJBLJIBAOHP(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_LJBLJIBAOHP_OFFSET))(this, a1, a2, a3, a4);
		}

	};
