#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define AGBIMMDNEHF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x142101F0)
#define AGBIMMDNEHF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1420FF20)
#define AGBIMMDNEHF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14210940)
#define AGBIMMDNEHF__CTOR_OFFSET UNITYSDK_OFFSET(0x142106F0)

inline static constexpr unsigned int AGBIMMDNEHF_TypeDefinitionIndex = 85237;

class AGBIMMDNEHF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* DBPPKFJPMMM; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* HIDNGKAAPJO; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* JMHINFOGBCM; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* APLAIDGOEDO; // 0x40
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x48
	::MKBBPOFGLOF* LJAFHLPCMML; // 0x50
	::KCMIFNGABDC_1<::System::Int32>* BAJLKBKCJMP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBIMMDNEHF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBIMMDNEHF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AGBIMMDNEHF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBIMMDNEHF_GDEOPIBNOIN_OFFSET))(this);
	}
};
