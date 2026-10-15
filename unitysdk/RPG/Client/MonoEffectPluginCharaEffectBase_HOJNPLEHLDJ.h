#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD7CC600)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7D12C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_IGPKOJNJDLL_OFFSET UNITYSDK_OFFSET(0xD7D11F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_OKHJEBHJFAB_OFFSET UNITYSDK_OFFSET(0xD7D1050)

namespace RPG::Client
{
	class MonoEffectPluginCharaEffectBase_HOJNPLEHLDJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DMNJNFCPGHM; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* HPLODFKEHED; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* CNMOOKIKPLF; // 0x20
		::System::String* OAKGHGGKALA; // 0x28
		::UnityEngine::MaterialPropertyBlock* OBINDGFMHIH; // 0x30
		::RPG::GameCore::CharacterReplaceMaterialRender* DLHNEGPIONF; // 0x38
		::System::UInt32 KJJNDIDPEMH; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* OKHJEBHJFAB(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_OKHJEBHJFAB_OFFSET))(this, a1);
		}

		::UnityEngine::Material* IGPKOJNJDLL(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_IGPKOJNJDLL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HOJNPLEHLDJ_DISPOSE_OFFSET))(this);
		}

	};
}
