#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define HKMHNKBEELG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14705AE0)
#define HKMHNKBEELG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14705BC0)
#define HKMHNKBEELG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14705C40)
#define HKMHNKBEELG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14705AA0)
#define HKMHNKBEELG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14705B30)
#define HKMHNKBEELG__CTOR_OFFSET UNITYSDK_OFFSET(0x14705BB0)

inline static constexpr unsigned int HKMHNKBEELG_TypeDefinitionIndex = 67621;

class HKMHNKBEELG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x9D; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMHNKBEELG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMHNKBEELG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMHNKBEELG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMHNKBEELG_GETCLASSID_OFFSET))(this);
	}

	static ::HKMHNKBEELG* JFDOOELFAOA()
	{
		return ((::HKMHNKBEELG*(*)())((::PBYTE)hIl2Cpp + HKMHNKBEELG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMHNKBEELG_MEFBHFEOKGH_OFFSET))(this);
	}
};
