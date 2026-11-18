#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

#define CENKLEAGEFP_BJBEOJMKBLG_OFFSET UNITYSDK_OFFSET(0x1FFC5480)
#define CENKLEAGEFP_KJDCPKECIJP_OFFSET UNITYSDK_OFFSET(0x1FFC54E0)
#define CENKLEAGEFP_NDMJEJHOIBE_OFFSET UNITYSDK_OFFSET(0x1FFC5540)
#define CENKLEAGEFP_OPFBPNGMKDK_OFFSET UNITYSDK_OFFSET(0x1FFC5420)
#define CENKLEAGEFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC5340)

inline static constexpr unsigned int CENKLEAGEFP_TypeDefinitionIndex = 18272;

class CENKLEAGEFP : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>** StaticGet__FEIFGHEICBM_k__BackingField()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(CENKLEAGEFP_TypeDefinitionIndex)->GetStaticField(0x84C0);
	}
	static ::System::Collections::Generic::EqualityComparer_1<::System::Double>** StaticGet__PMLPDPIEHOK_k__BackingField()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CENKLEAGEFP_TypeDefinitionIndex)->GetStaticField(0x84C8);
	}
	static ::System::Collections::Generic::EqualityComparer_1<::System::Single>** StaticGet__EHIJIDLLDOL_k__BackingField()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CENKLEAGEFP_TypeDefinitionIndex)->GetStaticField(0x84D0);
	}
	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>** StaticGet__JBNGDBPMJCC_k__BackingField()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>**)Il2CppClass::FromTypeDefinitionIndex(CENKLEAGEFP_TypeDefinitionIndex)->GetStaticField(0x84D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENKLEAGEFP__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>* OPFBPNGMKDK()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>*(*)())((::PBYTE)hIl2Cpp + CENKLEAGEFP_OPFBPNGMKDK_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Double>* BJBEOJMKBLG()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Double>*(*)())((::PBYTE)hIl2Cpp + CENKLEAGEFP_BJBEOJMKBLG_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>* KJDCPKECIJP()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>*(*)())((::PBYTE)hIl2Cpp + CENKLEAGEFP_KJDCPKECIJP_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Single>* NDMJEJHOIBE()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + CENKLEAGEFP_NDMJEJHOIBE_OFFSET))();
	}
};
