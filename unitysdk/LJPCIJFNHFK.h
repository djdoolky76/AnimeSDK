#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class IKJAPCDJJDE;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define LJPCIJFNHFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D35C10)
#define LJPCIJFNHFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D35A10)
#define LJPCIJFNHFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D36130)
#define LJPCIJFNHFK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x12D360A0)
#define LJPCIJFNHFK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x12D358C0)
#define LJPCIJFNHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D35F20)

inline static constexpr unsigned int LJPCIJFNHFK_TypeDefinitionIndex = 71727;

class LJPCIJFNHFK : public ::CGJEMKCKIJG
{
public:
	static ::IKJAPCDJJDE** StaticGet_HNPFGEEBPLI()
	{
		return (::IKJAPCDJJDE**)Il2CppClass::FromTypeDefinitionIndex(LJPCIJFNHFK_TypeDefinitionIndex)->GetStaticField(0x46980);
	}
	::KCMIFNGABDC_1<::System::Single>* LIAAKPFOEAA; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPCIJFNHFK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LJPCIJFNHFK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPCIJFNHFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LJPCIJFNHFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LJPCIJFNHFK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPCIJFNHFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
