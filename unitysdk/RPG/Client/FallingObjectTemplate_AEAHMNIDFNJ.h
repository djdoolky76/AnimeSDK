#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_AEAHMNIDFNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCE62B90)

namespace RPG::Client
{
	class FallingObjectTemplate_AEAHMNIDFNJ : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* HLMADHIMMMC; // 0x10
		::UnityEngine::Material* PPPHAPMOPLF; // 0x18
		::System::Int32 CGMKAMEDFNI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_AEAHMNIDFNJ_CTOR_OFFSET))(this);
		}

	};
}
