#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBAJCFMAIHG;
class MBJCLLBMALO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CJDHDOIAAGC___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x193DA170)
#define CJDHDOIAAGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193DA120)
#define CJDHDOIAAGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193DA160)

inline static constexpr unsigned int CJDHDOIAAGC___c_TypeDefinitionIndex = 40822;

class CJDHDOIAAGC___c : public ::System::Object
{
public:
	static ::System::Action_2<::MBJCLLBMALO*, ::GBAJCFMAIHG*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::MBJCLLBMALO*, ::GBAJCFMAIHG*>**)Il2CppClass::FromTypeDefinitionIndex(CJDHDOIAAGC___c_TypeDefinitionIndex)->GetStaticField(0x3D680);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJDHDOIAAGC___c_TypeDefinitionIndex)->GetStaticField(0x3D688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJDHDOIAAGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDHDOIAAGC___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::MBJCLLBMALO* GBELIHABEDH, ::GBAJCFMAIHG* DAELFOBJJHM)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*, ::GBAJCFMAIHG*))((::PBYTE)hIl2Cpp + CJDHDOIAAGC___C_IKEHBGKEPAC_OFFSET))(this, GBELIHABEDH, DAELFOBJJHM);
	}
};
