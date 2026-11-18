#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class PFEOJDIJIBM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define PEJKELPDDLC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A8EC90)
#define PEJKELPDDLC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A8EA30)
#define PEJKELPDDLC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A8F4F0)
#define PEJKELPDDLC_LLAGCCIEAGM_OFFSET UNITYSDK_OFFSET(0x13A8F1D0)
#define PEJKELPDDLC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8F330)

inline static constexpr unsigned int PEJKELPDDLC_TypeDefinitionIndex = 64145;

class PEJKELPDDLC : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EFIJGFCFOJI; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJKELPDDLC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJKELPDDLC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PEJKELPDDLC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJKELPDDLC_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void LLAGCCIEAGM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::PFEOJDIJIBM* DACDAPIGBCB, ::System::String* GPCPNDDLFGH, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::PFEOJDIJIBM*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PEJKELPDDLC_LLAGCCIEAGM_OFFSET))(KECKGDFIALJ, DACDAPIGBCB, GPCPNDDLFGH, AELLPLBJELA);
	}
};
