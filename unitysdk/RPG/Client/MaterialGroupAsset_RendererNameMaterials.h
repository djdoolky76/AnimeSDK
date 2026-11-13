#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D727B00)
#define RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D727A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialGroupAsset_RendererNameMaterials_TypeDefinitionIndex = 71804;

	class MaterialGroupAsset_RendererNameMaterials : public ::System::Object
	{
	public:
		::System::String* rendererName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_EMPTY_MATERIALS()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)UnitySDK::FromName("RPG.Client", "RendererNameMaterials")->GetStaticField(0x5F620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS_CCTOR_OFFSET))();
		}

	};
}
