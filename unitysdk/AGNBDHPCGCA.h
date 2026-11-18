#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class DLIAPLNFAFD;

#define AGNBDHPCGCA_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x17CCA230)
#define AGNBDHPCGCA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17CC9FA0)
#define AGNBDHPCGCA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17CCA240)
#define AGNBDHPCGCA_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x17CCA3C0)
#define AGNBDHPCGCA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17CCA3D0)
#define AGNBDHPCGCA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17CCA070)
#define AGNBDHPCGCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CC9FF0)
#define AGNBDHPCGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCA0D0)

inline static constexpr unsigned int AGNBDHPCGCA_TypeDefinitionIndex = 65672;

class AGNBDHPCGCA : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20C; // 0x0
	::DLIAPLNFAFD* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGNBDHPCGCA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBDHPCGCA__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBDHPCGCA_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBDHPCGCA_ONCLEAN_OFFSET))(this);
	}

	::DLIAPLNFAFD* BLIOCCCNKDK()
	{
		return ((::DLIAPLNFAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBDHPCGCA_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::AGNBDHPCGCA* JFDOOELFAOA()
	{
		return ((::AGNBDHPCGCA*(*)())((::PBYTE)hIl2Cpp + AGNBDHPCGCA_JFDOOELFAOA_OFFSET))();
	}

	::System::Void JFNBOIBNHPA(::DLIAPLNFAFD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DLIAPLNFAFD*))((::PBYTE)hIl2Cpp + AGNBDHPCGCA_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBDHPCGCA_MEFBHFEOKGH_OFFSET))(this);
	}
};
