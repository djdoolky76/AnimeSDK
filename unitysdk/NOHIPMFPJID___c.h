#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class COADDDDCGCA;
namespace System { template <typename T> class Action_1; }

#define NOHIPMFPJID___C_CLNBMNLOHJO_OFFSET UNITYSDK_OFFSET(0x172B18F0)
#define NOHIPMFPJID___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172B18A0)
#define NOHIPMFPJID___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172B18E0)

inline static constexpr unsigned int NOHIPMFPJID___c_TypeDefinitionIndex = 52833;

class NOHIPMFPJID___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::COADDDDCGCA*>>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::COADDDDCGCA*>>**)Il2CppClass::FromTypeDefinitionIndex(NOHIPMFPJID___c_TypeDefinitionIndex)->GetStaticField(0x4DBC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOHIPMFPJID___c_TypeDefinitionIndex)->GetStaticField(0x4DBC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHIPMFPJID___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHIPMFPJID___C__CTOR_OFFSET))(this);
	}

	::System::Void CLNBMNLOHJO(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::COADDDDCGCA*> JIDEDAPGIJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::COADDDDCGCA*>))((::PBYTE)hIl2Cpp + NOHIPMFPJID___C_CLNBMNLOHJO_OFFSET))(this, JIDEDAPGIJB);
	}
};
