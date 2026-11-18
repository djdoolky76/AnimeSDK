#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DPHPCHPDJPB_IEMJEPLPEED_CDOJKLNJCLG_OFFSET UNITYSDK_OFFSET(0x132AA090)
#define DPHPCHPDJPB_IEMJEPLPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x132AA080)

inline static constexpr unsigned int DPHPCHPDJPB_IEMJEPLPEED_TypeDefinitionIndex = 92828;

class DPHPCHPDJPB_IEMJEPLPEED : public ::System::Object
{
public:
	::System::Action* JKKJNJCHJKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_IEMJEPLPEED__CTOR_OFFSET))(this);
	}

	::System::Void CDOJKLNJCLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_IEMJEPLPEED_CDOJKLNJCLG_OFFSET))(this);
	}
};
