#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class GGNKHJHIHGD;

#define OBBJPJMKAMG_BBAPCGLOGKD_OFFSET UNITYSDK_OFFSET(0x13A47370)
#define OBBJPJMKAMG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13A47290)
#define OBBJPJMKAMG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13A47440)
#define OBBJPJMKAMG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13A474C0)
#define OBBJPJMKAMG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13A47240)
#define OBBJPJMKAMG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A472E0)
#define OBBJPJMKAMG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A47360)

inline static constexpr unsigned int OBBJPJMKAMG_TypeDefinitionIndex = 69160;

class OBBJPJMKAMG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA7; // 0x0
	::GGNKHJHIHGD* KAPEAEGFMDJ; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBBJPJMKAMG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBJPJMKAMG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBJPJMKAMG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBJPJMKAMG_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 BBAPCGLOGKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBJPJMKAMG_BBAPCGLOGKD_OFFSET))(this);
	}

	static ::OBBJPJMKAMG* JFDOOELFAOA()
	{
		return ((::OBBJPJMKAMG*(*)())((::PBYTE)hIl2Cpp + OBBJPJMKAMG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBJPJMKAMG_MEFBHFEOKGH_OFFSET))(this);
	}
};
