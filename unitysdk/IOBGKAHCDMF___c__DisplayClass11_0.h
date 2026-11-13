#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
class IOBGKAHCDMF;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define IOBGKAHCDMF___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FECE0)
#define IOBGKAHCDMF___C__DISPLAYCLASS11_0___ATTACHCOMPLETIONWRAPPER_B__0_OFFSET UNITYSDK_OFFSET(0x1A5FFA30)

inline static constexpr unsigned int IOBGKAHCDMF___c__DisplayClass11_0_TypeDefinitionIndex = 61897;

	class IOBGKAHCDMF___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::IOBGKAHCDMF* __4__this; // 0x10
		::RPG::Client::TriggerEffectParams* parameters; // 0x18
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* wrapper; // 0x20
		::System::UInt32 uniqueEffectId; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __AttachCompletionWrapper_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + IOBGKAHCDMF___C__DISPLAYCLASS11_0___ATTACHCOMPLETIONWRAPPER_B__0_OFFSET))(this, a1, a2);
		}

	};
