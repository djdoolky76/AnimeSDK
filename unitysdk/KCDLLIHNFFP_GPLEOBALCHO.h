#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCDLLIHNFFP;
namespace System { class Action; }

#define KCDLLIHNFFP_GPLEOBALCHO_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19555E40)
#define KCDLLIHNFFP_GPLEOBALCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x19555E30)

inline static constexpr unsigned int KCDLLIHNFFP_GPLEOBALCHO_TypeDefinitionIndex = 10633;

class KCDLLIHNFFP_GPLEOBALCHO : public ::System::Object
{
public:
	::KCDLLIHNFFP* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_GPLEOBALCHO__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_GPLEOBALCHO_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
