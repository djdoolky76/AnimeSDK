#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPMGPHLMPJI;
namespace System { template <typename T> class Action_1; }

#define FHIINBCOOAN___C_BBDBODGMHEP_OFFSET UNITYSDK_OFFSET(0x14296570)
#define FHIINBCOOAN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14296520)
#define FHIINBCOOAN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14296560)

inline static constexpr unsigned int FHIINBCOOAN___c_TypeDefinitionIndex = 81718;

class FHIINBCOOAN___c : public ::System::Object
{
public:
	static ::System::Action_1<::BPMGPHLMPJI*>** StaticGet___9__31_0()
	{
		return (::System::Action_1<::BPMGPHLMPJI*>**)Il2CppClass::FromTypeDefinitionIndex(FHIINBCOOAN___c_TypeDefinitionIndex)->GetStaticField(0x3ACA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FHIINBCOOAN___c_TypeDefinitionIndex)->GetStaticField(0x3ACA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHIINBCOOAN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIINBCOOAN___C__CTOR_OFFSET))(this);
	}

	::System::Void BBDBODGMHEP(::BPMGPHLMPJI* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BPMGPHLMPJI*))((::PBYTE)hIl2Cpp + FHIINBCOOAN___C_BBDBODGMHEP_OFFSET))(this, GLAOEHCGCFO);
	}
};
