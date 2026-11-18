#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define POIOIDFPAGD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x194BBCE0)
#define POIOIDFPAGD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x194BBA20)
#define POIOIDFPAGD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x194BC220)
#define POIOIDFPAGD__CTOR_OFFSET UNITYSDK_OFFSET(0x194BBFA0)

inline static constexpr unsigned int POIOIDFPAGD_TypeDefinitionIndex = 62692;

class POIOIDFPAGD : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x18
	::MKBBPOFGLOF* MDBJDMPDGND; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BEHLEPIKENB; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* KELDKFMLMJK; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* NMPKJJIOFEM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOIDFPAGD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOIDFPAGD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + POIOIDFPAGD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOIDFPAGD_GDEOPIBNOIN_OFFSET))(this);
	}
};
