#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }

#define OLIJHLMMJJH_CTOR_OFFSET UNITYSDK_OFFSET(0x178AC7B0)
#define OLIJHLMMJJH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x178AC720)
#define OLIJHLMMJJH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x178AC770)

inline static constexpr unsigned int OLIJHLMMJJH_TypeDefinitionIndex = 73831;

	class OLIJHLMMJJH : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIJHLMMJJH_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIJHLMMJJH_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIJHLMMJJH_GET_TRANS_OFFSET))(this);
		}

	};
