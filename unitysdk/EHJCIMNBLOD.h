#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHJCIMNBLOD_CTOR_OFFSET UNITYSDK_OFFSET(0x154A1360)

inline static constexpr unsigned int EHJCIMNBLOD_TypeDefinitionIndex = 57592;

	class EHJCIMNBLOD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* DHIPEENLGNG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCIMNBLOD_CTOR_OFFSET))(this);
		}

	};
