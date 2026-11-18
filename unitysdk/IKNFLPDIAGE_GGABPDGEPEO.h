#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKNFLPDIAGE;
class OGNBMCFBNLJ;
class PFOOLDNOBJF;

#define IKNFLPDIAGE_GGABPDGEPEO_LKGFJPMEHBB_OFFSET UNITYSDK_OFFSET(0x1ACB79D0)
#define IKNFLPDIAGE_GGABPDGEPEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB79C0)

inline static constexpr unsigned int IKNFLPDIAGE_GGABPDGEPEO_TypeDefinitionIndex = 81822;

class IKNFLPDIAGE_GGABPDGEPEO : public ::System::Object
{
public:
	::IKNFLPDIAGE* KLHPEBKNIFB; // 0x10
	::OGNBMCFBNLJ* HMIACJDPHBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_GGABPDGEPEO__CTOR_OFFSET))(this);
	}

	::System::Void LKGFJPMEHBB(::System::Boolean MBNOJBFDGHD, ::PFOOLDNOBJF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PFOOLDNOBJF*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_GGABPDGEPEO_LKGFJPMEHBB_OFFSET))(this, MBNOJBFDGHD, GLAOEHCGCFO);
	}
};
