#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
namespace System { template <typename T> class Comparison_1; }

#define FMAINMDDHHO___C_CEBIEKICEMC_OFFSET UNITYSDK_OFFSET(0x156C7410)
#define FMAINMDDHHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C73C0)
#define FMAINMDDHHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C7400)

inline static constexpr unsigned int FMAINMDDHHO___c_TypeDefinitionIndex = 48386;

class FMAINMDDHHO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FMAINMDDHHO___c_TypeDefinitionIndex)->GetStaticField(0x43550);
	}
	static ::System::Comparison_1<::CKENOHMEEGI*>** StaticGet___9__46_1()
	{
		return (::System::Comparison_1<::CKENOHMEEGI*>**)Il2CppClass::FromTypeDefinitionIndex(FMAINMDDHHO___c_TypeDefinitionIndex)->GetStaticField(0x43558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMAINMDDHHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAINMDDHHO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CEBIEKICEMC(::CKENOHMEEGI* EJCBEJMGFAJ, ::CKENOHMEEGI* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + FMAINMDDHHO___C_CEBIEKICEMC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
