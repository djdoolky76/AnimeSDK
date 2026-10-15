#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AIIKHGCCFBN_CLEAR_OFFSET UNITYSDK_OFFSET(0xEBA7260)
#define AIIKHGCCFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA72C0)

inline static constexpr unsigned int AIIKHGCCFBN_TypeDefinitionIndex = 53502;

	class AIIKHGCCFBN : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::System::Single LJJPHJIOFJH; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIKHGCCFBN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIKHGCCFBN_CLEAR_OFFSET))(this);
		}

	};
