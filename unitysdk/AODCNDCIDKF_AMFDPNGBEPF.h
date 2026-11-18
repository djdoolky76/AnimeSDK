#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class AODCNDCIDKF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AODCNDCIDKF_AMFDPNGBEPF_PFAGDAOEPNE_OFFSET UNITYSDK_OFFSET(0x18542470)
#define AODCNDCIDKF_AMFDPNGBEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x18542460)

inline static constexpr unsigned int AODCNDCIDKF_AMFDPNGBEPF_TypeDefinitionIndex = 79611;

class AODCNDCIDKF_AMFDPNGBEPF : public ::System::Object
{
public:
	::System::Action_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* HGBOMLCCBEE; // 0x10
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x18
	::System::Action* CAAFEGLOALC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_AMFDPNGBEPF__CTOR_OFFSET))(this);
	}

	::System::Void PFAGDAOEPNE(::System::String* IICPDDLBHPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_AMFDPNGBEPF_PFAGDAOEPNE_OFFSET))(this, IICPDDLBHPH);
	}
};
