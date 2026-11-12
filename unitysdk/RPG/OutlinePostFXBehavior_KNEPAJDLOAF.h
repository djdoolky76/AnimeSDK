#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_ALACOOLGLGO_OFFSET UNITYSDK_OFFSET(0xF344B70)
#define RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_CTOR_OFFSET UNITYSDK_OFFSET(0xF3436D0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF344D50)
#define RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_GET_KEY_OFFSET UNITYSDK_OFFSET(0xF344980)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_KNEPAJDLOAF_TypeDefinitionIndex = 52802;

	class OutlinePostFXBehavior_KNEPAJDLOAF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* OLHIEOOKKAE; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* AFJEOBJJKCB; // 0x18
		::UnityEngine::Material* KABHIMIFJMA; // 0x20
		::RPG::OutlinePostFXBehavior* MIPMCEJIAMC; // 0x28
		::UnityEngine::Material* GBPDAFLNJPN; // 0x30
		::System::Int32 MOLMALIOKHN; // 0x38
		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_GET_KEY_OFFSET))(this);
		}

		::System::Void ALACOOLGLGO(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a2, ::UnityEngine::Material* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_ALACOOLGLGO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_KNEPAJDLOAF_EXECUTE_OFFSET))(this, a1, a2);
		}

	};
}
