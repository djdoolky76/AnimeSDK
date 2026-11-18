#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEOIBJDOHOO;
namespace System { class Action; }

#define OEOIBJDOHOO_EEAIKBLLCFN_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19133DF0)
#define OEOIBJDOHOO_EEAIKBLLCFN__CTOR_OFFSET UNITYSDK_OFFSET(0x19133DE0)

inline static constexpr unsigned int OEOIBJDOHOO_EEAIKBLLCFN_TypeDefinitionIndex = 12869;

class OEOIBJDOHOO_EEAIKBLLCFN : public ::System::Object
{
public:
	::OEOIBJDOHOO* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_EEAIKBLLCFN__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_EEAIKBLLCFN_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
