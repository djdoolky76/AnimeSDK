#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshQueryFilter.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define IFAABDBIFDM_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x15EACB70)
#define IFAABDBIFDM_BBFBGJDKBLF_OFFSET UNITYSDK_OFFSET(0x15EAE100)
#define IFAABDBIFDM_BOJAGDPBGMD_OFFSET UNITYSDK_OFFSET(0x15EADB30)
#define IFAABDBIFDM_DGONCNOAKFG_OFFSET UNITYSDK_OFFSET(0x15EAF890)
#define IFAABDBIFDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EACBB0)
#define IFAABDBIFDM_DLABNAMLENL_1_OFFSET UNITYSDK_OFFSET(0x15EAD5E0)
#define IFAABDBIFDM_DLABNAMLENL_2_OFFSET UNITYSDK_OFFSET(0x15EAE1A0)
#define IFAABDBIFDM_DLABNAMLENL_3_OFFSET UNITYSDK_OFFSET(0x15EAD760)
#define IFAABDBIFDM_DLABNAMLENL_OFFSET UNITYSDK_OFFSET(0x15EACDE0)
#define IFAABDBIFDM_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x15EACC80)
#define IFAABDBIFDM_ENPOOHEEDDI_OFFSET UNITYSDK_OFFSET(0x15EAE910)
#define IFAABDBIFDM_GIILPDKKOBF_OFFSET UNITYSDK_OFFSET(0x15EAE500)
#define IFAABDBIFDM_GNHKMMCHDNP_OFFSET UNITYSDK_OFFSET(0x15EAEA10)
#define IFAABDBIFDM_GPLKJFBLFHC_OFFSET UNITYSDK_OFFSET(0x15EAD3C0)
#define IFAABDBIFDM_JGCAPEMHMEB_OFFSET UNITYSDK_OFFSET(0x15EAF6C0)
#define IFAABDBIFDM_MAPALAEJPMC_OFFSET UNITYSDK_OFFSET(0x15EAD4F0)
#define IFAABDBIFDM_MHBBPOEDKJO_OFFSET UNITYSDK_OFFSET(0x15EAD1B0)
#define IFAABDBIFDM_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15EACC00)
#define IFAABDBIFDM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EACD80)
#define IFAABDBIFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EACCC0)

inline static constexpr unsigned int IFAABDBIFDM_TypeDefinitionIndex = 70668;

