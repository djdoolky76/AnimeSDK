#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLMFGCDBNFG.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAHJKLNOMPH_BELAHNIPKCA_OFFSET UNITYSDK_OFFSET(0x1A38DF50)
#define IAHJKLNOMPH_DAJPMBHLENG_OFFSET UNITYSDK_OFFSET(0x1A38E3A0)
#define IAHJKLNOMPH_FKIOJEGBGDE_OFFSET UNITYSDK_OFFSET(0x1A38E200)
#define IAHJKLNOMPH_GNFDBHMINIL_OFFSET UNITYSDK_OFFSET(0x1A38E0F0)
#define IAHJKLNOMPH_LAEPAEDHAEI_OFFSET UNITYSDK_OFFSET(0x1A38E020)
#define IAHJKLNOMPH_LGMBCOGGKIN_OFFSET UNITYSDK_OFFSET(0x1A38E260)
#define IAHJKLNOMPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A38DC50)

inline static constexpr unsigned int IAHJKLNOMPH_TypeDefinitionIndex = 54627;

class IAHJKLNOMPH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>** StaticGet_MKGFBJKOJPI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(IAHJKLNOMPH_TypeDefinitionIndex)->GetStaticField(0x36580);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_CHIGPEKGBLD()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(IAHJKLNOMPH_TypeDefinitionIndex)->GetStaticField(0x36588);
	}
	static ::System::Collections::Generic::List_1<::System::UInt16>** StaticGet_PBLBACKFHNN()
	{
		return (::System::Collections::Generic::List_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(IAHJKLNOMPH_TypeDefinitionIndex)->GetStaticField(0x36590);
	}
	static ::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt16>*>** StaticGet_GJANPHFOBJJ()
	{
		return (::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt16>*>**)Il2CppClass::FromTypeDefinitionIndex(IAHJKLNOMPH_TypeDefinitionIndex)->GetStaticField(0x36598);
	}
	static ::Il2CppArray<::PLMFGCDBNFG>** StaticGet_IDGFHKGNDJE()
	{
		return (::Il2CppArray<::PLMFGCDBNFG>**)Il2CppClass::FromTypeDefinitionIndex(IAHJKLNOMPH_TypeDefinitionIndex)->GetStaticField(0x365A0);
	}
	static ::System::Int32* StaticGet__JLCFEKLNNIM_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IAHJKLNOMPH_TypeDefinitionIndex)->GetStaticField(0xC270);
	}
	// static const ::System::UInt16 MEKLJBMNGBF = 0x200; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAHJKLNOMPH__CCTOR_OFFSET))();
	}

	static ::System::Type* BELAHNIPKCA(::System::Int32 ICIEKPICGKN)
	{
		return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IAHJKLNOMPH_BELAHNIPKCA_OFFSET))(ICIEKPICGKN);
	}

	static ::PLMFGCDBNFG LAEPAEDHAEI(::System::Int32 ICIEKPICGKN)
	{
		return ((::PLMFGCDBNFG(*)(::System::Int32))((::PBYTE)hIl2Cpp + IAHJKLNOMPH_LAEPAEDHAEI_OFFSET))(ICIEKPICGKN);
	}

	static ::System::Collections::Generic::List_1<::System::UInt16>* GNFDBHMINIL(::System::Int32 ICIEKPICGKN)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt16>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IAHJKLNOMPH_GNFDBHMINIL_OFFSET))(ICIEKPICGKN);
	}

	static ::System::Int32 FKIOJEGBGDE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IAHJKLNOMPH_FKIOJEGBGDE_OFFSET))();
	}

	static ::System::UInt16 LGMBCOGGKIN(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::UInt16(*)(::System::Type*))((::PBYTE)hIl2Cpp + IAHJKLNOMPH_LGMBCOGGKIN_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void DAJPMBHLENG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + IAHJKLNOMPH_DAJPMBHLENG_OFFSET))(EGEGIMGMJHN);
	}
};
