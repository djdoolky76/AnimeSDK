#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BDJAMDFCMEO_CFBBCOEGGHI_OFFSET UNITYSDK_OFFSET(0x18666CF0)
#define BDJAMDFCMEO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18666B80)
#define BDJAMDFCMEO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x186669D0)
#define BDJAMDFCMEO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x186671A0)
#define BDJAMDFCMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x18667060)

inline static constexpr unsigned int BDJAMDFCMEO_TypeDefinitionIndex = 74554;

class BDJAMDFCMEO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* CMDBFAEHLON; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJAMDFCMEO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJAMDFCMEO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BDJAMDFCMEO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJAMDFCMEO_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void CFBBCOEGGHI(::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB, ::System::String* BPIKEDKEBIC)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + BDJAMDFCMEO_CFBBCOEGGHI_OFFSET))(DBMEFDJPDCB, BPIKEDKEBIC);
	}
};
