#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define EMKBEKCHMJK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13550CC0)
#define EMKBEKCHMJK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13550E30)
#define EMKBEKCHMJK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13550DA0)
#define EMKBEKCHMJK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13550C80)
#define EMKBEKCHMJK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13550D10)
#define EMKBEKCHMJK__CTOR_OFFSET UNITYSDK_OFFSET(0x13550D90)

inline static constexpr unsigned int EMKBEKCHMJK_TypeDefinitionIndex = 40923;

class EMKBEKCHMJK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x90; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKBEKCHMJK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKBEKCHMJK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKBEKCHMJK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKBEKCHMJK_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKBEKCHMJK_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::EMKBEKCHMJK* JFDOOELFAOA()
	{
		return ((::EMKBEKCHMJK*(*)())((::PBYTE)hIl2Cpp + EMKBEKCHMJK_JFDOOELFAOA_OFFSET))();
	}
};
