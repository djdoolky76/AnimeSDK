#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFFKMIDKOGN;
namespace System { class Action; }

#define FFFKMIDKOGN_ONFOJEEIJNB_KGABBGBMGKM_OFFSET UNITYSDK_OFFSET(0x16183DF0)
#define FFFKMIDKOGN_ONFOJEEIJNB__CTOR_OFFSET UNITYSDK_OFFSET(0x16183DE0)

inline static constexpr unsigned int FFFKMIDKOGN_ONFOJEEIJNB_TypeDefinitionIndex = 66168;

class FFFKMIDKOGN_ONFOJEEIJNB : public ::System::Object
{
public:
	::FFFKMIDKOGN* KLHPEBKNIFB; // 0x10
	::System::Action* MGAKJHJAGJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_ONFOJEEIJNB__CTOR_OFFSET))(this);
	}

	::System::Void KGABBGBMGKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_ONFOJEEIJNB_KGABBGBMGKM_OFFSET))(this);
	}
};
