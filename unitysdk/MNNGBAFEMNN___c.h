#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MNNGBAFEMNN;
class PHMJDEIOLCH;
namespace System { template <typename T> class Comparison_1; }

#define MNNGBAFEMNN___C_GOLHKJICIHD_OFFSET UNITYSDK_OFFSET(0x131A6480)
#define MNNGBAFEMNN___C_IJMHKOKLGEI_OFFSET UNITYSDK_OFFSET(0x131A64F0)
#define MNNGBAFEMNN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131A6430)
#define MNNGBAFEMNN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131A6470)

inline static constexpr unsigned int MNNGBAFEMNN___c_TypeDefinitionIndex = 82505;

class MNNGBAFEMNN___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::PHMJDEIOLCH*>** StaticGet___9__36_0()
	{
		return (::System::Comparison_1<::PHMJDEIOLCH*>**)Il2CppClass::FromTypeDefinitionIndex(MNNGBAFEMNN___c_TypeDefinitionIndex)->GetStaticField(0x4BFE0);
	}
	static ::System::Comparison_1<::MNNGBAFEMNN*>** StaticGet___9__33_0()
	{
		return (::System::Comparison_1<::MNNGBAFEMNN*>**)Il2CppClass::FromTypeDefinitionIndex(MNNGBAFEMNN___c_TypeDefinitionIndex)->GetStaticField(0x4BFE8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MNNGBAFEMNN___c_TypeDefinitionIndex)->GetStaticField(0x4BFF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNNGBAFEMNN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNGBAFEMNN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GOLHKJICIHD(::MNNGBAFEMNN* EJCBEJMGFAJ, ::MNNGBAFEMNN* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MNNGBAFEMNN*, ::MNNGBAFEMNN*))((::PBYTE)hIl2Cpp + MNNGBAFEMNN___C_GOLHKJICIHD_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 IJMHKOKLGEI(::PHMJDEIOLCH* EJCBEJMGFAJ, ::PHMJDEIOLCH* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::PHMJDEIOLCH*, ::PHMJDEIOLCH*))((::PBYTE)hIl2Cpp + MNNGBAFEMNN___C_IJMHKOKLGEI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
