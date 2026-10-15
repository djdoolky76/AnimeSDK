#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D1040)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_DDEOAHANPEN_OFFSET UNITYSDK_OFFSET(0xD7D07D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_EAJBKOBMAFL_OFFSET UNITYSDK_OFFSET(0xD7CEEB0)

namespace RPG::Client
{
	class MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x18
		::System::Single FloatData; // 0x1C
		::System::Single AdaptFloatData; // 0x20
		::UnityEngine::Vector4 VectorData; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_CTOR_OFFSET))(this);
		}

		::System::Void DDEOAHANPEN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_DDEOAHANPEN_OFFSET))(this, a1);
		}

		::System::Void EAJBKOBMAFL(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_EAJBKOBMAFL_OFFSET))(this, a1, a2);
		}

	};
}
