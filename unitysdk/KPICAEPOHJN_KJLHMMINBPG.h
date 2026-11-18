#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KPICAEPOHJN_DBKJDENPMFJ;
namespace System { class String; }

#define KPICAEPOHJN_KJLHMMINBPG_ENINBGMEEFG_OFFSET UNITYSDK_OFFSET(0x17923150)
#define KPICAEPOHJN_KJLHMMINBPG_JNDHHKKPCBE_OFFSET UNITYSDK_OFFSET(0x17922F70)
#define KPICAEPOHJN_KJLHMMINBPG_KNIBHIOOJIC_OFFSET UNITYSDK_OFFSET(0x179229D0)
#define KPICAEPOHJN_KJLHMMINBPG_PPLILICKGDO_OFFSET UNITYSDK_OFFSET(0x17922BB0)
#define KPICAEPOHJN_KJLHMMINBPG__CTOR_OFFSET UNITYSDK_OFFSET(0x17921C00)

inline static constexpr unsigned int KPICAEPOHJN_KJLHMMINBPG_TypeDefinitionIndex = 49458;

class KPICAEPOHJN_KJLHMMINBPG : public ::System::Object
{
public:
	::KPICAEPOHJN_DBKJDENPMFJ* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN_KJLHMMINBPG__CTOR_OFFSET))(this);
	}

	::System::String* KNIBHIOOJIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN_KJLHMMINBPG_KNIBHIOOJIC_OFFSET))(this);
	}

	::System::String* PPLILICKGDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN_KJLHMMINBPG_PPLILICKGDO_OFFSET))(this);
	}

	::System::String* JNDHHKKPCBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN_KJLHMMINBPG_JNDHHKKPCBE_OFFSET))(this);
	}

	::System::String* ENINBGMEEFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPICAEPOHJN_KJLHMMINBPG_ENINBGMEEFG_OFFSET))(this);
	}
};
