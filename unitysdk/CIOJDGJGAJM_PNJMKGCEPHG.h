#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimationV2Index; }
namespace System { class Action; }

#define CIOJDGJGAJM_PNJMKGCEPHG_EOPMKDLPGJI_OFFSET UNITYSDK_OFFSET(0x132634B0)
#define CIOJDGJGAJM_PNJMKGCEPHG__CTOR_OFFSET UNITYSDK_OFFSET(0x132634A0)

inline static constexpr unsigned int CIOJDGJGAJM_PNJMKGCEPHG_TypeDefinitionIndex = 80591;

class CIOJDGJGAJM_PNJMKGCEPHG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 JFONAFOLLKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_PNJMKGCEPHG__CTOR_OFFSET))(this);
	}

	::System::Void EOPMKDLPGJI(::MoleMole::Config::ConfigUIScriptableAnimationV2Index* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2Index*))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_PNJMKGCEPHG_EOPMKDLPGJI_OFFSET))(this, DFMKILICPFB);
	}
};
