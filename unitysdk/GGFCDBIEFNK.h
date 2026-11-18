#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GGFCDBIEFNK_AGNFDEHJBDP_OFFSET UNITYSDK_OFFSET(0x11DA90C0)
#define GGFCDBIEFNK_EABLLAAIKFP_OFFSET UNITYSDK_OFFSET(0x11DA8DE0)
#define GGFCDBIEFNK_GKOBICHKCAC_OFFSET UNITYSDK_OFFSET(0x11DA8FA0)
#define GGFCDBIEFNK_OPJJDLIGFHP_1_OFFSET UNITYSDK_OFFSET(0x11DA91C0)
#define GGFCDBIEFNK_OPJJDLIGFHP_OFFSET UNITYSDK_OFFSET(0x11DA8E20)
#define GGFCDBIEFNK__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA8DD0)

inline static constexpr unsigned int GGFCDBIEFNK_TypeDefinitionIndex = 47129;

class GGFCDBIEFNK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFCDBIEFNK__CTOR_OFFSET))(this);
	}

	::System::Int32 EABLLAAIKFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFCDBIEFNK_EABLLAAIKFP_OFFSET))(this);
	}

	::System::Void OPJJDLIGFHP(::Share::ENotificationBadgeType OBNIAHNMHPF, ::System::Func_1<::System::Int32>* FJDOCPKEACA)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GGFCDBIEFNK_OPJJDLIGFHP_OFFSET))(this, OBNIAHNMHPF, FJDOCPKEACA);
	}

	::System::Int32 GKOBICHKCAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFCDBIEFNK_GKOBICHKCAC_OFFSET))(this);
	}

	::System::Int32 AGNFDEHJBDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFCDBIEFNK_AGNFDEHJBDP_OFFSET))(this);
	}

	::System::Void OPJJDLIGFHP_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFCDBIEFNK_OPJJDLIGFHP_1_OFFSET))(this);
	}
};
