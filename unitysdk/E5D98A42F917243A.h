#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define E5D98A42F917243A_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x1E875C0)
#define E5D98A42F917243A_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x1E87640)
#define E5D98A42F917243A__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

inline static constexpr unsigned int E5D98A42F917243A_TypeDefinitionIndex = 9550;

struct alignas(8) E5D98A42F917243A
{
	::System::Collections::Generic::List_1<::System::UInt32>* FE6A1DE20B9FA3C0; // 0x10

	/*
	static ::E5D98A42F917243A BD9CD726F874B523()
	{
		return ((::E5D98A42F917243A(*)())((::PBYTE)hIl2Cpp + E5D98A42F917243A_BD9CD726F874B523_OFFSET))();
	}
	*/

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5D98A42F917243A_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* A982DB281D0A3FBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + E5D98A42F917243A__CTOR_OFFSET))(this, A982DB281D0A3FBE);
	}
};
