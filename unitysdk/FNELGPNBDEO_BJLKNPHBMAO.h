#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define FNELGPNBDEO_BJLKNPHBMAO_CAPEFNHNCGB_OFFSET UNITYSDK_OFFSET(0xBB6DFE0)
#define FNELGPNBDEO_BJLKNPHBMAO_LEPIALALENC_OFFSET UNITYSDK_OFFSET(0xBB6E030)
#define FNELGPNBDEO_BJLKNPHBMAO__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6DBA0)

inline static constexpr unsigned int FNELGPNBDEO_BJLKNPHBMAO_TypeDefinitionIndex = 39435;

class FNELGPNBDEO_BJLKNPHBMAO : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* PNMOJJBCPJH; // 0x10
	::System::Action* HGBOMLCCBEE; // 0x18
	::System::Int32 BPHGCFGJHMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_BJLKNPHBMAO__CTOR_OFFSET))(this);
	}

	::System::Void CAPEFNHNCGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_BJLKNPHBMAO_CAPEFNHNCGB_OFFSET))(this);
	}

	::System::Void LEPIALALENC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_BJLKNPHBMAO_LEPIALALENC_OFFSET))(this);
	}
};
