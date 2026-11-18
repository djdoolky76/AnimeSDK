#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CFEIPKBDEMM_MKBEAGOEMBN.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFEIPKBDEMM_CEJKLFNOMFP_OFFSET UNITYSDK_OFFSET(0x10E34E60)
#define CFEIPKBDEMM_DCDOCNFPMOM_OFFSET UNITYSDK_OFFSET(0x10E34DE0)
#define CFEIPKBDEMM_GBOGALFJMKP_OFFSET UNITYSDK_OFFSET(0x10E34F50)
#define CFEIPKBDEMM_HIMBFHFCDIG_OFFSET UNITYSDK_OFFSET(0x10E346C0)
#define CFEIPKBDEMM_KMKDGGCCIOM_OFFSET UNITYSDK_OFFSET(0x10E34120)
#define CFEIPKBDEMM_MFBIOCDGGDI_OFFSET UNITYSDK_OFFSET(0x10E34610)
#define CFEIPKBDEMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E34080)

inline static constexpr unsigned int CFEIPKBDEMM_TypeDefinitionIndex = 71747;

class CFEIPKBDEMM : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>** StaticGet_GHKIBIOKMDD()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>**)Il2CppClass::FromTypeDefinitionIndex(CFEIPKBDEMM_TypeDefinitionIndex)->GetStaticField(0x4CCB0);
	}
	// static const ::System::String* EMKGIPKJBJG; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEIPKBDEMM__CCTOR_OFFSET))();
	}

	static ::System::Void KMKDGGCCIOM(::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP)
	{
		return ((::System::Void(*)(::CFEIPKBDEMM_MKBEAGOEMBN))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_KMKDGGCCIOM_OFFSET))(EIIFNIBBJHP);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid MFBIOCDGGDI(::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::CFEIPKBDEMM_MKBEAGOEMBN))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_MFBIOCDGGDI_OFFSET))(EIIFNIBBJHP);
	}

	static ::System::Void HIMBFHFCDIG(::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP)
	{
		return ((::System::Void(*)(::CFEIPKBDEMM_MKBEAGOEMBN))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_HIMBFHFCDIG_OFFSET))(EIIFNIBBJHP);
	}

	static ::System::Void GBOGALFJMKP(::System::String* MCOHLHMKLIP, ::CFEIPKBDEMM_MKBEAGOEMBN HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::System::String*, ::CFEIPKBDEMM_MKBEAGOEMBN))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_GBOGALFJMKP_OFFSET))(MCOHLHMKLIP, HNOPAJLDCFB);
	}

	static ::System::Void DCDOCNFPMOM(::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP)
	{
		return ((::System::Void(*)(::CFEIPKBDEMM_MKBEAGOEMBN))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_DCDOCNFPMOM_OFFSET))(EIIFNIBBJHP);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid CEJKLFNOMFP(::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::CFEIPKBDEMM_MKBEAGOEMBN))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_CEJKLFNOMFP_OFFSET))(EIIFNIBBJHP);
	}
};
