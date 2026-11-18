#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
class OPIBJJIMIFC;
class PBDFNCLAOLG;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MKFNBHDICNJ_EKIFKPGABBM_HOEFPPLOIKD_OFFSET UNITYSDK_OFFSET(0x11F56CB0)
#define MKFNBHDICNJ_EKIFKPGABBM__CTOR_OFFSET UNITYSDK_OFFSET(0x11F56CA0)

inline static constexpr unsigned int MKFNBHDICNJ_EKIFKPGABBM_TypeDefinitionIndex = 61397;

class MKFNBHDICNJ_EKIFKPGABBM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PBDFNCLAOLG*>* JHILIEPBPOG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Action_1<::DFDEIDBBGHG_1<::OPIBJJIMIFC*>*>* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_EKIFKPGABBM__CTOR_OFFSET))(this);
	}

	::System::Void HOEFPPLOIKD(::DFDEIDBBGHG_1<::OPIBJJIMIFC*>* PKIICICOJGJ)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::OPIBJJIMIFC*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_EKIFKPGABBM_HOEFPPLOIKD_OFFSET))(this, PKIICICOJGJ);
	}
};
