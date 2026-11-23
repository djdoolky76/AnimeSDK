#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ED0063B399037EDB_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x3C61CB0)
#define ED0063B399037EDB_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3C61D30)

inline static constexpr unsigned int ED0063B399037EDB_TypeDefinitionIndex = 11639;

struct alignas(4) ED0063B399037EDB
{
	static ::System::Boolean* StaticGet_B1DDA4D5B87C1D80()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ED0063B399037EDB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean B24F6B941D9AA638; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 BAC3E2851AEFE18C; // 0x14

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED0063B399037EDB_E8AF1E0387A100FA_OFFSET))(this);
	}

	/*
	static ::ED0063B399037EDB BD9CD726F874B523()
	{
		return ((::ED0063B399037EDB(*)())((::PBYTE)hIl2Cpp + ED0063B399037EDB_BD9CD726F874B523_OFFSET))();
	}
	*/
};
