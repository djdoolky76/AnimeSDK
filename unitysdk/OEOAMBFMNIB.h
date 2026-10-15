#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEOAMBFMNIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95E640)

inline static constexpr unsigned int OEOAMBFMNIB_TypeDefinitionIndex = 43238;

	class OEOAMBFMNIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* OFHGFAJNCJE; // 0x10
		::UnityEngine::Vector3 CNCCBDOMOAO; // 0x18
		::System::Boolean ELFOPLGBFDK; // 0x24
		::System::Boolean LPCHCNJBNGD; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOAMBFMNIB_CTOR_OFFSET))(this);
		}

	};
