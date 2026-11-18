#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CFKNHGNHKAH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18DCDC70)
#define CFKNHGNHKAH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18DCDA70)
#define CFKNHGNHKAH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18DCE030)
#define CFKNHGNHKAH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCDEB0)

inline static constexpr unsigned int CFKNHGNHKAH_TypeDefinitionIndex = 64771;

class CFKNHGNHKAH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* MGJDANALDEH; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKNHGNHKAH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKNHGNHKAH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CFKNHGNHKAH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKNHGNHKAH_GDEOPIBNOIN_OFFSET))(this);
	}
};
