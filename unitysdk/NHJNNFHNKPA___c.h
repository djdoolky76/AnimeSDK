#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;
class ELKANIHDJPJ;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define NHJNNFHNKPA___C_ABMECJBFHJO_OFFSET UNITYSDK_OFFSET(0x1FD0CDB0)
#define NHJNNFHNKPA___C_GFMOOGJCDGP_OFFSET UNITYSDK_OFFSET(0x1FD0CD50)
#define NHJNNFHNKPA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0CD00)
#define NHJNNFHNKPA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0CD40)

inline static constexpr unsigned int NHJNNFHNKPA___c_TypeDefinitionIndex = 28713;

class NHJNNFHNKPA___c : public ::System::Object
{
public:
	static ::System::Converter_2<::ANAPNFPOMNG*, ::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Converter_2<::ANAPNFPOMNG*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NHJNNFHNKPA___c_TypeDefinitionIndex)->GetStaticField(0x25E50);
	}
	static ::System::Converter_2<::ELKANIHDJPJ*, ::System::String*>** StaticGet___9__16_1()
	{
		return (::System::Converter_2<::ELKANIHDJPJ*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NHJNNFHNKPA___c_TypeDefinitionIndex)->GetStaticField(0x25E58);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NHJNNFHNKPA___c_TypeDefinitionIndex)->GetStaticField(0x25E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHJNNFHNKPA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJNNFHNKPA___C__CTOR_OFFSET))(this);
	}

	::System::String* GFMOOGJCDGP(::ELKANIHDJPJ* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::ELKANIHDJPJ*))((::PBYTE)hIl2Cpp + NHJNNFHNKPA___C_GFMOOGJCDGP_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::String* ABMECJBFHJO(::ANAPNFPOMNG* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + NHJNNFHNKPA___C_ABMECJBFHJO_OFFSET))(this, HAAEBCOBKFF);
	}
};
