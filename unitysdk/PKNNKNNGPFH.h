#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PKNNKNNGPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x206FE2F0)

inline static constexpr unsigned int PKNNKNNGPFH_TypeDefinitionIndex = 43924;

	class PKNNKNNGPFH : public ::System::Object
	{
	public:
		::System::Single GCJMFBKLGHI; // 0x10
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNNKNNGPFH_CTOR_OFFSET))(this);
		}

	};
