#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DPHPCHPDJPB_FFDFBALKMEO_CDOJKLNJCLG_OFFSET UNITYSDK_OFFSET(0x13490740)
#define DPHPCHPDJPB_FFDFBALKMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1348CBC0)

inline static constexpr unsigned int DPHPCHPDJPB_FFDFBALKMEO_TypeDefinitionIndex = 92830;

class DPHPCHPDJPB_FFDFBALKMEO : public ::System::Object
{
public:
	::System::Action* JKKJNJCHJKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_FFDFBALKMEO__CTOR_OFFSET))(this);
	}

	::System::Void CDOJKLNJCLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_FFDFBALKMEO_CDOJKLNJCLG_OFFSET))(this);
	}
};
