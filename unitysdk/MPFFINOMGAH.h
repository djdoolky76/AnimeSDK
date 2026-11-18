#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoEffectPluginSyncEntityPos; }

#define MPFFINOMGAH_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x11A30720)
#define MPFFINOMGAH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11A305B0)
#define MPFFINOMGAH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11A30770)
#define MPFFINOMGAH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11A30690)
#define MPFFINOMGAH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11A30560)
#define MPFFINOMGAH__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A30600)
#define MPFFINOMGAH__CTOR_OFFSET UNITYSDK_OFFSET(0x11A30680)

inline static constexpr unsigned int MPFFINOMGAH_TypeDefinitionIndex = 51105;

class MPFFINOMGAH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC6; // 0x0
	::MoleMole::MonoEffectPluginSyncEntityPos* AKPIAMLBADL; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFFINOMGAH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFFINOMGAH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFFINOMGAH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFFINOMGAH_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFFINOMGAH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::MonoEffectPluginSyncEntityPos* CDBMHJGCCEB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginSyncEntityPos*))((::PBYTE)hIl2Cpp + MPFFINOMGAH_GALGFCPKMGC_OFFSET))(this, CDBMHJGCCEB);
	}

	static ::MPFFINOMGAH* JFDOOELFAOA()
	{
		return ((::MPFFINOMGAH*(*)())((::PBYTE)hIl2Cpp + MPFFINOMGAH_JFDOOELFAOA_OFFSET))();
	}
};
