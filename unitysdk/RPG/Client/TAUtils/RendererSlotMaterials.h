#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TAUtils { class RendererSlotMaterials; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AA6F0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5AA410)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5AA250)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5AA670)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_KPIMNCMHIFI_OFFSET UNITYSDK_OFFSET(0x1C5A9FF0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0x1C5AA1E0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterials_TypeDefinitionIndex = 75771;

	class RendererSlotMaterials : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* materials; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_CTOR_OFFSET))(this);
		}

		::System::Void KPIMNCMHIFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_KPIMNCMHIFI_OFFSET))(this);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_NLDLLPECLCH_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TAUtils::RendererSlotMaterials* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::RendererSlotMaterials*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_GETHASHCODE_OFFSET))(this);
		}

	};
}
