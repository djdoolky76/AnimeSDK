#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DNBAKNAIECK___C_BHKIGPMHHPA_OFFSET UNITYSDK_OFFSET(0x12092B00)
#define DNBAKNAIECK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12092AB0)
#define DNBAKNAIECK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12092AF0)

inline static constexpr unsigned int DNBAKNAIECK___c_TypeDefinitionIndex = 69497;

class DNBAKNAIECK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DNBAKNAIECK___c_TypeDefinitionIndex)->GetStaticField(0x43200);
	}
	static ::System::Func_5<::BPHGNMNLLHF*, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32, ::System::Boolean>** StaticGet___9__36_0()
	{
		return (::System::Func_5<::BPHGNMNLLHF*, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DNBAKNAIECK___c_TypeDefinitionIndex)->GetStaticField(0x43208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNBAKNAIECK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBAKNAIECK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BHKIGPMHHPA(::BPHGNMNLLHF* LJBPECKCCEA, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* DJLOKMMLFJC, ::System::Int32 DJGGBGJMONJ, ::System::Int32 AOMCEAENIKO)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DNBAKNAIECK___C_BHKIGPMHHPA_OFFSET))(this, LJBPECKCCEA, DJLOKMMLFJC, DJGGBGJMONJ, AOMCEAENIKO);
	}
};
