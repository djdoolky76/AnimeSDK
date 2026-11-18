#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoEffectPluginStateAnimation; }

#define PKGGGBCAGFD_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x11990F80)
#define PKGGGBCAGFD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11990D90)
#define PKGGGBCAGFD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11990E70)
#define PKGGGBCAGFD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11990EF0)
#define PKGGGBCAGFD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11990D40)
#define PKGGGBCAGFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x11990DE0)
#define PKGGGBCAGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x11990E60)

inline static constexpr unsigned int PKGGGBCAGFD_TypeDefinitionIndex = 77834;

class PKGGGBCAGFD : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC5; // 0x0
	::MoleMole::MonoEffectPluginStateAnimation* BLHNNKMAENO; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGGGBCAGFD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGGGBCAGFD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGGGBCAGFD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGGGBCAGFD_GETCLASSID_OFFSET))(this);
	}

	static ::PKGGGBCAGFD* JFDOOELFAOA()
	{
		return ((::PKGGGBCAGFD*(*)())((::PBYTE)hIl2Cpp + PKGGGBCAGFD_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGGGBCAGFD_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::MonoEffectPluginStateAnimation* CDBMHJGCCEB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginStateAnimation*))((::PBYTE)hIl2Cpp + PKGGGBCAGFD_GALGFCPKMGC_OFFSET))(this, CDBMHJGCCEB);
	}
};
