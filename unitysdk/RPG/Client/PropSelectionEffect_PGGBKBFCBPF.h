#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_KJOFIEKBODK.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_PGGBKBFCBPF_CTOR_OFFSET UNITYSDK_OFFSET(0xDDED4D0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_PGGBKBFCBPF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDDF0390)
#define RPG_CLIENT_PROPSELECTIONEFFECT_PGGBKBFCBPF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDDF03E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_PGGBKBFCBPF_TypeDefinitionIndex = 60259;

	class PropSelectionEffect_PGGBKBFCBPF : public ::RPG::Client::PropSelectionEffect_KJOFIEKBODK
	{
	public:
		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_PGGBKBFCBPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_PGGBKBFCBPF_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_PGGBKBFCBPF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
}
