#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class GHLDLOHAOGM;
class MLFADFNMJFO;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFINKODPIED_FDOIAGFNDJJ_OFFSET UNITYSDK_OFFSET(0x16B6C960)
#define NFINKODPIED_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x16B6C4D0)
#define NFINKODPIED_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16B6C0C0)
#define NFINKODPIED_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16B6C450)
#define NFINKODPIED_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16B6C8D0)
#define NFINKODPIED_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16B6BB50)
#define NFINKODPIED__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B6C110)
#define NFINKODPIED__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6C210)

inline static constexpr unsigned int NFINKODPIED_TypeDefinitionIndex = 41011;

class NFINKODPIED : public ::MJHDNMKGLBJ
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::NFINKODPIED*>*>** StaticGet_PCFJMJJAJOB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::NFINKODPIED*>*>**)Il2CppClass::FromTypeDefinitionIndex(NFINKODPIED_TypeDefinitionIndex)->GetStaticField(0x3C8D0);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x34; // 0x0
	::MoleMole::EntityHandle ODPLFIDOMKB; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* FOHCCGBCCJK; // 0x58
	::MoleMole::Config::ContinueAttackDetect* DFMKILICPFB; // 0x60
	::System::Collections::Generic::List_1<::System::Tuple_3<::System::Int32, ::System::Int32, ::MoleMole::Config::AttackPatternBindAnimatorState*>*>* IAEHBJCLLOG; // 0x68
	::MLFADFNMJFO* LBPBFHIPIBF; // 0x70
	::MoleMole::EntityHandle KBKBHGFGGGP; // 0x78
	::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC; // 0x88
	::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* JFGCINDEHOP; // 0x90
	::System::Collections::Generic::HashSet_1<::System::Int32>* GKKLGKEBDLD; // 0x98
	::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::String*>* OOEALOBOKFO; // 0xA8
	::MoleMole::Battle::Entity* MFMPICKHAMJ; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* EKIJEKPGLNN; // 0xB8
	::System::Collections::Generic::List_1<::System::String*>* MDLPHFCEIPD; // 0xC0
	::NLNIIPDCABP* CAFLPHFDJBC; // 0xC8
	::System::UInt32 AOCOIDIMLIH; // 0xD0
	::System::Single MIALCGHPAAH; // 0xD4
	::System::Single CBBMJGOEMML; // 0xD8
	::UnityEngine::LayerMask FBNGKPGLADH; // 0xDC
	::System::Int32 DHJEJDHFJKP; // 0xE0
	::System::Single OFOEPCMKKCD; // 0xE4
	::System::Int32 KPFIDGLPNOL; // 0xE8
	::System::Boolean NJDEFLMJOIC; // 0xEC
	::System::Boolean FOJFMJKALKO; // 0xED
	::System::Boolean IFLDIKPIHOE; // 0xEE
	::System::Boolean ELLKCKNKCEF; // 0xEF
	::System::Boolean GEDIFGNCFBI; // 0xF0
	::System::Boolean GFNAMPAELCN; // 0xF1
	::System::Boolean MCDOCNLMPHG; // 0xF2
	::System::Boolean NPBJIFNEMHG; // 0xF3
	::System::Boolean FDANPDPJLHA; // 0xF4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFINKODPIED__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_GETCLASSID_OFFSET))(this);
	}

	static ::NFINKODPIED* JFDOOELFAOA()
	{
		return ((::NFINKODPIED*(*)())((::PBYTE)hIl2Cpp + NFINKODPIED_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ContinueAttackDetect* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* FMOOJGHKIBO, ::System::UInt32 MIIHECPCJAM, ::System::UInt32 PONMIAPMPML, ::System::Boolean NPBJIFNEMHG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MLFADFNMJFO*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NFINKODPIED_GALGFCPKMGC_OFFSET))(this, MFMPICKHAMJ, LBPBFHIPIBF, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, FMOOJGHKIBO, MIIHECPCJAM, PONMIAPMPML, NPBJIFNEMHG);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean FDOIAGFNDJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFINKODPIED_FDOIAGFNDJJ_OFFSET))(this);
	}
};
