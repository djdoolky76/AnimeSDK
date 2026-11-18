#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }

#define OMBCMMJMEFL___C_ELGHKDJGKNC_OFFSET UNITYSDK_OFFSET(0x15FEBDF0)
#define OMBCMMJMEFL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FEBDA0)
#define OMBCMMJMEFL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEBDE0)

inline static constexpr unsigned int OMBCMMJMEFL___c_TypeDefinitionIndex = 75130;

class OMBCMMJMEFL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OMBCMMJMEFL___c_TypeDefinitionIndex)->GetStaticField(0x360B0);
	}
	static ::DG::Tweening::Core::DOGetter_1<::System::Single>** StaticGet___9__16_0()
	{
		return (::DG::Tweening::Core::DOGetter_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(OMBCMMJMEFL___c_TypeDefinitionIndex)->GetStaticField(0x360B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMBCMMJMEFL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL___C__CTOR_OFFSET))(this);
	}

	::System::Single ELGHKDJGKNC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL___C_ELGHKDJGKNC_OFFSET))(this);
	}
};
