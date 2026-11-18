#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CDILMBABHHJ;
class NJDHJGDFLDI;
namespace MoleMole::Config { class ConfigDynamicValueInt; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LBEOLCDBNAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1793E9F0)
#define LBEOLCDBNAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1793E8A0)
#define LBEOLCDBNAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1793F2B0)
#define LBEOLCDBNAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1793F140)

inline static constexpr unsigned int LBEOLCDBNAJ_TypeDefinitionIndex = 58504;

class LBEOLCDBNAJ : public ::MHMFINLCNFN
{
public:
	::CDILMBABHHJ* KDOIHCNOKIG; // 0x28
	::MoleMole::Config::ConfigDynamicValueInt* CMHDGLMOCAO; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* CCOGEOPOOKN; // 0x38
	::NJDHJGDFLDI* IDHECOGLAJJ; // 0x40
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* JJLENAHFKOA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
