#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class Effect_TrajectoryMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MNEAPCBEGBI_AEMFOACPBJJ_1_OFFSET UNITYSDK_OFFSET(0xB9FF900)
#define MNEAPCBEGBI_AEMFOACPBJJ_OFFSET UNITYSDK_OFFSET(0xB9FF880)
#define MNEAPCBEGBI_BLACKFNDDAJ_OFFSET UNITYSDK_OFFSET(0xB9FFF50)
#define MNEAPCBEGBI_CLKNIIFJAOI_1_OFFSET UNITYSDK_OFFSET(0xBA00E80)
#define MNEAPCBEGBI_CLKNIIFJAOI_OFFSET UNITYSDK_OFFSET(0xBA00680)
#define MNEAPCBEGBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9FF760)
#define MNEAPCBEGBI_DKJOECACIMN_OFFSET UNITYSDK_OFFSET(0xB9FFA90)
#define MNEAPCBEGBI_DNFGHPGAMPC_OFFSET UNITYSDK_OFFSET(0xB9FF9E0)
#define MNEAPCBEGBI_ECPBHNICCMF_OFFSET UNITYSDK_OFFSET(0xB9FFFF0)
#define MNEAPCBEGBI_EKFKIPLFMCM_OFFSET UNITYSDK_OFFSET(0xB9FFEC0)
#define MNEAPCBEGBI_GEBDJEJDAMN_1_OFFSET UNITYSDK_OFFSET(0xBA00C90)
#define MNEAPCBEGBI_GEBDJEJDAMN_OFFSET UNITYSDK_OFFSET(0xBA005F0)
#define MNEAPCBEGBI_HCKNNCJFKIA_1_OFFSET UNITYSDK_OFFSET(0xBA01220)
#define MNEAPCBEGBI_HCKNNCJFKIA_OFFSET UNITYSDK_OFFSET(0xBA00760)
#define MNEAPCBEGBI_ILPKDCGIDCP_OFFSET UNITYSDK_OFFSET(0xBA016A0)
#define MNEAPCBEGBI_JBBPGEJLGHC_OFFSET UNITYSDK_OFFSET(0xB9FF7F0)
#define MNEAPCBEGBI_JNJJHKDKCHJ_OFFSET UNITYSDK_OFFSET(0xBA01420)
#define MNEAPCBEGBI_KBAOFDGJKOE_OFFSET UNITYSDK_OFFSET(0xBA00800)
#define MNEAPCBEGBI_KFAFECONGCD_OFFSET UNITYSDK_OFFSET(0xB9FFC30)
#define MNEAPCBEGBI_LIKPELHKBLP_1_OFFSET UNITYSDK_OFFSET(0xBA00AB0)
#define MNEAPCBEGBI_LIKPELHKBLP_OFFSET UNITYSDK_OFFSET(0xBA00570)
#define MNEAPCBEGBI_LNLCEKIJGIE_OFFSET UNITYSDK_OFFSET(0xBA01550)
#define MNEAPCBEGBI_MMMHHCHFEAM_OFFSET UNITYSDK_OFFSET(0xB9FFD70)
#define MNEAPCBEGBI_NANCPOHNPBP_OFFSET UNITYSDK_OFFSET(0xBA00280)
#define MNEAPCBEGBI_NBPICOEPMFF_1_OFFSET UNITYSDK_OFFSET(0xBA008D0)
#define MNEAPCBEGBI_NBPICOEPMFF_OFFSET UNITYSDK_OFFSET(0xBA004F0)
#define MNEAPCBEGBI_OCFLIAHKFGN_OFFSET UNITYSDK_OFFSET(0xBA000F0)
#define MNEAPCBEGBI_PLDJCBMDEPE_OFFSET UNITYSDK_OFFSET(0xBA003E0)
#define MNEAPCBEGBI_POBJMFGACME_1_OFFSET UNITYSDK_OFFSET(0xBA01050)
#define MNEAPCBEGBI_POBJMFGACME_OFFSET UNITYSDK_OFFSET(0xBA006F0)

inline static constexpr unsigned int MNEAPCBEGBI_TypeDefinitionIndex = 76617;

	class MNEAPCBEGBI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
		::RPG::Client::Effect_TrajectoryMonoPlugin* DODAGCBJHIK; // 0x18
		::UnityEngine::GameObject* FAEGPGKBBLI; // 0x20
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x28
		::UnityEngine::Animator* APPGGMLEPLN; // 0x30
		::System::Single MMJPMKIHAMF; // 0x38
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JBBPGEJLGHC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_JBBPGEJLGHC_OFFSET))(this, a1);
		}

		::System::Void AEMFOACPBJJ(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_AEMFOACPBJJ_OFFSET))(this, a1);
		}

		::System::Void AEMFOACPBJJ_1(::System::String* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_AEMFOACPBJJ_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 DNFGHPGAMPC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_DNFGHPGAMPC_OFFSET))(this);
		}

		::UnityEngine::Vector3 DKJOECACIMN(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_DKJOECACIMN_OFFSET))(this, a1);
		}

		::System::Void KFAFECONGCD(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_KFAFECONGCD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MMMHHCHFEAM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_MMMHHCHFEAM_OFFSET))(this);
		}

		::System::Void EKFKIPLFMCM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_EKFKIPLFMCM_OFFSET))(this, a1);
		}

		::System::Void BLACKFNDDAJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_BLACKFNDDAJ_OFFSET))(this, a1);
		}

		::System::Void ECPBHNICCMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_ECPBHNICCMF_OFFSET))(this, a1);
		}

		::System::Void OCFLIAHKFGN(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_OCFLIAHKFGN_OFFSET))(this, a1, a2);
		}

		::System::Void NANCPOHNPBP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_NANCPOHNPBP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 PLDJCBMDEPE(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_PLDJCBMDEPE_OFFSET))(this, a1);
		}

		::System::Void NBPICOEPMFF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_NBPICOEPMFF_OFFSET))(this, a1, a2);
		}

		::System::Void LIKPELHKBLP(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_LIKPELHKBLP_OFFSET))(this, a1, a2);
		}

		::System::Void GEBDJEJDAMN(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_GEBDJEJDAMN_OFFSET))(this, a1, a2);
		}

		::System::Void CLKNIIFJAOI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_CLKNIIFJAOI_OFFSET))(this, a1);
		}

		::System::Void POBJMFGACME(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_POBJMFGACME_OFFSET))(this, a1);
		}

		::System::Void HCKNNCJFKIA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_HCKNNCJFKIA_OFFSET))(this, a1);
		}

		::System::Boolean KBAOFDGJKOE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_KBAOFDGJKOE_OFFSET))(this, a1);
		}

		::System::Void NBPICOEPMFF_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_NBPICOEPMFF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LIKPELHKBLP_1(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_LIKPELHKBLP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GEBDJEJDAMN_1(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_GEBDJEJDAMN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLKNIIFJAOI_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_CLKNIIFJAOI_1_OFFSET))(this, a1, a2);
		}

		::System::Void POBJMFGACME_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_POBJMFGACME_1_OFFSET))(this, a1, a2);
		}

		::System::Void HCKNNCJFKIA_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_HCKNNCJFKIA_1_OFFSET))(this, a1, a2);
		}

		::System::Void JNJJHKDKCHJ(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_JNJJHKDKCHJ_OFFSET))(this, a1, a2);
		}

		::System::Void LNLCEKIJGIE(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_LNLCEKIJGIE_OFFSET))(this, a1, a2);
		}

		::System::Void ILPKDCGIDCP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MNEAPCBEGBI_ILPKDCGIDCP_OFFSET))(this, a1, a2);
		}

	};
