#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MADBGHENHAF;
namespace RPG::GameCore { class LevelMinimapVolume; }

#define RPG_CLIENT_MINIMAPINSPECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD6C6400)
#define RPG_CLIENT_MINIMAPINSPECTOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xD6C63E0)
#define RPG_CLIENT_MINIMAPINSPECTOR_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0xD6C63F0)

namespace RPG::Client
{
	class MinimapInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DrawGizmos; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LevelMinimapVolume* Data; // 0x20
		::MADBGHENHAF* _Handle_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPINSPECTOR_CTOR_OFFSET))(this);
		}

		::MADBGHENHAF* get_Handle()
		{
			return ((::MADBGHENHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPINSPECTOR_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::MADBGHENHAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MADBGHENHAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPINSPECTOR_SET_HANDLE_OFFSET))(this, a1);
		}

	};
}
