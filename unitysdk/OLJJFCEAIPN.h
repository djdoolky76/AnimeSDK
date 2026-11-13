#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDHCEBLPON.h"
#include "unitysdk/EOOIJAGNMHI.h"
class FECDLDCCHPN;
class GEBGILEDPPC;
namespace RPG::GameCore { class StageVolumeComponentData; }

#define OLJJFCEAIPN_CFNCFGLONLK_OFFSET UNITYSDK_OFFSET(0x178ACD10)
#define OLJJFCEAIPN_CTOR_OFFSET UNITYSDK_OFFSET(0x178AD0C0)
#define OLJJFCEAIPN_KBNJDPKPIKB_OFFSET UNITYSDK_OFFSET(0x178ACBD0)
#define OLJJFCEAIPN_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x178ACEE0)
#define OLJJFCEAIPN_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0x178ACB70)
#define OLJJFCEAIPN_MBLEHJELBCI_OFFSET UNITYSDK_OFFSET(0x178ACDF0)
#define OLJJFCEAIPN_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0x178ACA40)
#define OLJJFCEAIPN_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x178ACF70)
#define OLJJFCEAIPN_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0x178AD010)

inline static constexpr unsigned int OLJJFCEAIPN_TypeDefinitionIndex = 76122;

	class OLJJFCEAIPN : public ::ANDHCEBLPON
	{
	public:
		::GEBGILEDPPC* PGDHKMNLCJI; // 0x28
		::GEBGILEDPPC* CBOEHDENKIO; // 0x30
		::System::Single LNCLKJJDBIP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_CTOR_OFFSET))(this);
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void KGJNPNLKCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_KGJNPNLKCBF_OFFSET))(this);
		}

		::System::Boolean KBNJDPKPIKB(::FECDLDCCHPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_KBNJDPKPIKB_OFFSET))(this, a1);
		}

		::System::Void CFNCFGLONLK(::EOOIJAGNMHI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOOIJAGNMHI))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_CFNCFGLONLK_OFFSET))(this, a1);
		}

		::System::Void MBLEHJELBCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_MBLEHJELBCI_OFFSET))(this);
		}

		::System::Void KDPEDNKCMEB(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_KDPEDNKCMEB_OFFSET))(this, a1);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::System::Void OJJPFMBLLDJ(::FECDLDCCHPN* a1, ::FECDLDCCHPN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*, ::FECDLDCCHPN*, ::System::Single))((::PBYTE)hIl2Cpp + OLJJFCEAIPN_OJJPFMBLLDJ_OFFSET))(this, a1, a2, a3);
		}

	};
