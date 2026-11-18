#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKNFLPDIAGE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define IKNFLPDIAGE_NLDFNJGMPDH_JOCBOLDHLCI_OFFSET UNITYSDK_OFFSET(0x19880310)
#define IKNFLPDIAGE_NLDFNJGMPDH__CTOR_OFFSET UNITYSDK_OFFSET(0x19880300)

inline static constexpr unsigned int IKNFLPDIAGE_NLDFNJGMPDH_TypeDefinitionIndex = 81823;

class IKNFLPDIAGE_NLDFNJGMPDH : public ::System::Object
{
public:
	::IKNFLPDIAGE* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_NLDFNJGMPDH__CTOR_OFFSET))(this);
	}

	::System::Void JOCBOLDHLCI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_NLDFNJGMPDH_JOCBOLDHLCI_OFFSET))(this, GLAOEHCGCFO);
	}
};
