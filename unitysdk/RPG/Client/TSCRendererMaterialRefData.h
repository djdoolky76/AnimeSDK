#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_ABEEPLFANAF_OFFSET UNITYSDK_OFFSET(0xE196B60)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xE196E70)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xE196ED0)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE196A80)

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRendererMaterialRefData_TypeDefinitionIndex = 70208;

	class TSCRendererMaterialRefData : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* TargetRenderer; // 0x10
		::System::Int32 TargetMaterailID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* MatPath; // 0x20
		::UnityEngine::Material* _MatRes; // 0x28
		::System::Void _ctor(::UnityEngine::MeshRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ABEEPLFANAF(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_ABEEPLFANAF_OFFSET))(this, a1, a2);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_AHGNCDFAFBM_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_ABKBOGIGAEH_OFFSET))(this);
		}

	};
}
