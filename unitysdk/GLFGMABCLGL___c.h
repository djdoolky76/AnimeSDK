#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADHMBPHOPPO.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
class LLIHBJEAGLA;
class OICMJBHDHAD;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GLFGMABCLGL___C_FEMONLAKLFI_OFFSET UNITYSDK_OFFSET(0x13D5FCF0)
#define GLFGMABCLGL___C_FJHNNEIDODL_OFFSET UNITYSDK_OFFSET(0x13D5F500)
#define GLFGMABCLGL___C_GKAICBFBOGC_OFFSET UNITYSDK_OFFSET(0x13D5F4C0)
#define GLFGMABCLGL___C_ICOEKOKJHBA_OFFSET UNITYSDK_OFFSET(0x13D5F620)
#define GLFGMABCLGL___C_LEGLNKBHGGO_OFFSET UNITYSDK_OFFSET(0x13D5F4E0)
#define GLFGMABCLGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D5F470)
#define GLFGMABCLGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5F4B0)

inline static constexpr unsigned int GLFGMABCLGL___c_TypeDefinitionIndex = 51992;

class GLFGMABCLGL___c : public ::System::Object
{
public:
	static ::System::Func_2<::OICMJBHDHAD*, ::ADHMBPHOPPO>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::OICMJBHDHAD*, ::ADHMBPHOPPO>**)Il2CppClass::FromTypeDefinitionIndex(GLFGMABCLGL___c_TypeDefinitionIndex)->GetStaticField(0x4CFA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GLFGMABCLGL___c_TypeDefinitionIndex)->GetStaticField(0x4CFA8);
	}
	static ::System::Func_2<::LLIHBJEAGLA*, ::System::Int32>** StaticGet___9__50_3()
	{
		return (::System::Func_2<::LLIHBJEAGLA*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GLFGMABCLGL___c_TypeDefinitionIndex)->GetStaticField(0x4CFB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLFGMABCLGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMABCLGL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GKAICBFBOGC(::LLIHBJEAGLA* DFMKILICPFB)
	{
		return ((::System::Int32(*)(::PVOID, ::LLIHBJEAGLA*))((::PBYTE)hIl2Cpp + GLFGMABCLGL___C_GKAICBFBOGC_OFFSET))(this, DFMKILICPFB);
	}

	::ADHMBPHOPPO LEGLNKBHGGO(::OICMJBHDHAD* DFMKILICPFB)
	{
		return ((::ADHMBPHOPPO(*)(::PVOID, ::OICMJBHDHAD*))((::PBYTE)hIl2Cpp + GLFGMABCLGL___C_LEGLNKBHGGO_OFFSET))(this, DFMKILICPFB);
	}

	::System::String* FJHNNEIDODL(::System::Int32 KCHHGIDNGIL)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLFGMABCLGL___C_FJHNNEIDODL_OFFSET))(this, KCHHGIDNGIL);
	}

	::System::Boolean ICOEKOKJHBA(::CKENOHMEEGI* IPMMCGDMODG, ::System::Int32 PNPMMLNCDNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::CKENOHMEEGI*, ::System::Int32))((::PBYTE)hIl2Cpp + GLFGMABCLGL___C_ICOEKOKJHBA_OFFSET))(this, IPMMCGDMODG, PNPMMLNCDNK);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* FEMONLAKLFI()
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMABCLGL___C_FEMONLAKLFI_OFFSET))(this);
	}
};
