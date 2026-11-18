#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OEKHMAPHEJH_JIJCBEPADGE_OFFSET UNITYSDK_OFFSET(0x13A522B0)
#define OEKHMAPHEJH_PHGGMEADKAO_OFFSET UNITYSDK_OFFSET(0x13A522C0)
#define OEKHMAPHEJH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A522A0)

inline static constexpr unsigned int OEKHMAPHEJH_TypeDefinitionIndex = 73963;

class OEKHMAPHEJH : public ::System::Object
{
public:
	::System::Action* OPBEOJOGDOI; // 0x10
	::System::Int32 _COFAEJKNABD_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKHMAPHEJH__CTOR_OFFSET))(this);
	}

	::System::Void JIJCBEPADGE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEKHMAPHEJH_JIJCBEPADGE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PHGGMEADKAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKHMAPHEJH_PHGGMEADKAO_OFFSET))(this);
	}
};
