#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define LDKPANHJFBG___C_BPKBBJNOJHJ_OFFSET UNITYSDK_OFFSET(0x1683BF90)
#define LDKPANHJFBG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1683BF40)
#define LDKPANHJFBG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1683BF80)

inline static constexpr unsigned int LDKPANHJFBG___c_TypeDefinitionIndex = 77695;

class LDKPANHJFBG___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::UInt64>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(LDKPANHJFBG___c_TypeDefinitionIndex)->GetStaticField(0x446D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDKPANHJFBG___c_TypeDefinitionIndex)->GetStaticField(0x446D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDKPANHJFBG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKPANHJFBG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BPKBBJNOJHJ(::System::UInt64 KILPCOMOCMD, ::System::UInt64 BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + LDKPANHJFBG___C_BPKBBJNOJHJ_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
