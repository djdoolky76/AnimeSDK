#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFHCCAKCCNI;
class KCODNJFEMAM;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define NNKCAIHDMDN___C_IJEIOENOFOI_OFFSET UNITYSDK_OFFSET(0x1067B890)
#define NNKCAIHDMDN___C_MBLEHAGIIFE_OFFSET UNITYSDK_OFFSET(0x1067B910)
#define NNKCAIHDMDN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1067B840)
#define NNKCAIHDMDN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1067B880)

inline static constexpr unsigned int NNKCAIHDMDN___c_TypeDefinitionIndex = 39466;

class NNKCAIHDMDN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NNKCAIHDMDN___c_TypeDefinitionIndex)->GetStaticField(0x398F0);
	}
	static ::System::Action_2<::EFHCCAKCCNI*, ::KCODNJFEMAM*>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::EFHCCAKCCNI*, ::KCODNJFEMAM*>**)Il2CppClass::FromTypeDefinitionIndex(NNKCAIHDMDN___c_TypeDefinitionIndex)->GetStaticField(0x398F8);
	}
	static ::System::Action_1<::EFHCCAKCCNI*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::EFHCCAKCCNI*>**)Il2CppClass::FromTypeDefinitionIndex(NNKCAIHDMDN___c_TypeDefinitionIndex)->GetStaticField(0x39900);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKCAIHDMDN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCAIHDMDN___C__CTOR_OFFSET))(this);
	}

	::System::Void IJEIOENOFOI(::EFHCCAKCCNI* APNNPCNJEEP)
	{
		return ((::System::Void(*)(::PVOID, ::EFHCCAKCCNI*))((::PBYTE)hIl2Cpp + NNKCAIHDMDN___C_IJEIOENOFOI_OFFSET))(this, APNNPCNJEEP);
	}

	::System::Void MBLEHAGIIFE(::EFHCCAKCCNI* APNNPCNJEEP, ::KCODNJFEMAM* ABPLMMJBOKD)
	{
		return ((::System::Void(*)(::PVOID, ::EFHCCAKCCNI*, ::KCODNJFEMAM*))((::PBYTE)hIl2Cpp + NNKCAIHDMDN___C_MBLEHAGIIFE_OFFSET))(this, APNNPCNJEEP, ABPLMMJBOKD);
	}
};
