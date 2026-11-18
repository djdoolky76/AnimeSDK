#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EMFLNIBOOBO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1417CB80)
#define EMFLNIBOOBO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1417C9D0)
#define EMFLNIBOOBO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1417CF70)
#define EMFLNIBOOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1417CE30)

inline static constexpr unsigned int EMFLNIBOOBO_TypeDefinitionIndex = 51557;

class EMFLNIBOOBO : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* NKDAJLPHGAP; // 0x28
	::KCMIFNGABDC_1<::System::String*>* IGDPEAJMBMJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFLNIBOOBO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFLNIBOOBO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EMFLNIBOOBO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFLNIBOOBO_GDEOPIBNOIN_OFFSET))(this);
	}
};
