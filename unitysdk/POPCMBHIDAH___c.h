#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMEKJHCHJFC.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define POPCMBHIDAH___C_PPJMIBEDINJ_OFFSET UNITYSDK_OFFSET(0x1E24F0D0)
#define POPCMBHIDAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24F080)
#define POPCMBHIDAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24F0C0)

inline static constexpr unsigned int POPCMBHIDAH___c_TypeDefinitionIndex = 93888;

class POPCMBHIDAH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(POPCMBHIDAH___c_TypeDefinitionIndex)->GetStaticField(0x52680);
	}
	static ::System::Func_2<::BMEKJHCHJFC, ::System::Int32>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::BMEKJHCHJFC, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(POPCMBHIDAH___c_TypeDefinitionIndex)->GetStaticField(0x52688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POPCMBHIDAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCMBHIDAH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PPJMIBEDINJ(::BMEKJHCHJFC DGCGOJNDKPM)
	{
		return ((::System::Int32(*)(::PVOID, ::BMEKJHCHJFC))((::PBYTE)hIl2Cpp + POPCMBHIDAH___C_PPJMIBEDINJ_OFFSET))(this, DGCGOJNDKPM);
	}
};
