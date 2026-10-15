#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_AJAKNGPDHEN_OFFSET UNITYSDK_OFFSET(0xD803450)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_CCTOR_OFFSET UNITYSDK_OFFSET(0xD803C30)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_CTOR_OFFSET UNITYSDK_OFFSET(0xD803B00)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD803950)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DMLLFLFEOGJ_OFFSET UNITYSDK_OFFSET(0xD803710)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_JNOJIEJEHAO_OFFSET UNITYSDK_OFFSET(0xD803990)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD803620)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTilingByTargetID_TypeDefinitionIndex = 70123;

	class MonoEffectPluginTilingByTargetID : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererList; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* TilingOffsetDataList; // 0x30
		::UnityEngine::Vector2 DefaultTiling; // 0x38
		::UnityEngine::Vector2 DefaultOffset; // 0x40
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginTilingByTargetID")->GetStaticField(0x68550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_CCTOR_OFFSET))();
		}

		static ::System::Int32 AJAKNGPDHEN(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_AJAKNGPDHEN_OFFSET))(a1);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DMLLFLFEOGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DMLLFLFEOGJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 JNOJIEJEHAO(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_JNOJIEJEHAO_OFFSET))(this, a1);
		}

	};
}
