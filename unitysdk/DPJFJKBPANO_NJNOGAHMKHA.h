#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPJFJKBPANO;
namespace System { class Action; }

#define DPJFJKBPANO_NJNOGAHMKHA_PCAHLJDMGDF_OFFSET UNITYSDK_OFFSET(0x10F191F0)
#define DPJFJKBPANO_NJNOGAHMKHA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F191E0)

inline static constexpr unsigned int DPJFJKBPANO_NJNOGAHMKHA_TypeDefinitionIndex = 71051;

class DPJFJKBPANO_NJNOGAHMKHA : public ::System::Object
{
public:
	::DPJFJKBPANO* KLHPEBKNIFB; // 0x10
	::System::Action* LPGLIBKGGKG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFJKBPANO_NJNOGAHMKHA__CTOR_OFFSET))(this);
	}

	::System::Void PCAHLJDMGDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFJKBPANO_NJNOGAHMKHA_PCAHLJDMGDF_OFFSET))(this);
	}
};
