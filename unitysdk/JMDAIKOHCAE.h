#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JMDAIKOHCAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB258560)
#define JMDAIKOHCAE_GET_ID_OFFSET UNITYSDK_OFFSET(0xB258520)
#define JMDAIKOHCAE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB258530)
#define JMDAIKOHCAE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB258550)

inline static constexpr unsigned int JMDAIKOHCAE_TypeDefinitionIndex = 73340;

	class JMDAIKOHCAE : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMDAIKOHCAE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDAIKOHCAE_GET_ID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDAIKOHCAE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JMDAIKOHCAE_SET_POSITION_OFFSET))(this, a1);
		}

	};
