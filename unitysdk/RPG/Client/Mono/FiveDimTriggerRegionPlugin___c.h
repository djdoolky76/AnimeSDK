#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Mono { class FiveDimTriggerRegionPlugin; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD72D280)
#define RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD72D2C0)
#define RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__GET__ONTRANSFORMCHANGECLOSURE_B__5_0_OFFSET UNITYSDK_OFFSET(0xD72D2D0)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimTriggerRegionPlugin___c_TypeDefinitionIndex = 76028;

	class FiveDimTriggerRegionPlugin___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::Mono::FiveDimTriggerRegionPlugin*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::RPG::Client::Mono::FiveDimTriggerRegionPlugin*>**)UnitySDK::FromName("RPG.Client.Mono", "<>c")->GetStaticField(0x5A6F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Mono", "<>c")->GetStaticField(0x5A6F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__OnTransformChangeClosure_b__5_0(::RPG::Client::Mono::FiveDimTriggerRegionPlugin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Mono::FiveDimTriggerRegionPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__GET__ONTRANSFORMCHANGECLOSURE_B__5_0_OFFSET))(this, a1);
		}

	};
}
