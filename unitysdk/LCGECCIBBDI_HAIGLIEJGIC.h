#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/JLOAOEKGLLC.h"
#include "unitysdk/LCGECCIBBDI_AIPNHAECBAG.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/BNLPFMIBLLJ.h"

class LCGECCIBBDI;
class NBGCHNKOMGP_FMAOOJBFJDJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }

#define LCGECCIBBDI_HAIGLIEJGIC_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x18654370)
#define LCGECCIBBDI_HAIGLIEJGIC_AKIKCLFCFMG_OFFSET UNITYSDK_OFFSET(0x18654290)
#define LCGECCIBBDI_HAIGLIEJGIC_COAKDCLKLBF_OFFSET UNITYSDK_OFFSET(0x18655380)
#define LCGECCIBBDI_HAIGLIEJGIC_DNJHGLEPNMA_OFFSET UNITYSDK_OFFSET(0x18655160)
#define LCGECCIBBDI_HAIGLIEJGIC_FIHOHOMEDDO_OFFSET UNITYSDK_OFFSET(0x18654B50)
#define LCGECCIBBDI_HAIGLIEJGIC_LDPCBECGJHD_OFFSET UNITYSDK_OFFSET(0x186549B0)
#define LCGECCIBBDI_HAIGLIEJGIC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18654130)
#define LCGECCIBBDI_HAIGLIEJGIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18654EE0)
#define LCGECCIBBDI_HAIGLIEJGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18654E10)

inline static constexpr unsigned int LCGECCIBBDI_HAIGLIEJGIC_TypeDefinitionIndex = 56791;

class LCGECCIBBDI_HAIGLIEJGIC : public ::LCGECCIBBDI_AIPNHAECBAG
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_IHHIDOLPLKI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LCGECCIBBDI_HAIGLIEJGIC_TypeDefinitionIndex)->GetStaticField(0x52010);
	}
	::System::String* EAOKCHDHMDN; // 0x60
	::System::String* ABCELPHJBGP; // 0x68
	::NBGCHNKOMGP_FMAOOJBFJDJ* ANIAILHFBKD; // 0x70
	::UnityEngine::Animation* OCHFOHEPEAA; // 0x78
	::UnityEngine::Material* COHBPCGGCNL; // 0x80
	::System::String* ADNPINAALJJ; // 0x88
	::System::String* NNDJBJNBNNB; // 0x90
	::Foundation::Coroutine::CoroutineHandle ABPHOOGGPDG; // 0x98
	::System::Int32 KMFHKEBMGIE; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC__CCTOR_OFFSET))();
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void AKIKCLFCFMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_AKIKCLFCFMG_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::LCGECCIBBDI* IPMMCGDMODG, ::BNLPFMIBLLJ& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LCGECCIBBDI*, ::BNLPFMIBLLJ&))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_ABDLEONNPAJ_OFFSET))(this, IPMMCGDMODG, AAOCANGHBDG);
	}

	::System::Void FIHOHOMEDDO(::System::Int32 MJODFDBNJIP, ::System::Int32 DNFNKBNBJHM, ::JLOAOEKGLLC GHLHEOODJDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::JLOAOEKGLLC))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_FIHOHOMEDDO_OFFSET))(this, MJODFDBNJIP, DNFNKBNBJHM, GHLHEOODJDN);
	}

	::Foundation::AssetPath LDPCBECGJHD(::System::Int32 PKMFBJMJCOO, ::Share::EAvatarSkillType BBDHPBAPPPI)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_LDPCBECGJHD_OFFSET))(this, PKMFBJMJCOO, BBDHPBAPPPI);
	}

	::System::Void COAKDCLKLBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_COAKDCLKLBF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* DNJHGLEPNMA(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCGECCIBBDI_HAIGLIEJGIC_DNJHGLEPNMA_OFFSET))(this, MOBNMDEDJIP);
	}
};
