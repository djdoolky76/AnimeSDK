#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EPBCKEFEADP_IJAPNDHPGGE;
namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define EPBCKEFEADP_AGNABJGDPON_OFFSET UNITYSDK_OFFSET(0x141875A0)
#define EPBCKEFEADP_AHECEDBBCCI_OFFSET UNITYSDK_OFFSET(0x14189F50)
#define EPBCKEFEADP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14187CC0)
#define EPBCKEFEADP_CKIHJNOBDMF_OFFSET UNITYSDK_OFFSET(0x14189970)
#define EPBCKEFEADP_EBIMBJCIFLH_OFFSET UNITYSDK_OFFSET(0x141870D0)
#define EPBCKEFEADP_EINJJCBLDIB_OFFSET UNITYSDK_OFFSET(0x14186FD0)
#define EPBCKEFEADP_EMPHMNMDPNK_OFFSET UNITYSDK_OFFSET(0x14187530)
#define EPBCKEFEADP_GGEIIJFEFCB_OFFSET UNITYSDK_OFFSET(0x14189770)
#define EPBCKEFEADP_GKOCBBPAJLE_OFFSET UNITYSDK_OFFSET(0x14188910)
#define EPBCKEFEADP_HILKBIFBAEC_OFFSET UNITYSDK_OFFSET(0x14187CB0)
#define EPBCKEFEADP_IKDGKNABGDI_OFFSET UNITYSDK_OFFSET(0x141897A0)
#define EPBCKEFEADP_IOHKIDPDOOA_OFFSET UNITYSDK_OFFSET(0x14189EE0)
#define EPBCKEFEADP_IPFLHFPECKE_OFFSET UNITYSDK_OFFSET(0x1418A2F0)
#define EPBCKEFEADP_JGJFJHDCEEJ_OFFSET UNITYSDK_OFFSET(0x14189FA0)
#define EPBCKEFEADP_KEPKGKMHBEP_OFFSET UNITYSDK_OFFSET(0x1418A300)
#define EPBCKEFEADP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14188110)
#define EPBCKEFEADP_LMCGJMFBOJP_OFFSET UNITYSDK_OFFSET(0x14187FD0)
#define EPBCKEFEADP_MCBBOBCLLEI_OFFSET UNITYSDK_OFFSET(0x14189710)
#define EPBCKEFEADP_MPENJCNOCGA_OFFSET UNITYSDK_OFFSET(0x14189FB0)
#define EPBCKEFEADP_NCPCEJIKBIP_OFFSET UNITYSDK_OFFSET(0x14188040)
#define EPBCKEFEADP_NHKHCNDKLED_OFFSET UNITYSDK_OFFSET(0x14188920)
#define EPBCKEFEADP_NLNGKBJOBJG_OFFSET UNITYSDK_OFFSET(0x1418A4C0)
#define EPBCKEFEADP_NNMLOACDCDF_OFFSET UNITYSDK_OFFSET(0x14188900)
#define EPBCKEFEADP_NOCDGOGMHEG_OFFSET UNITYSDK_OFFSET(0x141889C0)
#define EPBCKEFEADP_OKHBPJHGPLP_OFFSET UNITYSDK_OFFSET(0x1418A430)
#define EPBCKEFEADP_PHHPPFNBLJM_OFFSET UNITYSDK_OFFSET(0x1418A420)
#define EPBCKEFEADP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14186EC0)
#define EPBCKEFEADP__CTOR_OFFSET UNITYSDK_OFFSET(0x14186820)

inline static constexpr unsigned int EPBCKEFEADP_TypeDefinitionIndex = 89996;

