#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFFKMIDKOGN;
namespace System { class Action; }

#define FFFKMIDKOGN_EMOLDCDLDAB_MIDCPKBONBN_OFFSET UNITYSDK_OFFSET(0x191BD990)
#define FFFKMIDKOGN_EMOLDCDLDAB__CTOR_OFFSET UNITYSDK_OFFSET(0x191BD980)

inline static constexpr unsigned int FFFKMIDKOGN_EMOLDCDLDAB_TypeDefinitionIndex = 66169;

class FFFKMIDKOGN_EMOLDCDLDAB : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::FFFKMIDKOGN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_EMOLDCDLDAB__CTOR_OFFSET))(this);
	}

	::System::Void MIDCPKBONBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_EMOLDCDLDAB_MIDCPKBONBN_OFFSET))(this);
	}
};
