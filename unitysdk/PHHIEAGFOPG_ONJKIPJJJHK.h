#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCKDKFDBGEN;
class PHHIEAGFOPG;

#define PHHIEAGFOPG_ONJKIPJJJHK_JACOMFGAFNG_OFFSET UNITYSDK_OFFSET(0x194A1C50)
#define PHHIEAGFOPG_ONJKIPJJJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x194A1C40)

inline static constexpr unsigned int PHHIEAGFOPG_ONJKIPJJJHK_TypeDefinitionIndex = 79644;

class PHHIEAGFOPG_ONJKIPJJJHK : public ::System::Object
{
public:
	::PHHIEAGFOPG* KLHPEBKNIFB; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHIEAGFOPG_ONJKIPJJJHK__CTOR_OFFSET))(this);
	}

	::System::Boolean JACOMFGAFNG(::BCKDKFDBGEN* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::BCKDKFDBGEN*))((::PBYTE)hIl2Cpp + PHHIEAGFOPG_ONJKIPJJJHK_JACOMFGAFNG_OFFSET))(this, LJBPECKCCEA);
	}
};
