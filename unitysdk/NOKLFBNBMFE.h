#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NOKLFBNBMFE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10DAFC60)
#define NOKLFBNBMFE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10DAFA60)
#define NOKLFBNBMFE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10DB0080)
#define NOKLFBNBMFE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DAFEB0)

inline static constexpr unsigned int NOKLFBNBMFE_TypeDefinitionIndex = 70560;

class NOKLFBNBMFE : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x20
	::CPABOPKIGAL* DGLPCINAMAC; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKLFBNBMFE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKLFBNBMFE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NOKLFBNBMFE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKLFBNBMFE_GDEOPIBNOIN_OFFSET))(this);
	}
};
