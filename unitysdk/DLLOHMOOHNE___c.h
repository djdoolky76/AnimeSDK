#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define DLLOHMOOHNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF8B27B0)
#define DLLOHMOOHNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B27F0)
#define DLLOHMOOHNE___C__TRIGGERBODYWAVEEFFECT_B__20_0_OFFSET UNITYSDK_OFFSET(0xF8B2800)

inline static constexpr unsigned int DLLOHMOOHNE___c_TypeDefinitionIndex = 57069;

	class DLLOHMOOHNE___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__20_0()
		{
			return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BDA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BDA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLLOHMOOHNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE___C_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerBodyWaveEffect_b__20_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + DLLOHMOOHNE___C__TRIGGERBODYWAVEEFFECT_B__20_0_OFFSET))(this, a1, a2);
		}

	};
