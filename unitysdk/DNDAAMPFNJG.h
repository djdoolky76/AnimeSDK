#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/KLNKLOMDIIC.h"
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

#define DNDAAMPFNJG_AAOIBEJFGAO_OFFSET UNITYSDK_OFFSET(0x12CB2C40)
#define DNDAAMPFNJG_ACBBECJNHEK_OFFSET UNITYSDK_OFFSET(0x12CB48B0)
#define DNDAAMPFNJG_AJCANAHCEML_OFFSET UNITYSDK_OFFSET(0x12CB28D0)
#define DNDAAMPFNJG_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0x12CB1EA0)
#define DNDAAMPFNJG_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0x12CB1BB0)
#define DNDAAMPFNJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CB4EA0)
#define DNDAAMPFNJG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB10C0)
#define DNDAAMPFNJG_DCDODFFMPJJ_OFFSET UNITYSDK_OFFSET(0x12CB1F40)
#define DNDAAMPFNJG_EJJOBKDOHAJ_OFFSET UNITYSDK_OFFSET(0x12CB3270)
#define DNDAAMPFNJG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12CB1290)
#define DNDAAMPFNJG_GCCMKLLPFJE_OFFSET UNITYSDK_OFFSET(0x12CB19A0)
#define DNDAAMPFNJG_GMLKMFDNNFP_OFFSET UNITYSDK_OFFSET(0x12CB4940)
#define DNDAAMPFNJG_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0x12CB4B60)
#define DNDAAMPFNJG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12CB18E0)
#define DNDAAMPFNJG_JNFGADJJBMD_OFFSET UNITYSDK_OFFSET(0x12CB12E0)
#define DNDAAMPFNJG_KMJCDAFGCJI_OFFSET UNITYSDK_OFFSET(0x12CB3350)
#define DNDAAMPFNJG_KOBAAHNDPCA_OFFSET UNITYSDK_OFFSET(0x12CB1540)
#define DNDAAMPFNJG_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x12CB1680)
#define DNDAAMPFNJG_LBJIANLEMLM_OFFSET UNITYSDK_OFFSET(0x12CB20F0)
#define DNDAAMPFNJG_LJBLJIBAOHP_OFFSET UNITYSDK_OFFSET(0x12CB4D30)
#define DNDAAMPFNJG_MOHOCLFPNMK_OFFSET UNITYSDK_OFFSET(0x12CB3BC0)
#define DNDAAMPFNJG_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0x12CB16D0)
#define DNDAAMPFNJG_NLFIJMPLLMI_OFFSET UNITYSDK_OFFSET(0x12CB2750)
#define DNDAAMPFNJG_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0x12CB4BA0)
#define DNDAAMPFNJG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12CB1C50)

inline static constexpr unsigned int DNDAAMPFNJG_TypeDefinitionIndex = 79462;

	class DNDAAMPFNJG : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<::HIOEAKHGILF*>* LDBOPAHKHJL; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* JJJAKENOACB; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Boolean ABKMPGNDAHO; // 0x30
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "DNDAAMPFNJG")->GetStaticField(0x69AE0);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KIPGEBIACHF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "DNDAAMPFNJG")->GetStaticField(0x69AE8);
		}

		static ::System::Int32* StaticGet_OKABKDMPCEA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DNDAAMPFNJG")->GetStaticField(0x14CC0);
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

		::KLNKLOMDIIC NLFIJMPLLMI(::HIOEAKHGILF* a1)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_NLFIJMPLLMI_OFFSET))(this, a1);
		}

		::System::Boolean AJCANAHCEML(::HIOEAKHGILF* a1, ::ODHPCINKFKK* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::ODHPCINKFKK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNDAAMPFNJG_AJCANAHCEML_OFFSET))(this, a1, a2, a3);
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
