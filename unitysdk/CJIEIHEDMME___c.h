#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CJIEIHEDMME___C_JDAKJCOKPOK_OFFSET UNITYSDK_OFFSET(0x1496B1B0)
#define CJIEIHEDMME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1496B160)
#define CJIEIHEDMME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1496B1A0)

inline static constexpr unsigned int CJIEIHEDMME___c_TypeDefinitionIndex = 59363;

class CJIEIHEDMME___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CJIEIHEDMME___c_TypeDefinitionIndex)->GetStaticField(0x31270);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJIEIHEDMME___c_TypeDefinitionIndex)->GetStaticField(0x31278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJIEIHEDMME___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIEIHEDMME___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JDAKJCOKPOK(::System::UInt32 EJCBEJMGFAJ, ::System::UInt32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CJIEIHEDMME___C_JDAKJCOKPOK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
