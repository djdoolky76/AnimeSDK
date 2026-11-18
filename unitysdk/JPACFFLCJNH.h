#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JPACFFLCJNH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19476460)
#define JPACFFLCJNH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x194762B0)
#define JPACFFLCJNH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x194769B0)
#define JPACFFLCJNH__CTOR_OFFSET UNITYSDK_OFFSET(0x19476870)

inline static constexpr unsigned int JPACFFLCJNH_TypeDefinitionIndex = 79409;

class JPACFFLCJNH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPACFFLCJNH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPACFFLCJNH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JPACFFLCJNH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPACFFLCJNH_GDEOPIBNOIN_OFFSET))(this);
	}
};
