#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"

class ENGKPGFGGLM;
class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define MLECCCNCGFM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1406BF20)
#define MLECCCNCGFM_CODOLCLLKBF_OFFSET UNITYSDK_OFFSET(0x1406C240)
#define MLECCCNCGFM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1406AAE0)
#define MLECCCNCGFM_GCGECAMLBPC_OFFSET UNITYSDK_OFFSET(0x1406BCA0)
#define MLECCCNCGFM_GHOFBGDALEO_OFFSET UNITYSDK_OFFSET(0x1406C1C0)
#define MLECCCNCGFM_KKNBECFMIBL_OFFSET UNITYSDK_OFFSET(0x1406B970)
#define MLECCCNCGFM_LFNAMFKAPBN_OFFSET UNITYSDK_OFFSET(0x1406BFB0)
#define MLECCCNCGFM_MHOKLCEMPMO_OFFSET UNITYSDK_OFFSET(0x1406BB30)
#define MLECCCNCGFM_MIIHHKMHGCN_1_OFFSET UNITYSDK_OFFSET(0x1406B810)
#define MLECCCNCGFM_MIIHHKMHGCN_OFFSET UNITYSDK_OFFSET(0x1406B570)
#define MLECCCNCGFM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1406B8E0)
#define MLECCCNCGFM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1406B2B0)
#define MLECCCNCGFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1406B550)
#define MLECCCNCGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1406B500)

inline static constexpr unsigned int MLECCCNCGFM_TypeDefinitionIndex = 41865;

class MLECCCNCGFM : public ::OAOOLPCNHKA
{
public:
	static ::UnityEngine::Vector3* StaticGet_ECGJKFIAKIP()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(MLECCCNCGFM_TypeDefinitionIndex)->GetStaticField(0xFD80);
	}
	::Nap::NapECS::EcsFilter* LHALDBONBNC; // 0x20
	::Nap::NapECS::EcsFilter* OGKOLKHEKLJ; // 0x28
	::Nap::NapECS::EcsFilter* NGDBEDKMECJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLECCCNCGFM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLECCCNCGFM__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MLECCCNCGFM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLECCCNCGFM_UPDATE_OFFSET))(this);
	}

	static ::UnityEngine::Bounds MIIHHKMHGCN(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::UnityEngine::Bounds(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MLECCCNCGFM_MIIHHKMHGCN_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MLECCCNCGFM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KKNBECFMIBL(::ENGKPGFGGLM* FHEJELHALJE, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLECCCNCGFM_KKNBECFMIBL_OFFSET))(this, FHEJELHALJE, KECKGDFIALJ);
	}

	static ::System::Void MHOKLCEMPMO(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MLECCCNCGFM_MHOKLCEMPMO_OFFSET))(HPADNAEINPK);
	}

	::System::Void GCGECAMLBPC(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MLECCCNCGFM_GCGECAMLBPC_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLECCCNCGFM_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void LFNAMFKAPBN(::System::UInt32 EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLECCCNCGFM_LFNAMFKAPBN_OFFSET))(this, EIFONLCJOPG);
	}

	static ::UnityEngine::Bounds MIIHHKMHGCN_1(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::UnityEngine::Bounds(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MLECCCNCGFM_MIIHHKMHGCN_1_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void GHOFBGDALEO(::System::UInt32 EIFONLCJOPG)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MLECCCNCGFM_GHOFBGDALEO_OFFSET))(EIFONLCJOPG);
	}

	static ::System::Void CODOLCLLKBF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLECCCNCGFM_CODOLCLLKBF_OFFSET))();
	}
};
