#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKEDKJMGAII_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7ED5E0)
#define PKEDKJMGAII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ED580)

inline static constexpr unsigned int PKEDKJMGAII_TypeDefinitionIndex = 36288;

	class PKEDKJMGAII : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NNKOBJCMGFK; // 0x10
		::System::UInt32 ACINAKNBFOF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEDKJMGAII_CTOR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEDKJMGAII_CLONE_OFFSET))(this);
		}

	};
