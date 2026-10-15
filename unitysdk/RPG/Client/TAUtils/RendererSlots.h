#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_CTOR_OFFSET UNITYSDK_OFFSET(0xE194EA0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE194B80)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_OFFSET UNITYSDK_OFFSET(0xE1949D0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE194DB0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xE194450)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xE194970)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xE194630)

namespace RPG::Client::TAUtils
{
	class RendererSlots : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::Il2CppArray<::System::Int32>* indices; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_materials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_SET_MATERIALS_OFFSET))(this, a1);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_NLDLLPECLCH_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TAUtils::RendererSlots* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::RendererSlots*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_GETHASHCODE_OFFSET))(this);
		}

	};
}
