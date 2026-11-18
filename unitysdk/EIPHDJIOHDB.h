#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define EIPHDJIOHDB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1063ED70)
#define EIPHDJIOHDB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1063ECE0)
#define EIPHDJIOHDB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1063EF00)
#define EIPHDJIOHDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1063EE60)

inline static constexpr unsigned int EIPHDJIOHDB_TypeDefinitionIndex = 79217;

class EIPHDJIOHDB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPHDJIOHDB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPHDJIOHDB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EIPHDJIOHDB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPHDJIOHDB_GDEOPIBNOIN_OFFSET))(this);
	}
};
