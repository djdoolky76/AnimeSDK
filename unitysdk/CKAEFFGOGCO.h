#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKAEFFGOGCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4050)

inline static constexpr unsigned int CKAEFFGOGCO_TypeDefinitionIndex = 42962;

	class CKAEFFGOGCO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* EAAHFIJNEBB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAEFFGOGCO_CTOR_OFFSET))(this);
		}

	};
