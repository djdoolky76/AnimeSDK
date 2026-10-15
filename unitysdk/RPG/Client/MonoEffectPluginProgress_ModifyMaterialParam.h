#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_AJAKNGPDHEN_OFFSET UNITYSDK_OFFSET(0xD8070E0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_BICKNMHHGOC_OFFSET UNITYSDK_OFFSET(0xD806F20)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_CCTOR_OFFSET UNITYSDK_OFFSET(0xD807290)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD807280)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xD806D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_ModifyMaterialParam_TypeDefinitionIndex = 70098;

	class MonoEffectPluginProgress_ModifyMaterialParam : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* TargetRender; // 0x10
		::System::Int32 TargetMaterialIndex; // 0x18
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x1C
		::System::String* PropertyName; // 0x20
		::System::Single FloatDataOnBegin; // 0x28
		::System::Single FloatDataOnEnd; // 0x2C
		::UnityEngine::Color ColorDataOnBegin; // 0x30
		::UnityEngine::Color ColorDataOnEnd; // 0x40
		::UnityEngine::Vector4 VectorDataOnBegin; // 0x50
		::UnityEngine::Vector4 VectorDataOnEnd; // 0x60
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_s_PropertyIDCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "ModifyMaterialParam")->GetStaticField(0x64950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_CCTOR_OFFSET))();
		}

		::System::Void PKADDEPKJFN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_PKADDEPKJFN_OFFSET))(this, a1);
		}

		static ::System::Int32 AJAKNGPDHEN(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_AJAKNGPDHEN_OFFSET))(a1);
		}

		::System::Void BICKNMHHGOC(::UnityEngine::Material* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_BICKNMHHGOC_OFFSET))(this, a1, a2);
		}

	};
}
