#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBJCLLBMALO;
class MJLBGGKIBNB;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LMHLOGLFAPP___C_PDAIOPNBELE_OFFSET UNITYSDK_OFFSET(0x185100D0)
#define LMHLOGLFAPP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18510080)
#define LMHLOGLFAPP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185100C0)

inline static constexpr unsigned int LMHLOGLFAPP___c_TypeDefinitionIndex = 78538;

class LMHLOGLFAPP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LMHLOGLFAPP___c_TypeDefinitionIndex)->GetStaticField(0x4BF00);
	}
	static ::System::Action_2<::MBJCLLBMALO*, ::MJLBGGKIBNB*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::MBJCLLBMALO*, ::MJLBGGKIBNB*>**)Il2CppClass::FromTypeDefinitionIndex(LMHLOGLFAPP___c_TypeDefinitionIndex)->GetStaticField(0x4BF08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHLOGLFAPP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHLOGLFAPP___C__CTOR_OFFSET))(this);
	}

	::System::Void PDAIOPNBELE(::MBJCLLBMALO* GBELIHABEDH, ::MJLBGGKIBNB* KKPFEIGFAKK)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*, ::MJLBGGKIBNB*))((::PBYTE)hIl2Cpp + LMHLOGLFAPP___C_PDAIOPNBELE_OFFSET))(this, GBELIHABEDH, KKPFEIGFAKK);
	}
};
