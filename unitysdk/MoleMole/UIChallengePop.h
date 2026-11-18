#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class BNLCDBNAFJC;
namespace System { class Action; }

#define MOLEMOLE_UICHALLENGEPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x189010C0)
#define MOLEMOLE_UICHALLENGEPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x18901120)
#define MOLEMOLE_UICHALLENGEPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x189010D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChallengePop_TypeDefinitionIndex = 79874;

	class UIChallengePop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* callback; // 0x28
		::BNLCDBNAFJC* template_; // 0x30

		::System::Void _ctor(::BNLCDBNAFJC* template_, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::BNLCDBNAFJC*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP__CTOR_OFFSET))(this, template_, callback);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP_ONPROCESS_OFFSET))(this);
		}
	};
}
