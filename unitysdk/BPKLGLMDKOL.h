#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class NBCIGBMMOPB;

#define BPKLGLMDKOL_AECEFPNBILA_OFFSET UNITYSDK_OFFSET(0x10E241C0)
#define BPKLGLMDKOL_FOMLLGHHCLD_OFFSET UNITYSDK_OFFSET(0x10E24050)
#define BPKLGLMDKOL_GEANIPONCOP_OFFSET UNITYSDK_OFFSET(0x10E24060)
#define BPKLGLMDKOL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10E23F70)
#define BPKLGLMDKOL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10E24140)
#define BPKLGLMDKOL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10E240B0)
#define BPKLGLMDKOL_MOJIFCMELGI_OFFSET UNITYSDK_OFFSET(0x10E23D60)
#define BPKLGLMDKOL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10E23D00)
#define BPKLGLMDKOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E23FC0)
#define BPKLGLMDKOL__CTOR_OFFSET UNITYSDK_OFFSET(0x10E24040)

inline static constexpr unsigned int BPKLGLMDKOL_TypeDefinitionIndex = 67018;

class BPKLGLMDKOL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x42; // 0x0
	::NBCIGBMMOPB* PJKAGOJIDPG; // 0x48
	::System::Boolean KNGHAMCPHFH; // 0x50
	::System::Byte _padding0[0x3];
	::System::Int32 PEPPGGMHNGL; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPKLGLMDKOL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_ONCLEAN_OFFSET))(this);
	}

	::System::Void MOJIFCMELGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_MOJIFCMELGI_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean FOMLLGHHCLD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_FOMLLGHHCLD_OFFSET))(this);
	}

	::System::Void GEANIPONCOP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_GEANIPONCOP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::BPKLGLMDKOL* JFDOOELFAOA()
	{
		return ((::BPKLGLMDKOL*(*)())((::PBYTE)hIl2Cpp + BPKLGLMDKOL_JFDOOELFAOA_OFFSET))();
	}

	::System::Void AECEFPNBILA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKLGLMDKOL_AECEFPNBILA_OFFSET))(this);
	}
};
