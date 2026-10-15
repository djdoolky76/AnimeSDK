#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TAUtils { class RendererSlotMaterialPaths; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_CTOR_OFFSET UNITYSDK_OFFSET(0xE189910)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE189630)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_OFFSET UNITYSDK_OFFSET(0xE189470)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE189890)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xE188EB0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_KFCHBNAJAJI_OFFSET UNITYSDK_OFFSET(0xE189420)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_KPIMNCMHIFI_OFFSET UNITYSDK_OFFSET(0xE189200)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xE189190)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterialPaths_TypeDefinitionIndex = 73650;

	class RendererSlotMaterialPaths : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* materialPaths; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* _materials; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void KPIMNCMHIFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_KPIMNCMHIFI_OFFSET))(this, a1);
		}

		::System::Void KFCHBNAJAJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_KFCHBNAJAJI_OFFSET))(this);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_NLDLLPECLCH_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TAUtils::RendererSlotMaterialPaths* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::RendererSlotMaterialPaths*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GETHASHCODE_OFFSET))(this);
		}

	};
}
