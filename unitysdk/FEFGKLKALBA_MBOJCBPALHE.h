#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEFGKLKALBA;
namespace System { class Action; }

#define FEFGKLKALBA_MBOJCBPALHE_KGABBGBMGKM_OFFSET UNITYSDK_OFFSET(0x10F60500)
#define FEFGKLKALBA_MBOJCBPALHE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F604F0)

inline static constexpr unsigned int FEFGKLKALBA_MBOJCBPALHE_TypeDefinitionIndex = 63701;

class FEFGKLKALBA_MBOJCBPALHE : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::FEFGKLKALBA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_MBOJCBPALHE__CTOR_OFFSET))(this);
	}

	::System::Void KGABBGBMGKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_MBOJCBPALHE_KGABBGBMGKM_OFFSET))(this);
	}
};
