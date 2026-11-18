#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define FMDMAECAPIJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x179B5AF0)
#define FMDMAECAPIJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x179B5940)
#define FMDMAECAPIJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x179B5F10)
#define FMDMAECAPIJ_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x179B5E80)
#define FMDMAECAPIJ_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x179B57F0)
#define FMDMAECAPIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x179B5D40)

inline static constexpr unsigned int FMDMAECAPIJ_TypeDefinitionIndex = 88836;

class FMDMAECAPIJ : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CCOLDPKABNC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDMAECAPIJ__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + FMDMAECAPIJ_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDMAECAPIJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FMDMAECAPIJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + FMDMAECAPIJ_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDMAECAPIJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
