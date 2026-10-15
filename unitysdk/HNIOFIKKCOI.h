#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOOPPKCFNLM_CatStatType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleConditionType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleExtremType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleParamType.h"
#include "unitysdk/System/Object.h"
class NOLCFJNOKPC;
class PBGNKMMDBGD;
class PNHBCBIDFBE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HNIOFIKKCOI_ABDBICIAHJK_OFFSET UNITYSDK_OFFSET(0x1C670D20)
#define HNIOFIKKCOI_AFAEECCCOLM_OFFSET UNITYSDK_OFFSET(0x1C670FD0)
#define HNIOFIKKCOI_AMCOHOCDKDB_OFFSET UNITYSDK_OFFSET(0x1C6713C0)
#define HNIOFIKKCOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C670580)
#define HNIOFIKKCOI_DAICFPGPLNG_OFFSET UNITYSDK_OFFSET(0x1C671EB0)
#define HNIOFIKKCOI_DDINCEKADGP_OFFSET UNITYSDK_OFFSET(0x1C670670)
#define HNIOFIKKCOI_DEOGLBDPAME_OFFSET UNITYSDK_OFFSET(0x1C670C70)
#define HNIOFIKKCOI_DGIGJNBKOCJ_OFFSET UNITYSDK_OFFSET(0x1C6739B0)
#define HNIOFIKKCOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C670620)
#define HNIOFIKKCOI_DMGIIOPBMEP_OFFSET UNITYSDK_OFFSET(0x1C6725A0)
#define HNIOFIKKCOI_FIIFIIFEJAH_OFFSET UNITYSDK_OFFSET(0x1C671AE0)
#define HNIOFIKKCOI_HMGCEBHCCLG_OFFSET UNITYSDK_OFFSET(0x1C672E30)
#define HNIOFIKKCOI_IAEKDNGGBEN_OFFSET UNITYSDK_OFFSET(0x1C674030)
#define HNIOFIKKCOI_ICLNMLMEHDO_OFFSET UNITYSDK_OFFSET(0x1C671840)
#define HNIOFIKKCOI_JFELDCADJGA_OFFSET UNITYSDK_OFFSET(0x1C673DB0)
#define HNIOFIKKCOI_JHBGCMBACJL_OFFSET UNITYSDK_OFFSET(0x1C673210)
#define HNIOFIKKCOI_LMINEIDKPJK_OFFSET UNITYSDK_OFFSET(0x1C670E90)
#define HNIOFIKKCOI_MOFDOEKNKDC_OFFSET UNITYSDK_OFFSET(0x1C672070)

	class HNIOFIKKCOI : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NOLCFJNOKPC*>* PNMCGBIKDMA; // 0x18
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_DISPOSE_OFFSET))(this);
		}

		::System::Void DDINCEKADGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_DDINCEKADGP_OFFSET))(this);
		}

		::System::String* ABDBICIAHJK(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_ABDBICIAHJK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DEOGLBDPAME(::RPG::GameCore::CakeRaceTitleRow* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::CakeRaceTitleRow*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_DEOGLBDPAME_OFFSET))(this, a1);
		}

		::System::Void AFAEECCCOLM(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::RPG::GameCore::CakeRaceTitleExtremType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::RPG::GameCore::CakeRaceTitleExtremType))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_AFAEECCCOLM_OFFSET))(this, a1, a2);
		}

		::System::Void AMCOHOCDKDB(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::RPG::GameCore::CakeRaceTitleConditionType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::RPG::GameCore::CakeRaceTitleConditionType, ::System::UInt32))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_AMCOHOCDKDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ICLNMLMEHDO(::System::UInt32 a1, ::RPG::GameCore::CakeRaceTitleConditionType a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeRaceTitleConditionType, ::System::UInt32))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_ICLNMLMEHDO_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LMINEIDKPJK(::RPG::GameCore::CakeRaceTitleParamType a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::CakeRaceTitleParamType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_LMINEIDKPJK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DGIGJNBKOCJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_DGIGJNBKOCJ_OFFSET))(this);
		}

		::System::Void JFELDCADJGA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_JFELDCADJGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FIIFIIFEJAH(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_FIIFIIFEJAH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DAICFPGPLNG(::GOOPPKCFNLM_CatStatType a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::GOOPPKCFNLM_CatStatType))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_DAICFPGPLNG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DMGIIOPBMEP(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_DMGIIOPBMEP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MOFDOEKNKDC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_MOFDOEKNKDC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HMGCEBHCCLG(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_HMGCEBHCCLG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* JHBGCMBACJL(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_JHBGCMBACJL_OFFSET))(this, a1);
		}

		::System::Void IAEKDNGGBEN(::Google::Protobuf::Collections::RepeatedField_1<::PNHBCBIDFBE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::PNHBCBIDFBE*>*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI_IAEKDNGGBEN_OFFSET))(this, a1);
		}

	};
