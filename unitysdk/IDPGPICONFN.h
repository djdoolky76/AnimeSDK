#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define IDPGPICONFN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12EA5520)
#define IDPGPICONFN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12EA5330)
#define IDPGPICONFN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12EA5410)
#define IDPGPICONFN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12EA5490)
#define IDPGPICONFN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12EA52E0)
#define IDPGPICONFN__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EA5380)
#define IDPGPICONFN__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA5400)

inline static constexpr unsigned int IDPGPICONFN_TypeDefinitionIndex = 58726;

class IDPGPICONFN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC1; // 0x0
	::System::Int32 CFLPIBFIHFL; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDPGPICONFN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPGPICONFN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPGPICONFN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPGPICONFN_GETCLASSID_OFFSET))(this);
	}

	static ::IDPGPICONFN* JFDOOELFAOA()
	{
		return ((::IDPGPICONFN*(*)())((::PBYTE)hIl2Cpp + IDPGPICONFN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPGPICONFN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 HAHLGEFCFND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDPGPICONFN_CNHBDOMKKDE_OFFSET))(this, HAHLGEFCFND);
	}
};
