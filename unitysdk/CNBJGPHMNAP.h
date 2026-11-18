#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOHPJCFDAOH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNBJGPHMNAP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1457CE80)
#define CNBJGPHMNAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x731390)

inline static constexpr unsigned int CNBJGPHMNAP_TypeDefinitionIndex = 50021;

struct alignas(8) CNBJGPHMNAP
{
	::System::Collections::Generic::List_1<::IOHPJCFDAOH>* KFMIGNMLAKM; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JFPKHDNCOGI; // 0x18
	::System::Object* PHHDHIBOCKA; // 0x20
	::System::Byte _padding0[0x8];
	::System::Object* OBCHACPDBPA; // 0x30

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBJGPHMNAP_DISPOSE_OFFSET))(this);
	}

	/*
	static ::CNBJGPHMNAP COKNIICCODC()
	{
		return ((::CNBJGPHMNAP(*)())((::PBYTE)hIl2Cpp + CNBJGPHMNAP_COKNIICCODC_OFFSET))();
	}
	*/
};
