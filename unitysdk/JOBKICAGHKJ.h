#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VolumeType.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class StageVolumeConfigV2; }

#define JOBKICAGHKJ_BDBDBFJOIMF_OFFSET UNITYSDK_OFFSET(0x3C3AFB0)
#define JOBKICAGHKJ_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x3C3B310)
#define JOBKICAGHKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define JOBKICAGHKJ_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define JOBKICAGHKJ_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define JOBKICAGHKJ_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define JOBKICAGHKJ_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C3B380)
#define JOBKICAGHKJ_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x3C3B030)
#define JOBKICAGHKJ_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x3C3B2A0)
#define JOBKICAGHKJ_HMOIGKDGLFA_OFFSET UNITYSDK_OFFSET(0x3C3B150)
#define JOBKICAGHKJ_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x3C3B100)
#define JOBKICAGHKJ_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define JOBKICAGHKJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x3C3B0D0)
#define JOBKICAGHKJ_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x3C3B330)
#define JOBKICAGHKJ_KNFAOOJKHGG_OFFSET UNITYSDK_OFFSET(0x3C3AFE0)
#define JOBKICAGHKJ_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x3C3B2C0)
#define JOBKICAGHKJ_LKLDEPMMKAA_OFFSET UNITYSDK_OFFSET(0x3C3B250)
#define JOBKICAGHKJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x3C38DC0)
#define JOBKICAGHKJ_NKEOKJIDNEO_OFFSET UNITYSDK_OFFSET(0x3C3AF60)
#define JOBKICAGHKJ_OPAIGBPONDK_OFFSET UNITYSDK_OFFSET(0x3C3AF10)
#define JOBKICAGHKJ_PIPMBIPJPJC_OFFSET UNITYSDK_OFFSET(0x3C3B1E0)
#define JOBKICAGHKJ_PKFCDNFPPEK_OFFSET UNITYSDK_OFFSET(0x3C3B080)
#define JOBKICAGHKJ_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x3C3A600)
#define JOBKICAGHKJ_PNHGEDDFHGJ_OFFSET UNITYSDK_OFFSET(0x3C3B190)

	struct alignas(8) JOBKICAGHKJ
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_DISPOSE_OFFSET))(this);
		}

		::BMAGJGLPIIF OPAIGBPONDK()
		{
			return ((::BMAGJGLPIIF(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_OPAIGBPONDK_OFFSET))(this);
		}

		::System::Void NKEOKJIDNEO(::BMAGJGLPIIF a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_NKEOKJIDNEO_OFFSET))(this, a1);
		}

		::System::Single BDBDBFJOIMF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_BDBDBFJOIMF_OFFSET))(this);
		}

		::System::Void KNFAOOJKHGG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_KNFAOOJKHGG_OFFSET))(this, a1);
		}

		::JPCONPIKIEK MLMGEFIOION()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::Int32 PLNCKLJOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Void PKFCDNFPPEK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_PKFCDNFPPEK_OFFSET))(this, a1);
		}

		::RPG::GameCore::VolumeType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::VolumeType(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::RPG::GameCore::VolumeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VolumeType))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector2> HMOIGKDGLFA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_HMOIGKDGLFA_OFFSET))(this);
		}

		::System::Void PNHGEDDFHGJ(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector2> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector2>))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_PNHGEDDFHGJ_OFFSET))(this, a1);
		}

		::RPG::MVector2 PIPMBIPJPJC()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_PIPMBIPJPJC_OFFSET))(this);
		}

		::System::Void LKLDEPMMKAA(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_LKLDEPMMKAA_OFFSET))(this, a1);
		}

		::RPG::MVector3 HHMFILFAMNA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::RPG::MVector3 CECMCADBMDE()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageVolumeConfigV2* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::StageVolumeConfigV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKICAGHKJ_GFLKJLOFIPA_OFFSET))(this);
		}

	};
