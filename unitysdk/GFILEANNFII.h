#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define GFILEANNFII_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14CE26A0)
#define GFILEANNFII_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14CE24F0)
#define GFILEANNFII_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14CE2BA0)
#define GFILEANNFII__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE2A60)

inline static constexpr unsigned int GFILEANNFII_TypeDefinitionIndex = 60851;

class GFILEANNFII : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* DBIMFCNHCCF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFILEANNFII__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFILEANNFII_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFILEANNFII_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFILEANNFII_GDEOPIBNOIN_OFFSET))(this);
	}
};
