#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPGBGLGJGCF_IJLKILALPMK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xE1291F0)
#define NPGBGLGJGCF_IJLKILALPMK__CTOR_OFFSET UNITYSDK_OFFSET(0xE129190)

inline static constexpr unsigned int NPGBGLGJGCF_IJLKILALPMK_TypeDefinitionIndex = 59325;

class NPGBGLGJGCF_IJLKILALPMK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* JBOEHOMJFKN; // 0x10
	::System::Boolean NNJLDLIHINN; // 0x18
	::System::Byte _padding0[0x3];
	::Foundation::Coroutine::CoroutineHandle NABDEKDFJOO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_IJLKILALPMK__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_IJLKILALPMK_NPOLNFDBOOD_OFFSET))(this);
	}
};
