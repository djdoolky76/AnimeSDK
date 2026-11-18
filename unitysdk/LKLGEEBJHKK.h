#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPAAFEPBELF.h"

#define LKLGEEBJHKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5EAF90)
#define LKLGEEBJHKK_JAFCBOHBCII_OFFSET UNITYSDK_OFFSET(0x1E5EA890)
#define LKLGEEBJHKK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E5C00)
#define LKLGEEBJHKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EA390)

inline static constexpr unsigned int LKLGEEBJHKK_TypeDefinitionIndex = 34113;

class LKLGEEBJHKK : public ::MPAAFEPBELF
{
public:
	::Il2CppArray<::System::Byte>* EJBNGAHODJJ; // 0x10
	::System::Int64 CLKBJFDGOLJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLGEEBJHKK__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int64 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + LKLGEEBJHKK__CTOR_1_OFFSET))(this, PMAMMGFJAJL, KMKBJKOEBMF);
	}

	::System::Int64 JAFCBOHBCII(::System::Int64 AKAGDEFAGJA, ::Il2CppArray<::System::Byte>* CIOANOMHBDG, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKLGEEBJHKK_JAFCBOHBCII_OFFSET))(this, AKAGDEFAGJA, CIOANOMHBDG, BOGPAHGJOJK, JHFKDGBCOBA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLGEEBJHKK_DISPOSE_OFFSET))(this);
	}
};
