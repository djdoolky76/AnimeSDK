#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define EGBBNNMHIAP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFDDCF80)
#define EGBBNNMHIAP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFDDD0F0)
#define EGBBNNMHIAP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFDDD060)
#define EGBBNNMHIAP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFDDCF40)
#define EGBBNNMHIAP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDDCFD0)
#define EGBBNNMHIAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFDDD050)

inline static constexpr unsigned int EGBBNNMHIAP_TypeDefinitionIndex = 62180;

class EGBBNNMHIAP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xDC; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGBBNNMHIAP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBBNNMHIAP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBBNNMHIAP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBBNNMHIAP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBBNNMHIAP_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::EGBBNNMHIAP* JFDOOELFAOA()
	{
		return ((::EGBBNNMHIAP*(*)())((::PBYTE)hIl2Cpp + EGBBNNMHIAP_JFDOOELFAOA_OFFSET))();
	}
};
