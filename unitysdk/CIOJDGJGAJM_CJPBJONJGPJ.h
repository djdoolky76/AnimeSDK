#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }
namespace System { class Action; }

#define CIOJDGJGAJM_CJPBJONJGPJ_JHNCFHJICDB_OFFSET UNITYSDK_OFFSET(0x147A2300)
#define CIOJDGJGAJM_CJPBJONJGPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147A22F0)

inline static constexpr unsigned int CIOJDGJGAJM_CJPBJONJGPJ_TypeDefinitionIndex = 80598;

class CIOJDGJGAJM_CJPBJONJGPJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 JFONAFOLLKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_CJPBJONJGPJ__CTOR_OFFSET))(this);
	}

	::System::Void JHNCFHJICDB(::MoleMole::Config::ConfigUIScriptableAnimSpecialNum* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_CJPBJONJGPJ_JHNCFHJICDB_OFFSET))(this, DFMKILICPFB);
	}
};
