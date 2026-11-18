#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KFHKJHHBADJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A2C5F40)
#define KFHKJHHBADJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A2C5E00)
#define KFHKJHHBADJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A2C61E0)
#define KFHKJHHBADJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C60E0)

inline static constexpr unsigned int KFHKJHHBADJ_TypeDefinitionIndex = 70224;

class KFHKJHHBADJ : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* HDFBONJIHCF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKJHHBADJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKJHHBADJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFHKJHHBADJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKJHHBADJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
