#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LKFBOILOCMN_MIMGOKIOADH_HIKKNIPNIPB_OFFSET UNITYSDK_OFFSET(0x1A60FB70)
#define LKFBOILOCMN_MIMGOKIOADH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60FB60)

inline static constexpr unsigned int LKFBOILOCMN_MIMGOKIOADH_TypeDefinitionIndex = 82628;

class LKFBOILOCMN_MIMGOKIOADH : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::Int32 FKAOLLMPLKI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MIMGOKIOADH__CTOR_OFFSET))(this);
	}

	::System::Void HIKKNIPNIPB(::System::Action* NNCFPPKALND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MIMGOKIOADH_HIKKNIPNIPB_OFFSET))(this, NNCFPPKALND);
	}
};
