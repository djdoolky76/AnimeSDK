#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19377570)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x193775A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C___CTOR_B__150_0_OFFSET UNITYSDK_OFFSET(0x193775B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase___c_TypeDefinitionIndex = 71903;

	class MonoEffectPluginCharaEffectBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A120);
		}

		static ::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>** StaticGet___9__150_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__150_0(::RPG::Client::MonoEffectPluginCharaEffectBase* a1, ::RPG::Client::MonoEffectPluginCharaEffectBase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C___CTOR_B__150_0_OFFSET))(this, a1, a2);
		}

	};
}
