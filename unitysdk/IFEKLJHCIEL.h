#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class BEKLEIALMDF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFEKLJHCIEL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16571EC0)
#define IFEKLJHCIEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x786150)

inline static constexpr unsigned int IFEKLJHCIEL_TypeDefinitionIndex = 62200;

struct alignas(8) IFEKLJHCIEL
{
	::System::Collections::Generic::List_1<::BEKLEIALMDF*>* KJLNNHMGOPP; // 0x10
	::System::Collections::Generic::List_1<::BEKLEIALMDF*>* PBKBNAHKJEB; // 0x18
	::System::Object* EMIKCAHJLGB; // 0x20
	::System::Byte _padding0[0x8];
	::System::Object* EJCBEJMGFAJ; // 0x30

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKLJHCIEL_DISPOSE_OFFSET))(this);
	}

	/*
	static ::IFEKLJHCIEL COKNIICCODC()
	{
		return ((::IFEKLJHCIEL(*)())((::PBYTE)hIl2Cpp + IFEKLJHCIEL_COKNIICCODC_OFFSET))();
	}
	*/
};
