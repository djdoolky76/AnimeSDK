#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define ALPCBLJMFHM_BNGEELEMLGD_LLOIFKCFPDO_OFFSET UNITYSDK_OFFSET(0x1648D410)
#define ALPCBLJMFHM_BNGEELEMLGD_OPDIHIKNAOA_OFFSET UNITYSDK_OFFSET(0x1648D400)
#define ALPCBLJMFHM_BNGEELEMLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1648D3F0)

inline static constexpr unsigned int ALPCBLJMFHM_BNGEELEMLGD_TypeDefinitionIndex = 73210;

class ALPCBLJMFHM_BNGEELEMLGD : public ::System::Object
{
public:
	::System::Action* AFKOOINGNAK; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_BNGEELEMLGD__CTOR_OFFSET))(this);
	}

	::System::Void OPDIHIKNAOA(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_BNGEELEMLGD_OPDIHIKNAOA_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void LLOIFKCFPDO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_BNGEELEMLGD_LLOIFKCFPDO_OFFSET))(this, GLAOEHCGCFO);
	}
};
