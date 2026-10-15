#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"
class BIDHGAANLAL;
class GHMOOMMNDDN;
class HKAJMEMCBLC;
class KMGFDBOANJO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MODJFJKGCFB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBA229F0)
#define MODJFJKGCFB_BCNAKBHOKNC_OFFSET UNITYSDK_OFFSET(0xBA23030)
#define MODJFJKGCFB_BHNODNOPHDP_OFFSET UNITYSDK_OFFSET(0xBA239C0)
#define MODJFJKGCFB_BNAHIKHNBEK_OFFSET UNITYSDK_OFFSET(0xBA23580)
#define MODJFJKGCFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA23EB0)
#define MODJFJKGCFB_FFNPDGKADAJ_OFFSET UNITYSDK_OFFSET(0xBA23B80)
#define MODJFJKGCFB_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xBA23300)
#define MODJFJKGCFB_HOKCHMDMGDG_OFFSET UNITYSDK_OFFSET(0xBA220B0)
#define MODJFJKGCFB_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0xBA22AC0)
#define MODJFJKGCFB_IKAHMNPAPFD_OFFSET UNITYSDK_OFFSET(0xBA21EC0)
#define MODJFJKGCFB_IOKIBDIPEOG_OFFSET UNITYSDK_OFFSET(0xBA224E0)
#define MODJFJKGCFB_JEKDFLAMJON_OFFSET UNITYSDK_OFFSET(0xBA22B70)
#define MODJFJKGCFB_MFEJBIAOPFD_OFFSET UNITYSDK_OFFSET(0xBA23360)
#define MODJFJKGCFB_MNJLHBHECKD_OFFSET UNITYSDK_OFFSET(0xBA237A0)
#define MODJFJKGCFB_MPBCJIFPKKK_OFFSET UNITYSDK_OFFSET(0xBA23D10)
#define MODJFJKGCFB_NNOHCEEEJPH_OFFSET UNITYSDK_OFFSET(0xBA22E80)
#define MODJFJKGCFB_NPKMGFOJOHN_OFFSET UNITYSDK_OFFSET(0xBA22C60)

inline static constexpr unsigned int MODJFJKGCFB_TypeDefinitionIndex = 81092;

	class MODJFJKGCFB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KMGFDBOANJO*>* GEJHKIHNFPI; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BIDHGAANLAL*>* FKANOBEBMPE; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinHouguRarityType, ::GHMOOMMNDDN*>* MFGCHEPAFPM; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HKAJMEMCBLC*>* IHNOEAMNIBK; // 0x28
		::System::Boolean DOFJLCMOJML; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_CTOR_OFFSET))(this);
		}

		::System::Void IKAHMNPAPFD(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MODJFJKGCFB_IKAHMNPAPFD_OFFSET))(this, a1);
		}

		::System::Void IOKIBDIPEOG(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MODJFJKGCFB_IOKIBDIPEOG_OFFSET))(this, a1);
		}

		::HKAJMEMCBLC* ACMKLFOMPFC(::System::UInt32 a1)
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MODJFJKGCFB_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Boolean IAONPECOKLB(::System::UInt32 a1, ::HKAJMEMCBLC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB_IAONPECOKLB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* JEKDFLAMJON()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_JEKDFLAMJON_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* NPKMGFOJOHN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_NPKMGFOJOHN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* NNOHCEEEJPH(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + MODJFJKGCFB_NNOHCEEEJPH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* BCNAKBHOKNC()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_BCNAKBHOKNC_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Int32 MFEJBIAOPFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_MFEJBIAOPFD_OFFSET))(this);
		}

		::System::Int32 BNAHIKHNBEK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_BNAHIKHNBEK_OFFSET))(this);
		}

		::System::Int32 MNJLHBHECKD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_MNJLHBHECKD_OFFSET))(this);
		}

		::System::Void HOKCHMDMGDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB_HOKCHMDMGDG_OFFSET))(this);
		}

		::GHMOOMMNDDN* BHNODNOPHDP(::RPG::GameCore::FateRinHouguRarityType a1)
		{
			return ((::GHMOOMMNDDN*(*)(::PVOID, ::RPG::GameCore::FateRinHouguRarityType))((::PBYTE)hIl2Cpp + MODJFJKGCFB_BHNODNOPHDP_OFFSET))(this, a1);
		}

		::BIDHGAANLAL* FFNPDGKADAJ(::System::UInt32 a1)
		{
			return ((::BIDHGAANLAL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MODJFJKGCFB_FFNPDGKADAJ_OFFSET))(this, a1);
		}

		::KMGFDBOANJO* MPBCJIFPKKK(::System::UInt32 a1)
		{
			return ((::KMGFDBOANJO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MODJFJKGCFB_MPBCJIFPKKK_OFFSET))(this, a1);
		}

	};
