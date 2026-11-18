#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_FMNCDLPHGEP_DKKDHCJLMAE_OFFSET UNITYSDK_OFFSET(0x17D36350)
#define MJDCEGKHJEG_FMNCDLPHGEP_GDLPPCCKMJK_OFFSET UNITYSDK_OFFSET(0x17D36300)
#define MJDCEGKHJEG_FMNCDLPHGEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17D362F0)

inline static constexpr unsigned int MJDCEGKHJEG_FMNCDLPHGEP_TypeDefinitionIndex = 56438;

class MJDCEGKHJEG_FMNCDLPHGEP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18
	::MoleMole::ELocalPlayType MAOCFFFKJCF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FMNCDLPHGEP__CTOR_OFFSET))(this);
	}

	::System::Void GDLPPCCKMJK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FMNCDLPHGEP_GDLPPCCKMJK_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DKKDHCJLMAE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FMNCDLPHGEP_DKKDHCJLMAE_OFFSET))(this, GLAOEHCGCFO);
	}
};
