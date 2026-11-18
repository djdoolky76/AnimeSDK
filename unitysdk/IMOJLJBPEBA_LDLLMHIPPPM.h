#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class APFAOGMDCIH;
namespace System { class String; }

#define IMOJLJBPEBA_LDLLMHIPPPM_ODABPLMAIKP_OFFSET UNITYSDK_OFFSET(0x1FBDB740)
#define IMOJLJBPEBA_LDLLMHIPPPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDB730)

inline static constexpr unsigned int IMOJLJBPEBA_LDLLMHIPPPM_TypeDefinitionIndex = 29005;

class IMOJLJBPEBA_LDLLMHIPPPM : public ::System::Object
{
public:
	::APFAOGMDCIH* IJGDNGCAJGJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_LDLLMHIPPPM__CTOR_OFFSET))(this);
	}

	::System::Boolean ODABPLMAIKP(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::APFAOGMDCIH*> IJKOLMELBBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::APFAOGMDCIH*>))((::PBYTE)hIl2Cpp + IMOJLJBPEBA_LDLLMHIPPPM_ODABPLMAIKP_OFFSET))(this, IJKOLMELBBC);
	}
};
