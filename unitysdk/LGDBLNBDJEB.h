#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHLIKDLCNKF.h"

class AODIFLIBBJA;
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGDBLNBDJEB_AMCCBNNIJKG_OFFSET UNITYSDK_OFFSET(0x1524E700)
#define LGDBLNBDJEB_GIMOKAJBOJK_OFFSET UNITYSDK_OFFSET(0x1524E6F0)
#define LGDBLNBDJEB_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x1524E280)
#define LGDBLNBDJEB_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x1524E6A0)
#define LGDBLNBDJEB_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x1524E490)
#define LGDBLNBDJEB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1524DEB0)
#define LGDBLNBDJEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1524DE20)

inline static constexpr unsigned int LGDBLNBDJEB_TypeDefinitionIndex = 77325;

class LGDBLNBDJEB : public ::JHLIKDLCNKF
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _JAMNKKEMAEN_k__BackingField; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::Int32>* CPMBINJIHCA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + LGDBLNBDJEB__CTOR_OFFSET))(this, CPMBINJIHCA);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IList_1<::System::UInt32>* CPMBINJIHCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LGDBLNBDJEB__CTOR_1_OFFSET))(this, CPMBINJIHCA);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + LGDBLNBDJEB_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDBLNBDJEB_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + LGDBLNBDJEB_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GIMOKAJBOJK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDBLNBDJEB_GIMOKAJBOJK_OFFSET))(this);
	}

	::System::Void AMCCBNNIJKG(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LGDBLNBDJEB_AMCCBNNIJKG_OFFSET))(this, EGEGIMGMJHN);
	}
};