class IFAABDBIFDM
{
public:
	static ::System::Int32* StaticGet_NJCACGEOCHB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IFAABDBIFDM_TypeDefinitionIndex)->GetStaticField(0xC9B0);
	}
	static ::System::Single* StaticGet_LLHGJIHGHGM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IFAABDBIFDM_TypeDefinitionIndex)->GetStaticField(0xC9B4);
	}
	static ::System::Int32* StaticGet_KKBDMNLPFDD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IFAABDBIFDM_TypeDefinitionIndex)->GetStaticField(0xC9B8);
	}
	// static const ::System::Single ICOIPKBDAKL; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* HPDPHAFGBMA; // 0x10
	::UnityEngine::AsyncOperation* BKGOMDBILLM; // 0x18
	::UnityEngine::AI::NavMeshData* EJENBNCOOGM; // 0x20
	::UnityEngine::AI::NavMeshPath* KCKFIPCMIMI; // 0x28
	::UnityEngine::AI::NavMeshSurface* GDHFBIGAIMK; // 0x30
	::UnityEngine::Transform* IAPKABMDJNF; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Terrain*>* CEEEMAMPNIJ; // 0x40
	::System::Boolean IAOJECCOMPN; // 0x48
	::System::Byte _padding0[0x3];
	::UnityEngine::AI::NavMeshDataInstance EKGOJEKLOLM; // 0x4C
	::UnityEngine::Vector3 KJCGKKLAAKM; // 0x50
	::UnityEngine::Bounds MLCKCEBBALA; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFAABDBIFDM__CCTOR_OFFSET))();
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM_ONCREATE_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean DLABNAMLENL(::UnityEngine::Vector3 LPPDJGEPCCJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& CJBJONJDOLI, ::System::Single AMDGNAMFBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + IFAABDBIFDM_DLABNAMLENL_OFFSET))(this, LPPDJGEPCCJ, OIKMICDBAPP, CJBJONJDOLI, AMDGNAMFBGF);
	}

	::UnityEngine::Bounds MHBBPOEDKJO()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM_MHBBPOEDKJO_OFFSET))(this);
	}

	::System::Single MAPALAEJPMC(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + IFAABDBIFDM_MAPALAEJPMC_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Boolean DLABNAMLENL_1(::UnityEngine::AI::NavMeshPath* OFHFMBFPJGD, ::UnityEngine::Vector3 LPPDJGEPCCJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& CJBJONJDOLI, ::Il2CppArray<::UnityEngine::Vector3>*& GHKFFCOHHKE, ::System::Single AMDGNAMFBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + IFAABDBIFDM_DLABNAMLENL_1_OFFSET))(this, OFHFMBFPJGD, LPPDJGEPCCJ, OIKMICDBAPP, CJBJONJDOLI, GHKFFCOHHKE, AMDGNAMFBGF);
	}

	::UnityEngine::Bounds BOJAGDPBGMD(::UnityEngine::Matrix4x4 KNNDDLMOKCG, ::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + IFAABDBIFDM_BOJAGDPBGMD_OFFSET))(this, KNNDDLMOKCG, GOFCNJELMHH);
	}

	::System::Boolean DLABNAMLENL_2(::UnityEngine::AI::NavMeshPath* OFHFMBFPJGD, ::UnityEngine::Vector3 LPPDJGEPCCJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Single AMDGNAMFBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IFAABDBIFDM_DLABNAMLENL_2_OFFSET))(this, OFHFMBFPJGD, LPPDJGEPCCJ, OIKMICDBAPP, AMDGNAMFBGF);
	}

	::System::Void GIILPDKKOBF(::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IFAABDBIFDM_GIILPDKKOBF_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Boolean ENPOOHEEDDI(::UnityEngine::Vector3 POKOCIIJGGK, ::UnityEngine::AI::NavMeshHit& FEFNENBAMKL, ::System::Single OGIHENKICBP, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IFAABDBIFDM_ENPOOHEEDDI_OFFSET))(this, POKOCIIJGGK, FEFNENBAMKL, OGIHENKICBP, LIMNECOMDOM);
	}

	::UnityEngine::Bounds GNHKMMCHDNP(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* KMIABEGAONP)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + IFAABDBIFDM_GNHKMMCHDNP_OFFSET))(this, KMIABEGAONP);
	}

	::System::Boolean JGCAPEMHMEB(::UnityEngine::Vector3 POKOCIIJGGK, ::UnityEngine::Vector3& PHOBBPCECJM, ::System::Single OGIHENKICBP, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IFAABDBIFDM_JGCAPEMHMEB_OFFSET))(this, POKOCIIJGGK, PHOBBPCECJM, OGIHENKICBP, LIMNECOMDOM);
	}

	::UnityEngine::Vector3 GPLKJFBLFHC(::UnityEngine::Vector3 HFMHOELKCAJ, ::UnityEngine::Vector3 OEGAEBOOAOI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFAABDBIFDM_GPLKJFBLFHC_OFFSET))(this, HFMHOELKCAJ, OEGAEBOOAOI);
	}

	::System::Boolean DLABNAMLENL_3(::UnityEngine::AI::NavMeshPath* OFHFMBFPJGD, ::UnityEngine::Vector3 LPPDJGEPCCJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::UnityEngine::AI::NavMeshQueryFilter DDKNKBHNIMC, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& CJBJONJDOLI, ::Il2CppArray<::UnityEngine::Vector3>*& GHKFFCOHHKE, ::System::Single AMDGNAMFBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshQueryFilter, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + IFAABDBIFDM_DLABNAMLENL_3_OFFSET))(this, OFHFMBFPJGD, LPPDJGEPCCJ, OIKMICDBAPP, DDKNKBHNIMC, CJBJONJDOLI, GHKFFCOHHKE, AMDGNAMFBGF);
	}

	::UnityEngine::Vector3 BBFBGJDKBLF(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFAABDBIFDM_BBFBGJDKBLF_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void DGONCNOAKFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAABDBIFDM_DGONCNOAKFG_OFFSET))(this);
	}
};
