#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DGMGEFLDEIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x7F76700)
#define DGMGEFLDEIH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7F765C0)
#define DGMGEFLDEIH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7F76860)
#define DGMGEFLDEIH__CTOR_OFFSET UNITYSDK_OFFSET(0x7F76760)

inline static constexpr unsigned int DGMGEFLDEIH_TypeDefinitionIndex = 72214;

class DGMGEFLDEIH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMGEFLDEIH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMGEFLDEIH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGMGEFLDEIH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMGEFLDEIH_GDEOPIBNOIN_OFFSET))(this);
	}
};
