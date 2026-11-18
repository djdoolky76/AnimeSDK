#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOBLBKHJMBA;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CDINHGLEHED_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x145ACD30)
#define CDINHGLEHED_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x145ACC50)
#define CDINHGLEHED_JGENOJBGCKN_1_OFFSET UNITYSDK_OFFSET(0x145ACCE0)
#define CDINHGLEHED_JGENOJBGCKN_OFFSET UNITYSDK_OFFSET(0x145ACCA0)
#define CDINHGLEHED_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x145ACB80)
#define CDINHGLEHED_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x145ACD80)
#define CDINHGLEHED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x145ACAF0)
#define CDINHGLEHED__CTOR_OFFSET UNITYSDK_OFFSET(0x145ACAE0)

inline static constexpr unsigned int CDINHGLEHED_TypeDefinitionIndex = 84045;

class CDINHGLEHED : public ::System::Object
{
public:
	static ::CDINHGLEHED** StaticGet_GJAHGODBJHH()
	{
		return (::CDINHGLEHED**)Il2CppClass::FromTypeDefinitionIndex(CDINHGLEHED_TypeDefinitionIndex)->GetStaticField(0x402C0);
	}
	// static const ::System::String* AILDJNPCPCM; // 0x0
	::System::Collections::Generic::HashSet_1<::FOBLBKHJMBA*>* BHOMNENKLBK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDINHGLEHED__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDINHGLEHED_PHOADBJGFBE_OFFSET))(this);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDINHGLEHED_JPOLBPCHLHK_OFFSET))();
	}

	::System::Void FLHNGDLANDC(::FOBLBKHJMBA* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::FOBLBKHJMBA*))((::PBYTE)hIl2Cpp + CDINHGLEHED_FLHNGDLANDC_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::Void JGENOJBGCKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDINHGLEHED_JGENOJBGCKN_OFFSET))(this);
	}

	::System::Void JGENOJBGCKN_1(::FOBLBKHJMBA* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::FOBLBKHJMBA*))((::PBYTE)hIl2Cpp + CDINHGLEHED_JGENOJBGCKN_1_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::Void ANPBCLAFCJB(::FOBLBKHJMBA* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::FOBLBKHJMBA*))((::PBYTE)hIl2Cpp + CDINHGLEHED_ANPBCLAFCJB_OFFSET))(this, ECMMKCJLBMD);
	}

	static ::CDINHGLEHED* OELADBPLLEM()
	{
		return ((::CDINHGLEHED*(*)())((::PBYTE)hIl2Cpp + CDINHGLEHED_OELADBPLLEM_OFFSET))();
	}
};
