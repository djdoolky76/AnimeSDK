#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKKDCFLLIOF;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KADKBPPKGBP_DHHIBJGCDIF_OFFSET UNITYSDK_OFFSET(0x130A70C0)
#define KADKBPPKGBP_HPNBLJKDHKD_OFFSET UNITYSDK_OFFSET(0x130A7050)
#define KADKBPPKGBP_IBBOLBABGLP_OFFSET UNITYSDK_OFFSET(0x130A70B0)
#define KADKBPPKGBP_OCAMKENKAGC_OFFSET UNITYSDK_OFFSET(0x130A70A0)
#define KADKBPPKGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x130A6F20)

inline static constexpr unsigned int KADKBPPKGBP_TypeDefinitionIndex = 47684;

class KADKBPPKGBP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* OPMHHMMLPIB; // 0x10
	::MoleMole::Battle::Entity* CJLOCBJHFCG; // 0x18
	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* _KBDFKOEBBAL_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* _KHFPOHDJLLM_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* _DCFLHFOBNPG_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADKBPPKGBP__CTOR_OFFSET))(this);
	}

	::System::Void HPNBLJKDHKD(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KADKBPPKGBP_HPNBLJKDHKD_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* OCAMKENKAGC()
	{
		return ((::System::Collections::Generic::List_1<::IKKDCFLLIOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADKBPPKGBP_OCAMKENKAGC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* IBBOLBABGLP()
	{
		return ((::System::Collections::Generic::List_1<::IKKDCFLLIOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADKBPPKGBP_IBBOLBABGLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* DHHIBJGCDIF()
	{
		return ((::System::Collections::Generic::List_1<::IKKDCFLLIOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADKBPPKGBP_DHHIBJGCDIF_OFFSET))(this);
	}
};
