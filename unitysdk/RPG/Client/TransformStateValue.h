#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateValueEntry.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TRANSFORMSTATEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0xE311AF0)

namespace RPG::Client
{
	class TransformStateValue : public ::RPG::Client::StateValueEntry
	{
	public:
		::UnityEngine::Vector3 P; // 0x28
		::UnityEngine::Quaternion R; // 0x34
		::UnityEngine::Vector3 S; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMSTATEVALUE_CTOR_OFFSET))(this);
		}

	};
}
