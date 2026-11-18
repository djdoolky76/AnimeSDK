#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define GODIAIEIODH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A29A70)
#define GODIAIEIODH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A298C0)
#define GODIAIEIODH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A29D90)
#define GODIAIEIODH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A29C50)

inline static constexpr unsigned int GODIAIEIODH_TypeDefinitionIndex = 78485;

class GODIAIEIODH : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* HHMLLBAEDJF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODIAIEIODH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODIAIEIODH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GODIAIEIODH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODIAIEIODH_GDEOPIBNOIN_OFFSET))(this);
	}
};
