#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DDALEHLEJJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A36310)
#define DDALEHLEJJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A36160)
#define DDALEHLEJJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A36830)
#define DDALEHLEJJE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A366F0)

inline static constexpr unsigned int DDALEHLEJJE_TypeDefinitionIndex = 45999;

class DDALEHLEJJE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDALEHLEJJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDALEHLEJJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DDALEHLEJJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDALEHLEJJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
