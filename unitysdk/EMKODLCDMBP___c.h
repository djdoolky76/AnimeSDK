#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class OECBDEANICM;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define EMKODLCDMBP___C_CBMKCFPOANL_OFFSET UNITYSDK_OFFSET(0x17246A20)
#define EMKODLCDMBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172469D0)
#define EMKODLCDMBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17246A10)

inline static constexpr unsigned int EMKODLCDMBP___c_TypeDefinitionIndex = 76041;

class EMKODLCDMBP___c : public ::System::Object
{
public:
	static ::System::Action_3<::EHKKPCGAJHO*, ::OECBDEANICM*, ::AEMCAOEICDG*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::EHKKPCGAJHO*, ::OECBDEANICM*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(EMKODLCDMBP___c_TypeDefinitionIndex)->GetStaticField(0x40810);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EMKODLCDMBP___c_TypeDefinitionIndex)->GetStaticField(0x40818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKODLCDMBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKODLCDMBP___C__CTOR_OFFSET))(this);
	}

	::System::Void CBMKCFPOANL(::EHKKPCGAJHO* POBADKEDFOE, ::OECBDEANICM* GEANDLGIKBC, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::EHKKPCGAJHO*, ::OECBDEANICM*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + EMKODLCDMBP___C_CBMKCFPOANL_OFFSET))(this, POBADKEDFOE, GEANDLGIKBC, OHPJHPEOFLD);
	}
};
