#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/LGPFGDFHIOM.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class ShaderPropertyProfile;
namespace RPG::Client { class PropertyOverrideValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE0AC4A0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE0AC460)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DFIODLGJDCH_1_OFFSET UNITYSDK_OFFSET(0xE0AB970)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DFIODLGJDCH_OFFSET UNITYSDK_OFFSET(0xE0AB910)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xE0ABAB0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xE0AB8F0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_ISLEAFPREFERRED_OFFSET UNITYSDK_OFFSET(0xE0AB900)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GOHELIAFIOH_OFFSET UNITYSDK_OFFSET(0xE0AB9D0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xE0ABB00)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_MKLPHAFFCHO_OFFSET UNITYSDK_OFFSET(0xE0AC3B0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_NGFADEFHPAH_OFFSET UNITYSDK_OFFSET(0xE0ABA40)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE0AC420)

namespace RPG::Client
{
	inline static constexpr unsigned int ShaderPropertyOverrideMonoPlugin_TypeDefinitionIndex = 71022;

	class ShaderPropertyOverrideMonoPlugin
	{
	public:
		::System::String* _instanceId; // 0x30
		::ShaderPropertyProfile* profile; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::PropertyOverrideValue*>* overrideValues; // 0x40
		::System::Boolean requireMaterialHasProperty; // 0x48
		::System::Boolean _leafPreferred; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* get_InstanceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Boolean get_IsLeafPreferred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_ISLEAFPREFERRED_OFFSET))(this);
		}

		static ::BMAGJGLPIIF DFIODLGJDCH(::UnityEngine::Color a1)
		{
			return ((::BMAGJGLPIIF(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DFIODLGJDCH_OFFSET))(a1);
		}

		static ::BMAGJGLPIIF DFIODLGJDCH_1(::UnityEngine::Vector4 a1)
		{
			return ((::BMAGJGLPIIF(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DFIODLGJDCH_1_OFFSET))(a1);
		}

		static ::UnityEngine::Color GOHELIAFIOH(::BMAGJGLPIIF a1)
		{
			return ((::UnityEngine::Color(*)(::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GOHELIAFIOH_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 NGFADEFHPAH(::BMAGJGLPIIF a1)
		{
			return ((::UnityEngine::Vector4(*)(::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_NGFADEFHPAH_OFFSET))(a1);
		}

		::System::Void Dump(::LGPFGDFHIOM a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::Void Load(::LGPFGDFHIOM a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void MKLPHAFFCHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_MKLPHAFFCHO_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DESPAWNED_OFFSET))(this);
		}

	};
}
