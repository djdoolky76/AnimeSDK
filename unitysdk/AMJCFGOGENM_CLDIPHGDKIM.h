#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMJCFGOGENM;
namespace System { class Action; }

#define AMJCFGOGENM_CLDIPHGDKIM_BCAJMALBALE_OFFSET UNITYSDK_OFFSET(0x12D08ED0)
#define AMJCFGOGENM_CLDIPHGDKIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D08EC0)

inline static constexpr unsigned int AMJCFGOGENM_CLDIPHGDKIM_TypeDefinitionIndex = 92767;

class AMJCFGOGENM_CLDIPHGDKIM : public ::System::Object
{
public:
	::AMJCFGOGENM* KLHPEBKNIFB; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18
	::System::Int32 PKMFBJMJCOO; // 0x20
	::System::Int32 KAGKEDIGALF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_CLDIPHGDKIM__CTOR_OFFSET))(this);
	}

	::System::Void BCAJMALBALE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_CLDIPHGDKIM_BCAJMALBALE_OFFSET))(this);
	}
};
