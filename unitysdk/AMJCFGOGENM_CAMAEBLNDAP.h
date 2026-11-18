#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMJCFGOGENM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMJCFGOGENM_CAMAEBLNDAP_EOOIACGDHJE_OFFSET UNITYSDK_OFFSET(0x1266B130)
#define AMJCFGOGENM_CAMAEBLNDAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1266B120)

inline static constexpr unsigned int AMJCFGOGENM_CAMAEBLNDAP_TypeDefinitionIndex = 92758;

class AMJCFGOGENM_CAMAEBLNDAP : public ::System::Object
{
public:
	::AMJCFGOGENM* KLHPEBKNIFB; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* MGMDLMBEDJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_CAMAEBLNDAP__CTOR_OFFSET))(this);
	}

	::System::Void EOOIACGDHJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_CAMAEBLNDAP_EOOIACGDHJE_OFFSET))(this);
	}
};
