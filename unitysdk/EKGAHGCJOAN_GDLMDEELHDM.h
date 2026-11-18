#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class FMHDMLBDIJC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKGAHGCJOAN_GDLMDEELHDM_BKLPHCNDEON_OFFSET UNITYSDK_OFFSET(0x169A5C90)
#define EKGAHGCJOAN_GDLMDEELHDM__CTOR_OFFSET UNITYSDK_OFFSET(0x169A5C80)

inline static constexpr unsigned int EKGAHGCJOAN_GDLMDEELHDM_TypeDefinitionIndex = 51239;

class EKGAHGCJOAN_GDLMDEELHDM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Collections::Generic::List_1<::FMHDMLBDIJC*>* AGNBNBOAANL; // 0x18
	::System::Collections::Generic::List_1<::FMHDMLBDIJC*>* FPEABINPPLB; // 0x20
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x28
	::System::Action* OLBAKFLBNIG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_GDLMDEELHDM__CTOR_OFFSET))(this);
	}

	::System::Void BKLPHCNDEON(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_GDLMDEELHDM_BKLPHCNDEON_OFFSET))(this, ABHBKFJKINO);
	}
};
