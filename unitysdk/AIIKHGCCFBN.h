#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AIIKHGCCFBN_CLEAR_OFFSET UNITYSDK_OFFSET(0xEBA2060)
#define AIIKHGCCFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA20C0)

inline static constexpr unsigned int AIIKHGCCFBN_TypeDefinitionIndex = 53502;

	class AIIKHGCCFBN : public ::System::Object
	{
	public:
		::System::Single LJJPHJIOFJH; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIKHGCCFBN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIKHGCCFBN_CLEAR_OFFSET))(this);
		}

	};
