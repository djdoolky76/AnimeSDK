#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAOOBMIAAFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB0E40)

inline static constexpr unsigned int KAOOBMIAAFL_TypeDefinitionIndex = 43804;

	class KAOOBMIAAFL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PBJGADFMHEH; // 0x10
		::System::UInt32 IMDPJFEGIDF; // 0x18
		::UnityEngine::Vector3 CFDHFPLIDNJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOBMIAAFL_CTOR_OFFSET))(this);
		}

	};
