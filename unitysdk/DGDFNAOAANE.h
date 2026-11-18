#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class IKKDCFLLIOF;

#define DGDFNAOAANE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7F75F70)
#define DGDFNAOAANE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x7F76050)
#define DGDFNAOAANE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x7F760D0)
#define DGDFNAOAANE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7F75F30)
#define DGDFNAOAANE__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F75FC0)
#define DGDFNAOAANE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F76040)

inline static constexpr unsigned int DGDFNAOAANE_TypeDefinitionIndex = 66112;

class DGDFNAOAANE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x5; // 0x0
	::IKKDCFLLIOF* ABMHHIIEHKJ; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGDFNAOAANE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDFNAOAANE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDFNAOAANE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDFNAOAANE_GETCLASSID_OFFSET))(this);
	}

	static ::DGDFNAOAANE* JFDOOELFAOA()
	{
		return ((::DGDFNAOAANE*(*)())((::PBYTE)hIl2Cpp + DGDFNAOAANE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDFNAOAANE_MEFBHFEOKGH_OFFSET))(this);
	}
};
