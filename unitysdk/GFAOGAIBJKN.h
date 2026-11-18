#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class EMFKIGEGILE;

#define GFAOGAIBJKN_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x11CA48C0)
#define GFAOGAIBJKN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11CA4560)
#define GFAOGAIBJKN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11CA4760)
#define GFAOGAIBJKN_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x11CA4750)
#define GFAOGAIBJKN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11CA4830)
#define GFAOGAIBJKN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11CA4630)
#define GFAOGAIBJKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CA45B0)
#define GFAOGAIBJKN__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA4690)

inline static constexpr unsigned int GFAOGAIBJKN_TypeDefinitionIndex = 73816;

class GFAOGAIBJKN : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x207; // 0x0
	::EMFKIGEGILE* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFAOGAIBJKN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAOGAIBJKN__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAOGAIBJKN_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAOGAIBJKN_ONCLEAN_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::EMFKIGEGILE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EMFKIGEGILE*))((::PBYTE)hIl2Cpp + GFAOGAIBJKN_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::GFAOGAIBJKN* JFDOOELFAOA()
	{
		return ((::GFAOGAIBJKN*(*)())((::PBYTE)hIl2Cpp + GFAOGAIBJKN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAOGAIBJKN_MEFBHFEOKGH_OFFSET))(this);
	}

	::EMFKIGEGILE* BLIOCCCNKDK()
	{
		return ((::EMFKIGEGILE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAOGAIBJKN_BLIOCCCNKDK_OFFSET))(this);
	}
};
