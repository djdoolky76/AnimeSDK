#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CIKPNIAPMLM_ELPMKEGANAH_ICPBIKKEBGC_OFFSET UNITYSDK_OFFSET(0x1154E8D0)
#define CIKPNIAPMLM_ELPMKEGANAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1154E8C0)

inline static constexpr unsigned int CIKPNIAPMLM_ELPMKEGANAH_TypeDefinitionIndex = 73648;

class CIKPNIAPMLM_ELPMKEGANAH : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* HGBOMLCCBEE; // 0x10
	::System::Action* OLBIFDKONEK; // 0x18
	::System::Action_1<::System::String*>* CAAFEGLOALC; // 0x20
	::System::Int32 IJECEFLLHMJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKPNIAPMLM_ELPMKEGANAH__CTOR_OFFSET))(this);
	}

	::System::Void ICPBIKKEBGC(::System::String* FOKKDPIMHHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIKPNIAPMLM_ELPMKEGANAH_ICPBIKKEBGC_OFFSET))(this, FOKKDPIMHHD);
	}
};
