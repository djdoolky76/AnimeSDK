#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APCKGCCCMJJ;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBBKIGEIFKC_KDJDJDCOPAO_OFFSET UNITYSDK_OFFSET(0x13C49270)
#define KBBKIGEIFKC_KFMAKLFFCCA_OFFSET UNITYSDK_OFFSET(0x13C48BB0)
#define KBBKIGEIFKC_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x13C48D10)
#define KBBKIGEIFKC_ONEMDJLHENJ_OFFSET UNITYSDK_OFFSET(0x13C496C0)
#define KBBKIGEIFKC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C48B20)

inline static constexpr unsigned int KBBKIGEIFKC_TypeDefinitionIndex = 75458;

class KBBKIGEIFKC : public ::System::Object
{
public:
	static ::APCKGCCCMJJ** StaticGet_FJFIBCNGNGG()
	{
		return (::APCKGCCCMJJ**)Il2CppClass::FromTypeDefinitionIndex(KBBKIGEIFKC_TypeDefinitionIndex)->GetStaticField(0x509B0);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_KKHOIBKGGFO()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(KBBKIGEIFKC_TypeDefinitionIndex)->GetStaticField(0x509B8);
	}
	static ::System::Boolean* StaticGet_IANHKOLCODN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KBBKIGEIFKC_TypeDefinitionIndex)->GetStaticField(0x13160);
	}
	static ::System::Boolean* StaticGet_EMGJKMFNLMH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KBBKIGEIFKC_TypeDefinitionIndex)->GetStaticField(0x13161);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBBKIGEIFKC__CCTOR_OFFSET))();
	}

	static ::System::Int32 KFMAKLFFCCA(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + KBBKIGEIFKC_KFMAKLFFCCA_OFFSET))(KCNOHOOPNAH);
	}

	static ::System::Void KKFNPONHGEM(::System::Int32 COMDNFILAIC, ::System::Int32 KCNOHOOPNAH, ::System::Int32 APADCDHGBHN)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KBBKIGEIFKC_KKFNPONHGEM_OFFSET))(COMDNFILAIC, KCNOHOOPNAH, APADCDHGBHN);
	}

	static ::System::Void KDJDJDCOPAO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBBKIGEIFKC_KDJDJDCOPAO_OFFSET))();
	}

	static ::System::Void ONEMDJLHENJ(::System::EventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + KBBKIGEIFKC_ONEMDJLHENJ_OFFSET))(PIIPCLCCOIG);
	}
};
