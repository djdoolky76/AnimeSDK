#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_PGBJOBLLAOP_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D3A60)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_PGBJOBLLAOP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xD5D4E80)

namespace RPG::Client
{
	class MaterialBlockEffectBase_PGBJOBLLAOP : public ::System::Object
	{
	public:
		::RPG::Client::RendererMaterialCache* KFEPMPHNMPG; // 0x10
		::UnityEngine::Renderer* NDACGJCNDFF; // 0x18
		::UnityEngine::Material* FNJBFPALOAO; // 0x20
		::UnityEngine::MaterialPropertyBlock* OOFKPGNKMJK; // 0x28
		::System::String* BOMIJODMJOE; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* BIEBFDCAFOP; // 0x38
		::System::Int32 MEOADCBLHLH; // 0x40
		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_PGBJOBLLAOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_PGBJOBLLAOP_HADOHLNHHGB_OFFSET))(this);
		}

	};
}
