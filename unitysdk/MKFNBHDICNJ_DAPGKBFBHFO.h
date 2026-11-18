#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
class OPIBJJIMIFC;
class PBDFNCLAOLG;
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MKFNBHDICNJ_DAPGKBFBHFO_HOEFPPLOIKD_OFFSET UNITYSDK_OFFSET(0x14069610)
#define MKFNBHDICNJ_DAPGKBFBHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14069600)

inline static constexpr unsigned int MKFNBHDICNJ_DAPGKBFBHFO_TypeDefinitionIndex = 61356;

class MKFNBHDICNJ_DAPGKBFBHFO : public ::System::Object
{
public:
	::PBDFNCLAOLG* MCOHLHMKLIP; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Action_1<::OPIBJJIMIFC*>* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DAPGKBFBHFO__CTOR_OFFSET))(this);
	}

	::System::Void HOEFPPLOIKD(::DFDEIDBBGHG_1<::OPIBJJIMIFC*>* PKIICICOJGJ)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::OPIBJJIMIFC*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DAPGKBFBHFO_HOEFPPLOIKD_OFFSET))(this, PKIICICOJGJ);
	}
};
