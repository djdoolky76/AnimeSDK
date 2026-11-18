#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_JNPOONFNGAB_CCCIEJABHCB_OFFSET UNITYSDK_OFFSET(0x14DEAD60)
#define MJDCEGKHJEG_JNPOONFNGAB_FBLJBNKEGED_OFFSET UNITYSDK_OFFSET(0x14DEADB0)
#define MJDCEGKHJEG_JNPOONFNGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEAD50)

inline static constexpr unsigned int MJDCEGKHJEG_JNPOONFNGAB_TypeDefinitionIndex = 56440;

class MJDCEGKHJEG_JNPOONFNGAB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x10
	::System::Int32 CFCCOAMONFN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JNPOONFNGAB__CTOR_OFFSET))(this);
	}

	::System::Void CCCIEJABHCB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JNPOONFNGAB_CCCIEJABHCB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FBLJBNKEGED(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JNPOONFNGAB_FBLJBNKEGED_OFFSET))(this, PIIPCLCCOIG);
	}
};
