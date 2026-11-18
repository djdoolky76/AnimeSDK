#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHONMJHOGAF.h"
#include "unitysdk/System/Object.h"

class GAAHPPHMFDO;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPOCDKHHGFG_BAHHCNBICOE_OFFSET UNITYSDK_OFFSET(0x1CE8A910)
#define GPOCDKHHGFG_DHBGALDMIEL_OFFSET UNITYSDK_OFFSET(0x1CE87590)
#define GPOCDKHHGFG_EACMHBADIKP_OFFSET UNITYSDK_OFFSET(0x1CE94FB0)
#define GPOCDKHHGFG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CE94FF0)
#define GPOCDKHHGFG_GOMCOCGEEMB_1_OFFSET UNITYSDK_OFFSET(0x1CE8B000)
#define GPOCDKHHGFG_GOMCOCGEEMB_OFFSET UNITYSDK_OFFSET(0x1CE8ACF0)
#define GPOCDKHHGFG_MKKKNDOKIEL_OFFSET UNITYSDK_OFFSET(0x1CE95060)
#define GPOCDKHHGFG_NBHDBKFIAKM_OFFSET UNITYSDK_OFFSET(0x1CE95050)
#define GPOCDKHHGFG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE95000)
#define GPOCDKHHGFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE86C20)

inline static constexpr unsigned int GPOCDKHHGFG_TypeDefinitionIndex = 34824;

class GPOCDKHHGFG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GAAHPPHMFDO*>* EAOFCJHPEIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG__CTOR_OFFSET))(this);
	}

	::System::Void GOMCOCGEEMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_GOMCOCGEEMB_OFFSET))(this);
	}

	::System::Void GOMCOCGEEMB_1(::PHONMJHOGAF FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::PVOID, ::PHONMJHOGAF))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_GOMCOCGEEMB_1_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Void BAHHCNBICOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_BAHHCNBICOE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_FINALIZE_OFFSET))(this);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean NBHDBKFIAKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_NBHDBKFIAKM_OFFSET))(this);
	}

	::System::Void EACMHBADIKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_EACMHBADIKP_OFFSET))(this);
	}

	::System::Void MKKKNDOKIEL(::System::String* HIAIKHDFCLN, ::GAAHPPHMFDO* BGJOPBCCMOC, ::System::Type* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::GAAHPPHMFDO*, ::System::Type*))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_MKKKNDOKIEL_OFFSET))(this, HIAIKHDFCLN, BGJOPBCCMOC, IMLLDOHDCNC);
	}

	::System::Void DHBGALDMIEL(::GAAHPPHMFDO* BGJOPBCCMOC)
	{
		return ((::System::Void(*)(::PVOID, ::GAAHPPHMFDO*))((::PBYTE)hIl2Cpp + GPOCDKHHGFG_DHBGALDMIEL_OFFSET))(this, BGJOPBCCMOC);
	}
};
