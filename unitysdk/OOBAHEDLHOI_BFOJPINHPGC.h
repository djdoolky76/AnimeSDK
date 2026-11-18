#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_BFOJPINHPGC_BALCLCFPOBA_OFFSET UNITYSDK_OFFSET(0x15FF3E70)
#define OOBAHEDLHOI_BFOJPINHPGC_HBECLMDNEOG_OFFSET UNITYSDK_OFFSET(0x15FF3E80)
#define OOBAHEDLHOI_BFOJPINHPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF3E60)

inline static constexpr unsigned int OOBAHEDLHOI_BFOJPINHPGC_TypeDefinitionIndex = 75536;

class OOBAHEDLHOI_BFOJPINHPGC : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BFOJPINHPGC__CTOR_OFFSET))(this);
	}

	::System::Void BALCLCFPOBA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BFOJPINHPGC_BALCLCFPOBA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HBECLMDNEOG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BFOJPINHPGC_HBECLMDNEOG_OFFSET))(this, BHDNBGLCNOM);
	}
};
