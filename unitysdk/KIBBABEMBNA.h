#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KIBBABEMBNA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16341A30)
#define KIBBABEMBNA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16341830)
#define KIBBABEMBNA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16342080)
#define KIBBABEMBNA__CTOR_OFFSET UNITYSDK_OFFSET(0x16341F00)

inline static constexpr unsigned int KIBBABEMBNA_TypeDefinitionIndex = 84284;

class KIBBABEMBNA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* HMNPNEALHEH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* IDANFFKDJFD; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBBABEMBNA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBBABEMBNA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KIBBABEMBNA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBBABEMBNA_GDEOPIBNOIN_OFFSET))(this);
	}
};
