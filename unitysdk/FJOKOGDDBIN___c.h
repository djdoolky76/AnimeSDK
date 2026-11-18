#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNAMAFIPLGB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FJOKOGDDBIN___C_CHCMPDCIJBM_OFFSET UNITYSDK_OFFSET(0x179AF310)
#define FJOKOGDDBIN___C_GDDELCJENNK_OFFSET UNITYSDK_OFFSET(0x179AF2F0)
#define FJOKOGDDBIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179AF2A0)
#define FJOKOGDDBIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179AF2E0)

inline static constexpr unsigned int FJOKOGDDBIN___c_TypeDefinitionIndex = 85132;

class FJOKOGDDBIN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FJOKOGDDBIN___c_TypeDefinitionIndex)->GetStaticField(0x3DC60);
	}
	static ::System::Func_2<::NNAMAFIPLGB*, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::NNAMAFIPLGB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FJOKOGDDBIN___c_TypeDefinitionIndex)->GetStaticField(0x3DC68);
	}
	static ::System::Func_2<::NNAMAFIPLGB*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::NNAMAFIPLGB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FJOKOGDDBIN___c_TypeDefinitionIndex)->GetStaticField(0x3DC70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJOKOGDDBIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GDDELCJENNK(::NNAMAFIPLGB* NFFNEFLKPDG)
	{
		return ((::System::Int32(*)(::PVOID, ::NNAMAFIPLGB*))((::PBYTE)hIl2Cpp + FJOKOGDDBIN___C_GDDELCJENNK_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Int32 CHCMPDCIJBM(::NNAMAFIPLGB* NFFNEFLKPDG)
	{
		return ((::System::Int32(*)(::PVOID, ::NNAMAFIPLGB*))((::PBYTE)hIl2Cpp + FJOKOGDDBIN___C_CHCMPDCIJBM_OFFSET))(this, NFFNEFLKPDG);
	}
};
