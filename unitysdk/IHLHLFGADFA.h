#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define IHLHLFGADFA_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x15C11310)
#define IHLHLFGADFA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15C10600)
#define IHLHLFGADFA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15C10400)
#define IHLHLFGADFA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15C113C0)
#define IHLHLFGADFA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C11190)

inline static constexpr unsigned int IHLHLFGADFA_TypeDefinitionIndex = 63033;

class IHLHLFGADFA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* BDEJMKEEIBL; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::MKBBPOFGLOF* KNOIKHNNCMI; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLHLFGADFA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLHLFGADFA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHLHLFGADFA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + IHLHLFGADFA_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLHLFGADFA_GDEOPIBNOIN_OFFSET))(this);
	}
};
