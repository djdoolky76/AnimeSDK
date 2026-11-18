#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HNEGMFCHDHO;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define GLFODMABLMK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CD0D70)
#define GLFODMABLMK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CD0AB0)
#define GLFODMABLMK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CD1460)
#define GLFODMABLMK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16CD13D0)
#define GLFODMABLMK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16CD0960)
#define GLFODMABLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD11D0)

inline static constexpr unsigned int GLFODMABLMK_TypeDefinitionIndex = 39889;

class GLFODMABLMK : public ::CGJEMKCKIJG
{
public:
	static ::HNEGMFCHDHO** StaticGet_COKKEKBMMJH()
	{
		return (::HNEGMFCHDHO**)Il2CppClass::FromTypeDefinitionIndex(GLFODMABLMK_TypeDefinitionIndex)->GetStaticField(0x37900);
	}
	::KCMIFNGABDC_1<::System::Single>* OAPEOLIMDIM; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x20
	::KCMIFNGABDC_1<::System::Single>* GLEBMIOBENK; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x40
	::KCMIFNGABDC_1<::System::Single>* IPMPEEOAFMP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFODMABLMK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GLFODMABLMK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFODMABLMK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GLFODMABLMK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GLFODMABLMK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFODMABLMK_GDEOPIBNOIN_OFFSET))(this);
	}
};
