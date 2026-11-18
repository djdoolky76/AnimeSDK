#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class AODCNDCIDKF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AODCNDCIDKF_OPEHOIKOJHK_FIFFDCGINAN_OFFSET UNITYSDK_OFFSET(0x17DE3FA0)
#define AODCNDCIDKF_OPEHOIKOJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE3F90)

inline static constexpr unsigned int AODCNDCIDKF_OPEHOIKOJHK_TypeDefinitionIndex = 79596;

class AODCNDCIDKF_OPEHOIKOJHK : public ::System::Object
{
public:
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18
	::System::Action_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* HGBOMLCCBEE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_OPEHOIKOJHK__CTOR_OFFSET))(this);
	}

	::System::Void FIFFDCGINAN(::System::String* IICPDDLBHPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_OPEHOIKOJHK_FIFFDCGINAN_OFFSET))(this, IICPDDLBHPH);
	}
};
