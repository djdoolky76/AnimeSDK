#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define FDNPBNHCION_AODDJHKPICI_OFFSET UNITYSDK_OFFSET(0xBB39530)
#define FDNPBNHCION_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB39170)
#define FDNPBNHCION_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB38F10)
#define FDNPBNHCION_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB39850)
#define FDNPBNHCION_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0xBB398E0)
#define FDNPBNHCION_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0xBB38DC0)
#define FDNPBNHCION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB39690)

inline static constexpr unsigned int FDNPBNHCION_TypeDefinitionIndex = 58042;

class FDNPBNHCION : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* DJFKBJJJFHJ; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EFIJGFCFOJI; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPBNHCION__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + FDNPBNHCION_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPBNHCION_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDNPBNHCION_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void AODDJHKPICI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA, ::System::Single NAIPHNDMNDI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FDNPBNHCION_AODDJHKPICI_OFFSET))(KECKGDFIALJ, AELLPLBJELA, NAIPHNDMNDI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPBNHCION_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + FDNPBNHCION_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
