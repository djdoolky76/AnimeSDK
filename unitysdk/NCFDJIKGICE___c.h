#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMarcelNameWidgetController; }
namespace System { template <typename T> class Predicate_1; }

#define NCFDJIKGICE___C_MMKEOPOGHLK_OFFSET UNITYSDK_OFFSET(0x1157E160)
#define NCFDJIKGICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1157E110)
#define NCFDJIKGICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1157E150)

inline static constexpr unsigned int NCFDJIKGICE___c_TypeDefinitionIndex = 71497;

class NCFDJIKGICE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NCFDJIKGICE___c_TypeDefinitionIndex)->GetStaticField(0x359D0);
	}
	static ::System::Predicate_1<::MoleMole::UIMarcelNameWidgetController*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::MoleMole::UIMarcelNameWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(NCFDJIKGICE___c_TypeDefinitionIndex)->GetStaticField(0x359D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFDJIKGICE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFDJIKGICE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MMKEOPOGHLK(::MoleMole::UIMarcelNameWidgetController* MNOMCCLBJAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMarcelNameWidgetController*))((::PBYTE)hIl2Cpp + NCFDJIKGICE___C_MMKEOPOGHLK_OFFSET))(this, MNOMCCLBJAO);
	}
};
