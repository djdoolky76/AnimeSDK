#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define OEMBHNHBGED___C_AJMIOBOADLL_OFFSET UNITYSDK_OFFSET(0x15FD8100)
#define OEMBHNHBGED___C_BABCFMCMIAB_OFFSET UNITYSDK_OFFSET(0x15FD80F0)
#define OEMBHNHBGED___C_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x15FD80E0)
#define OEMBHNHBGED___C_FNKFPOGMBLB_OFFSET UNITYSDK_OFFSET(0x15FD8140)
#define OEMBHNHBGED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FD8090)
#define OEMBHNHBGED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD80D0)

inline static constexpr unsigned int OEMBHNHBGED___c_TypeDefinitionIndex = 75367;

class OEMBHNHBGED___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OEMBHNHBGED___c_TypeDefinitionIndex)->GetStaticField(0x3CD80);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_9()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OEMBHNHBGED___c_TypeDefinitionIndex)->GetStaticField(0x3CD88);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OEMBHNHBGED___c_TypeDefinitionIndex)->GetStaticField(0x3CD90);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OEMBHNHBGED___c_TypeDefinitionIndex)->GetStaticField(0x3CD98);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OEMBHNHBGED___c_TypeDefinitionIndex)->GetStaticField(0x3CDA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMBHNHBGED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DONDKEFJMGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED___C_DONDKEFJMGI_OFFSET))(this);
	}

	::System::Boolean BABCFMCMIAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED___C_BABCFMCMIAB_OFFSET))(this);
	}

	::System::String* AJMIOBOADLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED___C_AJMIOBOADLL_OFFSET))(this);
	}

	::System::Boolean FNKFPOGMBLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED___C_FNKFPOGMBLB_OFFSET))(this);
	}
};
