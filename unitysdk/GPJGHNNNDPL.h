#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;

#define GPJGHNNNDPL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149F57D0)
#define GPJGHNNNDPL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149F5620)
#define GPJGHNNNDPL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149F5A10)
#define GPJGHNNNDPL__CTOR_OFFSET UNITYSDK_OFFSET(0x149F5880)

inline static constexpr unsigned int GPJGHNNNDPL_TypeDefinitionIndex = 76413;

class GPJGHNNNDPL : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x20
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x28
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJGHNNNDPL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJGHNNNDPL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GPJGHNNNDPL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJGHNNNDPL_GDEOPIBNOIN_OFFSET))(this);
	}
};
