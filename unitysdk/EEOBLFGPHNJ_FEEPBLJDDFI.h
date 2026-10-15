#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEOBLFGPHNJ_FEEPBLJDDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A41390)

inline static constexpr unsigned int EEOBLFGPHNJ_FEEPBLJDDFI_TypeDefinitionIndex = 59759;

	class EEOBLFGPHNJ_FEEPBLJDDFI : public ::System::Object
	{
	public:
		::System::String* LLNDGMJEDGP; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* IAKFDDMNAAM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_FEEPBLJDDFI_CTOR_OFFSET))(this);
		}

	};
