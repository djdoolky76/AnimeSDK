#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKEKBEKPJA_LIBLAELCOLE;
class EAMCJJHBKMK;
class HBFPEEPJOPK;

#define AAKEKBEKPJA___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CD760)
#define AAKEKBEKPJA___C__DISPLAYCLASS7_0___SENDNORMALENDMATCHASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB0CD980)

inline static constexpr unsigned int AAKEKBEKPJA___c__DisplayClass7_0_TypeDefinitionIndex = 81855;

	class AAKEKBEKPJA___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::AAKEKBEKPJA_LIBLAELCOLE* requestData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKEKBEKPJA___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::HBFPEEPJOPK* __SendNormalEndMatchAsync_b__0(::EAMCJJHBKMK* a1)
		{
			return ((::HBFPEEPJOPK*(*)(::PVOID, ::EAMCJJHBKMK*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA___C__DISPLAYCLASS7_0___SENDNORMALENDMATCHASYNC_B__0_OFFSET))(this, a1);
		}

	};
