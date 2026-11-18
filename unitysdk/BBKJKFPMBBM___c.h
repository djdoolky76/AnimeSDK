#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKDNDBHIHPL;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define BBKJKFPMBBM___C_GANDINDADML_OFFSET UNITYSDK_OFFSET(0x1423D850)
#define BBKJKFPMBBM___C_HJNMNCKGCDE_OFFSET UNITYSDK_OFFSET(0x1423D7C0)
#define BBKJKFPMBBM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1423D770)
#define BBKJKFPMBBM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1423D7B0)

inline static constexpr unsigned int BBKJKFPMBBM___c_TypeDefinitionIndex = 73604;

class BBKJKFPMBBM___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::AKDNDBHIHPL*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::AKDNDBHIHPL*>**)Il2CppClass::FromTypeDefinitionIndex(BBKJKFPMBBM___c_TypeDefinitionIndex)->GetStaticField(0x3A3C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BBKJKFPMBBM___c_TypeDefinitionIndex)->GetStaticField(0x3A3C8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(BBKJKFPMBBM___c_TypeDefinitionIndex)->GetStaticField(0x3A3D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKJKFPMBBM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKJKFPMBBM___C__CTOR_OFFSET))(this);
	}

	::System::Void HJNMNCKGCDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKJKFPMBBM___C_HJNMNCKGCDE_OFFSET))(this);
	}

	::System::Int32 GANDINDADML(::AKDNDBHIHPL* HAAEBCOBKFF, ::AKDNDBHIHPL* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::AKDNDBHIHPL*, ::AKDNDBHIHPL*))((::PBYTE)hIl2Cpp + BBKJKFPMBBM___C_GANDINDADML_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
