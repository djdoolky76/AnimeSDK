#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CDILMBABHHJ;
class NJDHJGDFLDI;
namespace MoleMole::Config { class ConfigDynamicValueString; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define IGLIDEHLEDJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141D6D20)
#define IGLIDEHLEDJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x141D6B70)
#define IGLIDEHLEDJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141D7700)
#define IGLIDEHLEDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x141D7550)

inline static constexpr unsigned int IGLIDEHLEDJ_TypeDefinitionIndex = 60208;

class IGLIDEHLEDJ : public ::MHMFINLCNFN
{
public:
	::CDILMBABHHJ* KDOIHCNOKIG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* CCOGEOPOOKN; // 0x30
	::MoleMole::Config::ConfigDynamicValueString* LLBOMPKGAIE; // 0x38
	::NJDHJGDFLDI* IDHECOGLAJJ; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* MFDCJJEPPII; // 0x48
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* JJLENAHFKOA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
