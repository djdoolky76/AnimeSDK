#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LKFBOILOCMN_LAHBDCLOHBA_PICJPALPHFK_OFFSET UNITYSDK_OFFSET(0x1A60FB30)
#define LKFBOILOCMN_LAHBDCLOHBA_PPGLIPINKCD_OFFSET UNITYSDK_OFFSET(0x1A60FAD0)
#define LKFBOILOCMN_LAHBDCLOHBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60FAC0)

inline static constexpr unsigned int LKFBOILOCMN_LAHBDCLOHBA_TypeDefinitionIndex = 82634;

class LKFBOILOCMN_LAHBDCLOHBA : public ::System::Object
{
public:
	::System::Action* JEKACJFJLPO; // 0x10
	::System::Action* NLNILOMOMFD; // 0x18
	::System::Action_1<::System::Action*>* EPNFLCJMHKM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LAHBDCLOHBA__CTOR_OFFSET))(this);
	}

	::System::Void PPGLIPINKCD(::ALDOKCCIFNB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LAHBDCLOHBA_PPGLIPINKCD_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void PICJPALPHFK(::System::Action* CALJKDFFLMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LAHBDCLOHBA_PICJPALPHFK_OFFSET))(this, CALJKDFFLMH);
	}
};
