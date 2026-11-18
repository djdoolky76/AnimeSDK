#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define NDMMOLNLKAA_AKEBHBAEIOF_DIFDMNMNKLN_OFFSET UNITYSDK_OFFSET(0x105AEE50)
#define NDMMOLNLKAA_AKEBHBAEIOF_DOOMFCHMNAD_OFFSET UNITYSDK_OFFSET(0x105AEE40)
#define NDMMOLNLKAA_AKEBHBAEIOF__CTOR_OFFSET UNITYSDK_OFFSET(0x105AEE30)

inline static constexpr unsigned int NDMMOLNLKAA_AKEBHBAEIOF_TypeDefinitionIndex = 50306;

class NDMMOLNLKAA_AKEBHBAEIOF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_AKEBHBAEIOF__CTOR_OFFSET))(this);
	}

	::System::Void DOOMFCHMNAD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_AKEBHBAEIOF_DOOMFCHMNAD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DIFDMNMNKLN(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_AKEBHBAEIOF_DIFDMNMNKLN_OFFSET))(this, GLAOEHCGCFO);
	}
};
