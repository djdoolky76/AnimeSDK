#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADCHFCMOILL_EMJCPMNBLOE_OFFSET UNITYSDK_OFFSET(0x143447B0)
#define ADCHFCMOILL_LOIDBHKDEPO_OFFSET UNITYSDK_OFFSET(0x14344480)
#define ADCHFCMOILL_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x14344460)
#define ADCHFCMOILL_PAIPNCMNDBO_OFFSET UNITYSDK_OFFSET(0x14344220)
#define ADCHFCMOILL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x143444F0)
#define ADCHFCMOILL__CTOR_OFFSET UNITYSDK_OFFSET(0x143441A0)

inline static constexpr unsigned int ADCHFCMOILL_TypeDefinitionIndex = 80182;

class ADCHFCMOILL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GPNHEOMBEFO; // 0x10
	::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHFCMOILL__CTOR_OFFSET))(this);
	}

	::System::Void PAIPNCMNDBO(::System::Int32 AJJPHGLFOID, ::System::Action* EJGDHCIBCJH, ::System::Boolean EPGLPGPOOJN, ::System::Boolean OJNAILKJOHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ADCHFCMOILL_PAIPNCMNDBO_OFFSET))(this, AJJPHGLFOID, EJGDHCIBCJH, EPGLPGPOOJN, OJNAILKJOHD);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHFCMOILL_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Void LOIDBHKDEPO(::System::Boolean OJNAILKJOHD, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ADCHFCMOILL_LOIDBHKDEPO_OFFSET))(this, OJNAILKJOHD, EJGDHCIBCJH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHFCMOILL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void EMJCPMNBLOE(::System::Single PBCAAADNEPK, ::System::Action* DJKGKANHOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + ADCHFCMOILL_EMJCPMNBLOE_OFFSET))(this, PBCAAADNEPK, DJKGKANHOPG);
	}
};
