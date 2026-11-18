#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class AGJFDPBLDDF;
class GEIHCPAOKKK;
class GHLDLOHAOGM;
class MLFADFNMJFO;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define OEEMDJPPNBM_FDOIAGFNDJJ_OFFSET UNITYSDK_OFFSET(0x10062170)
#define OEEMDJPPNBM_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x10062180)
#define OEEMDJPPNBM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10061EB0)
#define OEEMDJPPNBM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x100625C0)
#define OEEMDJPPNBM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10062640)
#define OEEMDJPPNBM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10061B20)
#define OEEMDJPPNBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10061F00)
#define OEEMDJPPNBM__CTOR_OFFSET UNITYSDK_OFFSET(0x10062000)

inline static constexpr unsigned int OEEMDJPPNBM_TypeDefinitionIndex = 83486;

class OEEMDJPPNBM : public ::MJHDNMKGLBJ
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::OEEMDJPPNBM*>*>** StaticGet_KPGPMBBMCBA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::OEEMDJPPNBM*>*>**)Il2CppClass::FromTypeDefinitionIndex(OEEMDJPPNBM_TypeDefinitionIndex)->GetStaticField(0x3CD30);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x7E; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* GKKLGKEBDLD; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*>* DIHKHLOEEMG; // 0x50
	::System::Action_1<::System::Int32>* ABOKHIAIJEM; // 0x58
	::AGJFDPBLDDF* PMJAOIHGFEK; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* HIDFNBDCELG; // 0x68
	::NLNIIPDCABP* GAPHDPEHFAO; // 0x70
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* KIFLHPLGNCF; // 0x78
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* IHEHPLAKCEM; // 0x80
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* GGBPKBEHOPJ; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* FOHCCGBCCJK; // 0x90
	::System::Collections::Generic::List_1<::System::String*>* MDLPHFCEIPD; // 0x98
	::Il2CppArray<::UnityEngine::RaycastHit>* HHPJFLIJFIJ; // 0xA0
	::MoleMole::Battle::Entity* MFMPICKHAMJ; // 0xA8
	::System::Collections::Generic::List_1<::System::Tuple_3<::System::Int32, ::System::Int32, ::MoleMole::Config::AttackPatternBindAnimatorState*>*>* IAEHBJCLLOG; // 0xB0
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0xB8
	::System::Action* PIOPBCMPANK; // 0xC0
	::MLFADFNMJFO* LBPBFHIPIBF; // 0xC8
	::System::Action* EOAPJGOGHCB; // 0xD0
	::MoleMole::Config::ContinueAttackDetect* DFMKILICPFB; // 0xD8
	::System::String* EJODHANADLL; // 0xE0
	::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG; // 0xE8
	::UnityEngine::LayerMask FBNGKPGLADH; // 0xF0
	::System::UInt32 AOCOIDIMLIH; // 0xF4
	::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB; // 0xF8
	::System::Int32 FLNEHOICPGN; // 0xFC
	::System::Boolean FDANPDPJLHA; // 0x100
	::System::Boolean FOJFMJKALKO; // 0x101
	::System::Boolean GFNAMPAELCN; // 0x102
	::System::Byte _padding0[0x1];
	::UnityEngine::Bounds KCCBKLCLLIO; // 0x104
	::System::Int32 IJFBNCFPOKN; // 0x11C
	::System::Int32 KPFIDGLPNOL; // 0x120

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEMDJPPNBM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean FDOIAGFNDJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_FDOIAGFNDJJ_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::Config::ContinueAttackDetect* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* FMOOJGHKIBO, ::System::UInt32 MIIHECPCJAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MLFADFNMJFO*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_GALGFCPKMGC_OFFSET))(this, MFMPICKHAMJ, LBPBFHIPIBF, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, FMOOJGHKIBO, MIIHECPCJAM);
	}

	static ::OEEMDJPPNBM* JFDOOELFAOA()
	{
		return ((::OEEMDJPPNBM*(*)())((::PBYTE)hIl2Cpp + OEEMDJPPNBM_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMDJPPNBM_MEFBHFEOKGH_OFFSET))(this);
	}
};
