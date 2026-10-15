#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNCMIAHKALA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBA64E0)
#define JNCMIAHKALA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA6530)

inline static constexpr unsigned int JNCMIAHKALA_TypeDefinitionIndex = 42072;

	class JNCMIAHKALA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IPKCFNKIDMB; // 0x10
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x18
		::System::Single GCJMFBKLGHI; // 0x24
		::System::Single ANIJFDBOIDP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCMIAHKALA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCMIAHKALA_CLEAR_OFFSET))(this);
		}

	};
