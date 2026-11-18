#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class FMHDMLBDIJC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKGAHGCJOAN_NJFKDLBPJGP_EDNGNMNFJLN_OFFSET UNITYSDK_OFFSET(0xFE1C540)
#define EKGAHGCJOAN_NJFKDLBPJGP_JIBCFHPJCNM_OFFSET UNITYSDK_OFFSET(0xFE1C430)
#define EKGAHGCJOAN_NJFKDLBPJGP__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1C420)

inline static constexpr unsigned int EKGAHGCJOAN_NJFKDLBPJGP_TypeDefinitionIndex = 51223;

class EKGAHGCJOAN_NJFKDLBPJGP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FMHDMLBDIJC*>* OIMEJFNHGNK; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x28
	::System::Int32 AMCNCFDFMEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_NJFKDLBPJGP__CTOR_OFFSET))(this);
	}

	::System::Void JIBCFHPJCNM(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_NJFKDLBPJGP_JIBCFHPJCNM_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void EDNGNMNFJLN(::FMHDMLBDIJC* DCCOLCMBNJO)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_NJFKDLBPJGP_EDNGNMNFJLN_OFFSET))(this, DCCOLCMBNJO);
	}
};
