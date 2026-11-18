#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace System { template <typename T> class Comparison_1; }

#define FKCFOADAMNI___C_EHAPEEMFILP_OFFSET UNITYSDK_OFFSET(0x14AD8520)
#define FKCFOADAMNI___C_NAFHNAKHBCN_OFFSET UNITYSDK_OFFSET(0x14AD85A0)
#define FKCFOADAMNI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AD84D0)
#define FKCFOADAMNI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD8510)

inline static constexpr unsigned int FKCFOADAMNI___c_TypeDefinitionIndex = 76363;

class FKCFOADAMNI___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__108_0()
	{
		return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(FKCFOADAMNI___c_TypeDefinitionIndex)->GetStaticField(0x4E420);
	}
	static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__106_0()
	{
		return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(FKCFOADAMNI___c_TypeDefinitionIndex)->GetStaticField(0x4E428);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKCFOADAMNI___c_TypeDefinitionIndex)->GetStaticField(0x4E430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCFOADAMNI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EHAPEEMFILP(::FOLOGHLENFB* KILPCOMOCMD, ::FOLOGHLENFB* BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + FKCFOADAMNI___C_EHAPEEMFILP_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}

	::System::Int32 NAFHNAKHBCN(::FOLOGHLENFB* KILPCOMOCMD, ::FOLOGHLENFB* BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + FKCFOADAMNI___C_NAFHNAKHBCN_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
