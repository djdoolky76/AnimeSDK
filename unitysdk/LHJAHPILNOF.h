#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class AIFIFKCEFBN;

#define LHJAHPILNOF_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x1518A420)
#define LHJAHPILNOF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1518A220)
#define LHJAHPILNOF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1518A430)
#define LHJAHPILNOF_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x1518A4B0)
#define LHJAHPILNOF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1518A390)
#define LHJAHPILNOF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1518A2F0)
#define LHJAHPILNOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1518A270)
#define LHJAHPILNOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1518A370)

inline static constexpr unsigned int LHJAHPILNOF_TypeDefinitionIndex = 52795;

class LHJAHPILNOF : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20F; // 0x0
	::AIFIFKCEFBN* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJAHPILNOF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJAHPILNOF__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJAHPILNOF_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJAHPILNOF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJAHPILNOF_MEFBHFEOKGH_OFFSET))(this);
	}

	::AIFIFKCEFBN* BLIOCCCNKDK()
	{
		return ((::AIFIFKCEFBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJAHPILNOF_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::LHJAHPILNOF* JFDOOELFAOA()
	{
		return ((::LHJAHPILNOF*(*)())((::PBYTE)hIl2Cpp + LHJAHPILNOF_JFDOOELFAOA_OFFSET))();
	}

	::System::Void JFNBOIBNHPA(::AIFIFKCEFBN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AIFIFKCEFBN*))((::PBYTE)hIl2Cpp + LHJAHPILNOF_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}
};
