#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class PMNKLBCPENN;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MBBAMNIDKDF_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x11F2ECA0)
#define MBBAMNIDKDF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F2EC10)
#define MBBAMNIDKDF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F2E950)
#define MBBAMNIDKDF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F2F2F0)
#define MBBAMNIDKDF__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2F120)

inline static constexpr unsigned int MBBAMNIDKDF_TypeDefinitionIndex = 83667;

class MBBAMNIDKDF : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* BGFKCLAMKHK; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::PMNKLBCPENN* HNNHIGLPJJO; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x40
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBAMNIDKDF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBAMNIDKDF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MBBAMNIDKDF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBAMNIDKDF_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MBBAMNIDKDF_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
