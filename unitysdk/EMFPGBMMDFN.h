#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFPGBMMDFN_AONIOOCODEN.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoWayPath; }
namespace MoleMole { class MonoWayPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define EMFPGBMMDFN_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1417D670)
#define EMFPGBMMDFN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1417D340)
#define EMFPGBMMDFN_GET_DEBUGPATHROOT_OFFSET UNITYSDK_OFFSET(0x1417D100)
#define EMFPGBMMDFN_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1417D0F0)
#define EMFPGBMMDFN_GPDACHOLDJP_OFFSET UNITYSDK_OFFSET(0x1417D5C0)
#define EMFPGBMMDFN_IGEOPFEDKBI_OFFSET UNITYSDK_OFFSET(0x1417D660)
#define EMFPGBMMDFN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1417D4B0)
#define EMFPGBMMDFN_JNCFEGNDFLD_OFFSET UNITYSDK_OFFSET(0x1417D0E0)
#define EMFPGBMMDFN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1417D5D0)
#define EMFPGBMMDFN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1417D000)
#define EMFPGBMMDFN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1417D390)
#define EMFPGBMMDFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1417D410)

inline static constexpr unsigned int EMFPGBMMDFN_TypeDefinitionIndex = 70905;

class EMFPGBMMDFN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::String* HPOJOFGKGDD; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x5D; // 0x0
	::System::String* _OBHKBAAOKIJ_k__BackingField; // 0x48
	::MoleMole::MonoWayPath* DDBEPJHDODH; // 0x50
	::MoleMole::MonoWayPoint* MGLPKJLKGIK; // 0x58
	::UnityEngine::Collider* IGHNFHEMLML; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EMNEBLDGADG; // 0x68
	::System::Single JBPCGHJMKKK; // 0x70
	::System::Single BILBJAAPCJH; // 0x74
	::System::Single OOLPNHFGFAK; // 0x78
	::System::Int32 GNAJIECIENJ; // 0x7C
	::System::Int32 JCMPPALNNKJ; // 0x80
	::System::Single GDFKLJGHLDK; // 0x84
	::System::Boolean NGMHKCIFNBA; // 0x88
	::System::Byte _padding0[0x3];
	::System::Single LFMIEOKJBPG; // 0x8C
	::System::Single IFAMODNOKOJ; // 0x90
	::System::Single CPMLKDGNLDP; // 0x94
	::System::Single PAIFFHMIFLJ; // 0x98
	::EMFPGBMMDFN_AONIOOCODEN DFNCMKEIAAL; // 0x9C
	::System::Single AKJEHNLINBJ; // 0xA0
	::System::Single PDJGCKMBNBM; // 0xA4
	::System::Single LLCGNFNGLEL; // 0xA8
	::UnityEngine::Vector3 FCONLIJOIFH; // 0xAC
	::System::Single HIMCMPAENCG; // 0xB8
	::System::Single PMICBPJAOBD; // 0xBC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMFPGBMMDFN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_ONCLEAN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JNCFEGNDFLD()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_JNCFEGNDFLD_OFFSET))(this);
	}

	::System::Int32 get_PathIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_GET_PATHINDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_DebugPathRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_GET_DEBUGPATHROOT_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_GETCLASSID_OFFSET))(this);
	}

	static ::EMFPGBMMDFN* JFDOOELFAOA()
	{
		return ((::EMFPGBMMDFN*(*)())((::PBYTE)hIl2Cpp + EMFPGBMMDFN_JFDOOELFAOA_OFFSET))();
	}

	::System::String* GPDACHOLDJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_GPDACHOLDJP_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void IGEOPFEDKBI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_IGEOPFEDKBI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::System::String* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_GALGFCPKMGC_OFFSET))(this, CJBJONJDOLI);
	}
};
