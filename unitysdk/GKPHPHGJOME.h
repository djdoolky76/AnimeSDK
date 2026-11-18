#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GKPHPHGJOME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14CF8BD0)
#define GKPHPHGJOME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14CF8910)
#define GKPHPHGJOME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14CF91E0)
#define GKPHPHGJOME__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF8F20)

inline static constexpr unsigned int GKPHPHGJOME_TypeDefinitionIndex = 66356;

class GKPHPHGJOME : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x20
	::MKBBPOFGLOF* OJBMNLAJJLC; // 0x28
	::KCMIFNGABDC_1<::System::String*>* BDICGABONNI; // 0x30
	::KCMIFNGABDC_1<::System::String*>* ENMEIJPEPDB; // 0x38
	::CPABOPKIGAL* HMNPNEALHEH; // 0x40
	::MKBBPOFGLOF* BFCCCDEBOJB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHPHGJOME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHPHGJOME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GKPHPHGJOME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHPHGJOME_GDEOPIBNOIN_OFFSET))(this);
	}
};
