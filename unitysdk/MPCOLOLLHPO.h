#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MPCOLOLLHPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F8D90)
#define MPCOLOLLHPO_GET_ID_OFFSET UNITYSDK_OFFSET(0xC2F8D40)
#define MPCOLOLLHPO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC2F8D60)
#define MPCOLOLLHPO_SET_ID_OFFSET UNITYSDK_OFFSET(0xC2F8D50)
#define MPCOLOLLHPO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC2F8D80)

inline static constexpr unsigned int MPCOLOLLHPO_TypeDefinitionIndex = 63550;

	class MPCOLOLLHPO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPCOLOLLHPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCOLOLLHPO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCOLOLLHPO_SET_ID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCOLOLLHPO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPCOLOLLHPO_SET_POSITION_OFFSET))(this, a1);
		}

	};
