#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define LAHNNJLCKMJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17737B00)
#define LAHNNJLCKMJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17737900)
#define LAHNNJLCKMJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17737EC0)
#define LAHNNJLCKMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17737CB0)

inline static constexpr unsigned int LAHNNJLCKMJ_TypeDefinitionIndex = 48364;

class LAHNNJLCKMJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LHHMLKFJNED; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* BFHDIBMFKKJ; // 0x28
	::CPABOPKIGAL* LBJADMFHFCC; // 0x30
	::CPABOPKIGAL* PPJHNALBEJC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHNNJLCKMJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHNNJLCKMJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LAHNNJLCKMJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHNNJLCKMJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
