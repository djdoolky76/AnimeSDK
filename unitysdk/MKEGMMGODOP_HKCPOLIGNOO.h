#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKEGMMGODOP;
namespace System { class Action; }

#define MKEGMMGODOP_HKCPOLIGNOO_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1CCE0760)
#define MKEGMMGODOP_HKCPOLIGNOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE0750)

inline static constexpr unsigned int MKEGMMGODOP_HKCPOLIGNOO_TypeDefinitionIndex = 13935;

class MKEGMMGODOP_HKCPOLIGNOO : public ::System::Object
{
public:
	::MKEGMMGODOP* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGMMGODOP_HKCPOLIGNOO__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MKEGMMGODOP_HKCPOLIGNOO_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
