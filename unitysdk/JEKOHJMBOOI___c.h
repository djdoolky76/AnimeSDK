#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;
class ELKANIHDJPJ;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define JEKOHJMBOOI___C_FEDLAPBPFLE_OFFSET UNITYSDK_OFFSET(0x13CAD930)
#define JEKOHJMBOOI___C_LGELLGLKPMC_OFFSET UNITYSDK_OFFSET(0x13CAD8E0)
#define JEKOHJMBOOI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CAD890)
#define JEKOHJMBOOI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAD8D0)

inline static constexpr unsigned int JEKOHJMBOOI___c_TypeDefinitionIndex = 82319;

class JEKOHJMBOOI___c : public ::System::Object
{
public:
	static ::System::Converter_2<::ELKANIHDJPJ*, ::System::String*>** StaticGet___9__22_1()
	{
		return (::System::Converter_2<::ELKANIHDJPJ*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JEKOHJMBOOI___c_TypeDefinitionIndex)->GetStaticField(0x46690);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JEKOHJMBOOI___c_TypeDefinitionIndex)->GetStaticField(0x46698);
	}
	static ::System::Converter_2<::ANAPNFPOMNG*, ::System::String*>** StaticGet___9__22_0()
	{
		return (::System::Converter_2<::ANAPNFPOMNG*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JEKOHJMBOOI___c_TypeDefinitionIndex)->GetStaticField(0x466A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKOHJMBOOI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKOHJMBOOI___C__CTOR_OFFSET))(this);
	}

	::System::String* LGELLGLKPMC(::ELKANIHDJPJ* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::ELKANIHDJPJ*))((::PBYTE)hIl2Cpp + JEKOHJMBOOI___C_LGELLGLKPMC_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::String* FEDLAPBPFLE(::ANAPNFPOMNG* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + JEKOHJMBOOI___C_FEDLAPBPFLE_OFFSET))(this, HAAEBCOBKFF);
	}
};
