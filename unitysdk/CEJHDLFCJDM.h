#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CEJHDLFCJDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1881DD20)

inline static constexpr unsigned int CEJHDLFCJDM_TypeDefinitionIndex = 80050;

	class CEJHDLFCJDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Quaternion>* BDOIOLBHJIH; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* GOAJNDCKGCC; // 0x18
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x20
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJHDLFCJDM_CTOR_OFFSET))(this);
		}

	};
