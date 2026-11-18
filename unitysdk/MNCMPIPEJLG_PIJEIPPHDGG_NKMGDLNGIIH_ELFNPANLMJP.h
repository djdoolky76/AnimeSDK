#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCABFILHMP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_ELFNPANLMJP_CDFBLEOFCHI_OFFSET UNITYSDK_OFFSET(0x1217AAE0)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_ELFNPANLMJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1217AAD0)

inline static constexpr unsigned int MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_ELFNPANLMJP_TypeDefinitionIndex = 46694;

class MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_ELFNPANLMJP : public ::System::Object
{
public:
	::System::Func_2<::LLCABFILHMP*, ::System::Boolean>* KANJODNFFOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_ELFNPANLMJP__CTOR_OFFSET))(this);
	}

	::System::Boolean CDFBLEOFCHI(::LLCABFILHMP* HMDKKCKDOFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LLCABFILHMP*))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH_ELFNPANLMJP_CDFBLEOFCHI_OFFSET))(this, HMDKKCKDOFP);
	}
};
