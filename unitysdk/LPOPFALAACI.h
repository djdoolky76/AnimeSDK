#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class NCHCBAFMFGM;

#define LPOPFALAACI_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x151B91E0)
#define LPOPFALAACI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x151B8FF0)
#define LPOPFALAACI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x151B9290)
#define LPOPFALAACI_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x151B9280)
#define LPOPFALAACI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x151B91F0)
#define LPOPFALAACI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x151B90C0)
#define LPOPFALAACI__CCTOR_OFFSET UNITYSDK_OFFSET(0x151B9040)
#define LPOPFALAACI__CTOR_OFFSET UNITYSDK_OFFSET(0x151B9120)

inline static constexpr unsigned int LPOPFALAACI_TypeDefinitionIndex = 52302;

class LPOPFALAACI : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x212; // 0x0
	::NCHCBAFMFGM* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPOPFALAACI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOPFALAACI__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOPFALAACI_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOPFALAACI_ONCLEAN_OFFSET))(this);
	}

	::NCHCBAFMFGM* BLIOCCCNKDK()
	{
		return ((::NCHCBAFMFGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOPFALAACI_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOPFALAACI_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::NCHCBAFMFGM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NCHCBAFMFGM*))((::PBYTE)hIl2Cpp + LPOPFALAACI_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::LPOPFALAACI* JFDOOELFAOA()
	{
		return ((::LPOPFALAACI*(*)())((::PBYTE)hIl2Cpp + LPOPFALAACI_JFDOOELFAOA_OFFSET))();
	}
};
