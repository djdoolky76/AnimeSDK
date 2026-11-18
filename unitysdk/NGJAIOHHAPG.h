#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define NGJAIOHHAPG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1158B850)
#define NGJAIOHHAPG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1158B650)
#define NGJAIOHHAPG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1158BBE0)
#define NGJAIOHHAPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1158B9D0)

inline static constexpr unsigned int NGJAIOHHAPG_TypeDefinitionIndex = 58683;

class NGJAIOHHAPG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::MKBBPOFGLOF* DGLPCINAMAC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BNKAPKMKHBC; // 0x30
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJAIOHHAPG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJAIOHHAPG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NGJAIOHHAPG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJAIOHHAPG_GDEOPIBNOIN_OFFSET))(this);
	}
};
