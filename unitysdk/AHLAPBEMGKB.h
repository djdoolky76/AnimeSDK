#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define AHLAPBEMGKB_BMCELIILBHG_OFFSET UNITYSDK_OFFSET(0x17CCE9F0)
#define AHLAPBEMGKB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17CCE8C0)
#define AHLAPBEMGKB_RESET_OFFSET UNITYSDK_OFFSET(0x17CCE9A0)
#define AHLAPBEMGKB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCEA40)

inline static constexpr unsigned int AHLAPBEMGKB_TypeDefinitionIndex = 60418;

class AHLAPBEMGKB : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* PDBMGIMMLGA; // 0x10
	::System::Boolean MEMEINPDGMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLAPBEMGKB__CTOR_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLAPBEMGKB_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLAPBEMGKB_RESET_OFFSET))(this);
	}

	::System::Void BMCELIILBHG(::System::Func_1<::System::Single>* FJDOCPKEACA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + AHLAPBEMGKB_BMCELIILBHG_OFFSET))(this, FJDOCPKEACA);
	}
};
