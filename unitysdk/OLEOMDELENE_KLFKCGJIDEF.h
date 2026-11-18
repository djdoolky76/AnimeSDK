#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OLEOMDELENE_KLFKCGJIDEF_BPAENADFFBB_OFFSET UNITYSDK_OFFSET(0xE15FAD0)
#define OLEOMDELENE_KLFKCGJIDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xE15FAC0)

inline static constexpr unsigned int OLEOMDELENE_KLFKCGJIDEF_TypeDefinitionIndex = 61059;

class OLEOMDELENE_KLFKCGJIDEF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Boolean OEFELJAHKBN; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 OHPEAJJEAKP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_KLFKCGJIDEF__CTOR_OFFSET))(this);
	}

	::System::Void BPAENADFFBB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_KLFKCGJIDEF_BPAENADFFBB_OFFSET))(this, PIIPCLCCOIG);
	}
};
