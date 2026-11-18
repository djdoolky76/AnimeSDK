#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHMBKLJKIHD_OHJIOJFIGFF.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OJDOCJLOJGG;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class CapsuleCollider; }

#define EHMBKLJKIHD_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x172328B0)
#define EHMBKLJKIHD_GDNBGNGCHLC_OFFSET UNITYSDK_OFFSET(0x17232940)
#define EHMBKLJKIHD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17232530)
#define EHMBKLJKIHD_ILOCNLJIEJG_OFFSET UNITYSDK_OFFSET(0x17232610)
#define EHMBKLJKIHD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17232F50)
#define EHMBKLJKIHD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17232EC0)
#define EHMBKLJKIHD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17232380)
#define EHMBKLJKIHD_PACKMEIKGAI_OFFSET UNITYSDK_OFFSET(0x17232FD0)
#define EHMBKLJKIHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17232580)
#define EHMBKLJKIHD__CTOR_OFFSET UNITYSDK_OFFSET(0x17232600)

inline static constexpr unsigned int EHMBKLJKIHD_TypeDefinitionIndex = 53103;

class EHMBKLJKIHD : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB3; // 0x0
	::MoleMole::Battle::Entity* FEFFFPGCIIO; // 0x48
	::OJDOCJLOJGG* FGFBMOGLMDP; // 0x50
	::UnityEngine::CapsuleCollider* FEMPMKEFHJC; // 0x58
	::UnityEngine::Vector3 LDGNHBECHPH; // 0x60
	::EHMBKLJKIHD_OHJIOJFIGFF FNLGDLHAEGD; // 0x6C
	::System::Single NCHCNLIIOFO; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMBKLJKIHD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMBKLJKIHD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_GETCLASSID_OFFSET))(this);
	}

	::System::Void ILOCNLJIEJG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_ILOCNLJIEJG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Battle::Entity* AMNIHACKELI, ::OJDOCJLOJGG* OOMJGFAPKKD, ::UnityEngine::Vector3 BEPMDFENBMH, ::EHMBKLJKIHD_OHJIOJFIGFF OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::OJDOCJLOJGG*, ::UnityEngine::Vector3, ::EHMBKLJKIHD_OHJIOJFIGFF))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_GALGFCPKMGC_OFFSET))(this, AMNIHACKELI, OOMJGFAPKKD, BEPMDFENBMH, OBNIAHNMHPF);
	}

	::System::Void GDNBGNGCHLC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_GDNBGNGCHLC_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::EHMBKLJKIHD* JFDOOELFAOA()
	{
		return ((::EHMBKLJKIHD*(*)())((::PBYTE)hIl2Cpp + EHMBKLJKIHD_JFDOOELFAOA_OFFSET))();
	}

	::System::Void PACKMEIKGAI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EHMBKLJKIHD_PACKMEIKGAI_OFFSET))(this, KECKGDFIALJ);
	}
};
