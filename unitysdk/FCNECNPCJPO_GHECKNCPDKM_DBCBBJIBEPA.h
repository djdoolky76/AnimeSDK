#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCNECNPCJPO_GHECKNCPDKM_DBCBBJIBEPA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E57080)

inline static constexpr unsigned int FCNECNPCJPO_GHECKNCPDKM_DBCBBJIBEPA_TypeDefinitionIndex = 53295;

class FCNECNPCJPO_GHECKNCPDKM_DBCBBJIBEPA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* PJFAAJNFGEO; // 0x10
	::System::UInt32 MGNMJMACKLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GHECKNCPDKM_DBCBBJIBEPA__CTOR_OFFSET))(this);
	}
};