class EPBCKEFEADP : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_IBOCCGJFIEH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC900);
	}
	static ::System::Int32* StaticGet_JGGKOCGNEDJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC904);
	}
	static ::System::Int32* StaticGet_HCACBGILEBE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC908);
	}
	static ::System::Int32* StaticGet_GEFHPPIJJKH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC90C);
	}
	static ::System::Int32* StaticGet_POPJBNOKCLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC910);
	}
	static ::System::Int32* StaticGet_CPOPIDHDMAB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC914);
	}
	static ::System::Int32* StaticGet_ABFGJPNPLMD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC918);
	}
	static ::System::Int32* StaticGet_AKHNAAGNAHF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC91C);
	}
	static ::System::Int32* StaticGet_GGPLEDFLMCJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC920);
	}
	static ::System::Boolean* StaticGet_CNPFKEFHAPD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC924);
	}
	static ::System::Int32* StaticGet_DAJEJGLKJDG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC928);
	}
	static ::System::Int32* StaticGet_HEJOOHMBOKN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPBCKEFEADP_TypeDefinitionIndex)->GetStaticField(0xC92C);
	}
	// static const ::System::String* HGHAOCBOPOG; // 0x0
	::Cysharp::Threading::Tasks::UniTask DJADLAJGNII; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* DCFJFCGCFCH; // 0x20
	::UnityEngine::ComputeBuffer* LDBBAMNFHOJ; // 0x28
	::UnityEngine::ComputeBuffer* DCPEHDCLPPK; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* LDHELHLHEOF; // 0x38
	::UnityEngine::ComputeBuffer* _PHOIPKGBIOI_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* GLKIEDLKGIB; // 0x48
	::UnityEngine::ComputeShader* AIOGGEHGLIH; // 0x50
	::UnityEngine::Mesh* _AKAGGMMODMP_k__BackingField; // 0x58
	::System::Threading::CancellationTokenSource* PBHENCFCBPD; // 0x60
	::UnityEngine::ComputeBuffer* DDOICOJMEGK; // 0x68
	::Il2CppArray<::System::UInt32>* OFJOJEEGBIJ; // 0x70
	::UnityEngine::ComputeBuffer* NNACPAEILPD; // 0x78
	::System::Collections::Generic::List_1<::System::Object*>* LCBIDBNEGLK; // 0x80
	::UnityEngine::ComputeBuffer* _FKLMOAFAMNE_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::MonoDynamicObjectVoxel*, ::System::Int32>* OHPEHJKNNHJ; // 0x90
	::EPBCKEFEADP_IJAPNDHPGGE* LNMMIIGLJNB; // 0x98
	::EPBCKEFEADP_IJAPNDHPGGE* AAEIOGFJNNJ; // 0xA0
	::UnityEngine::ComputeBuffer* DJGIKANGHIF; // 0xA8
	::Il2CppArray<::UnityEngine::Vector4>* KPMFDAKOBMA; // 0xB0
	::UnityEngine::Rendering::CommandBuffer* JOGIGIJGJEN; // 0xB8
	::UnityEngine::Vector3 FMFEBCGFOMD; // 0xC0
	::UnityEngine::Vector3 EKLLCAMHBNE; // 0xCC
	::System::Boolean FBEOLJDLFFL; // 0xD8
	::System::Boolean NJAEDPMMLHJ; // 0xD9
	::System::Boolean JLKOGGONHPN; // 0xDA
	::System::Byte _padding0[0x1];
	::System::Int32 FBFADMLKEMI; // 0xDC
	::System::Int32 CEPGGMCMJBI; // 0xE0

	::System::Void _ctor(::UnityEngine::Vector3 GALKEAMIGMO, ::UnityEngine::Vector3 LJADNKMDINP, ::UnityEngine::ComputeShader* EGJFDCDEINP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + EPBCKEFEADP__CTOR_OFFSET))(this, GALKEAMIGMO, LJADNKMDINP, EGJFDCDEINP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPBCKEFEADP__CCTOR_OFFSET))();
	}

	::Cysharp::Threading::Tasks::UniTask EINJJCBLDIB(::UnityEngine::Vector3Int CMFHBLMALBN, ::System::Boolean HOKAJDGJHDP, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + EPBCKEFEADP_EINJJCBLDIB_OFFSET))(this, CMFHBLMALBN, HOKAJDGJHDP, OMMEALOOOOD);
	}

	::System::Void EBIMBJCIFLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_EBIMBJCIFLH_OFFSET))(this);
	}

	::System::Boolean EMPHMNMDPNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_EMPHMNMDPNK_OFFSET))(this);
	}

	::System::Void AGNABJGDPON(::MoleMole::MonoDynamicObjectVoxel* GLJLBOKMFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_AGNABJGDPON_OFFSET))(this, GLJLBOKMFOJ);
	}

	::System::Void HILKBIFBAEC(::UnityEngine::Mesh* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_HILKBIFBAEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPBCKEFEADP_BBOMJDBNHIC_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_LJMIPGJJELP_OFFSET))(this);
	}

	::UnityEngine::Mesh* NNMLOACDCDF()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_NNMLOACDCDF_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* GKOCBBPAJLE()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_GKOCBBPAJLE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NHKHCNDKLED(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + EPBCKEFEADP_NHKHCNDKLED_OFFSET))(this, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTask NCPCEJIKBIP(::UnityEngine::Vector3Int CMFHBLMALBN, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + EPBCKEFEADP_NCPCEJIKBIP_OFFSET))(this, CMFHBLMALBN, OMMEALOOOOD);
	}

	::System::Void NOCDGOGMHEG(::EPBCKEFEADP_IJAPNDHPGGE* EMKHPKDBGFG)
	{
		return ((::System::Void(*)(::PVOID, ::EPBCKEFEADP_IJAPNDHPGGE*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_NOCDGOGMHEG_OFFSET))(this, EMKHPKDBGFG);
	}

	static ::MoleMole::Vector2Int LMCGJMFBOJP(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPBCKEFEADP_LMCGJMFBOJP_OFFSET))(HBJOLKHGGDD, HPMEONKHFGG);
	}

	static ::MoleMole::Vector2Int MCBBOBCLLEI(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPBCKEFEADP_MCBBOBCLLEI_OFFSET))(HBJOLKHGGDD, HPMEONKHFGG);
	}

	::System::Void GGEIIJFEFCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_GGEIIJFEFCB_OFFSET))(this);
	}

	::System::Boolean IKDGKNABGDI(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC, ::System::Byte& HELLOIIPKGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + EPBCKEFEADP_IKDGKNABGDI_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC, HELLOIIPKGF);
	}

	::System::Void CKIHJNOBDMF(::MoleMole::MonoDynamicObjectVoxel* GLJLBOKMFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_CKIHJNOBDMF_OFFSET))(this, GLJLBOKMFOJ);
	}

	::System::Void IOHKIDPDOOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_IOHKIDPDOOA_OFFSET))(this);
	}

	::System::Void AHECEDBBCCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_AHECEDBBCCI_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* JGJFJHDCEEJ()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_JGJFJHDCEEJ_OFFSET))(this);
	}

	::System::Void MPENJCNOCGA(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPBCKEFEADP_MPENJCNOCGA_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
	}

	::System::Void IPFLHFPECKE(::UnityEngine::ComputeBuffer* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_IPFLHFPECKE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KEPKGKMHBEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_KEPKGKMHBEP_OFFSET))(this);
	}

	::System::Void PHHPPFNBLJM(::UnityEngine::ComputeBuffer* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_PHHPPFNBLJM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKHBPJHGPLP(::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPBCKEFEADP_OKHBPJHGPLP_OFFSET))(this, DECIDLELLCP);
	}

	::Cysharp::Threading::Tasks::UniTask NLNGKBJOBJG(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + EPBCKEFEADP_NLNGKBJOBJG_OFFSET))(this, OMMEALOOOOD);
	}
};
