#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace System { class String; }

#define B6814E57EDD9B531_A521A7C1B51192A8_OFFSET UNITYSDK_OFFSET(0x2363E00)
#define B6814E57EDD9B531_A7CC0A126B127510_OFFSET UNITYSDK_OFFSET(0x2363F00)
#define B6814E57EDD9B531_B70FE2A130A9F4C0_OFFSET UNITYSDK_OFFSET(0x2363CD0)
#define B6814E57EDD9B531__CCTOR_OFFSET UNITYSDK_OFFSET(0x2363D20)
#define B6814E57EDD9B531__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6814E57EDD9B531_TypeDefinitionIndex = 3294;

class B6814E57EDD9B531 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_A677E18E08503956()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B6814E57EDD9B531_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B6814E57EDD9B531__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6814E57EDD9B531__CTOR_OFFSET))(this);
	}

	static ::System::String* A7CC0A126B127510()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + B6814E57EDD9B531_A7CC0A126B127510_OFFSET))();
	}

	static ::System::UInt64 B70FE2A130A9F4C0(::E865F6F8B8B44C1E F550A1708A99322E)
	{
		return ((::System::UInt64(*)(::E865F6F8B8B44C1E))((::PBYTE)hIl2Cpp + B6814E57EDD9B531_B70FE2A130A9F4C0_OFFSET))(F550A1708A99322E);
	}

	static ::System::String* A521A7C1B51192A8()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + B6814E57EDD9B531_A521A7C1B51192A8_OFFSET))();
	}
};
