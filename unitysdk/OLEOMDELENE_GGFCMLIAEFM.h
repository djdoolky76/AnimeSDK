#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OLEOMDELENE_GGFCMLIAEFM_APLCEMPMANK_OFFSET UNITYSDK_OFFSET(0xE15F730)
#define OLEOMDELENE_GGFCMLIAEFM__CTOR_OFFSET UNITYSDK_OFFSET(0xE15F720)

inline static constexpr unsigned int OLEOMDELENE_GGFCMLIAEFM_TypeDefinitionIndex = 61062;

class OLEOMDELENE_GGFCMLIAEFM : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::UInt32 OHPEAJJEAKP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_GGFCMLIAEFM__CTOR_OFFSET))(this);
	}

	::System::Void APLCEMPMANK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_GGFCMLIAEFM_APLCEMPMANK_OFFSET))(this, PIIPCLCCOIG);
	}
};
