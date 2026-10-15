#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKEKBEKPJA_LIBLAELCOLE;
class DCNCHPKGHHN;
class HBFPEEPJOPK;

#define AAKEKBEKPJA___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CD770)
#define AAKEKBEKPJA___C__DISPLAYCLASS8_0___SENDCHALLENGEENDMATCHASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB0CDA20)

inline static constexpr unsigned int AAKEKBEKPJA___c__DisplayClass8_0_TypeDefinitionIndex = 81856;

	class AAKEKBEKPJA___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::AAKEKBEKPJA_LIBLAELCOLE* requestData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKEKBEKPJA___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::HBFPEEPJOPK* __SendChallengeEndMatchAsync_b__0(::DCNCHPKGHHN* a1)
		{
			return ((::HBFPEEPJOPK*(*)(::PVOID, ::DCNCHPKGHHN*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA___C__DISPLAYCLASS8_0___SENDCHALLENGEENDMATCHASYNC_B__0_OFFSET))(this, a1);
		}

	};
