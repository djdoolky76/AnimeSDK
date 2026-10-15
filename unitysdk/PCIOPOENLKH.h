#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIHFIHMEIB;
namespace RPG::Client { class ClockParkActionDataItem; }
namespace RPG::Client { class ClockParkAttributeInfo; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCIOPOENLKH_BFFNDJAKKKP_OFFSET UNITYSDK_OFFSET(0xBFFA3C0)
#define PCIOPOENLKH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFFB1C0)
#define PCIOPOENLKH_CPJBOIAABOC_OFFSET UNITYSDK_OFFSET(0xBFFAA80)
#define PCIOPOENLKH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFB160)
#define PCIOPOENLKH_EHMHKEJIHCB_OFFSET UNITYSDK_OFFSET(0xBFF9B60)
#define PCIOPOENLKH_EOAGNGPLECL_OFFSET UNITYSDK_OFFSET(0xBFF9E70)
#define PCIOPOENLKH_FGENHMAEACK_OFFSET UNITYSDK_OFFSET(0xBFF9AD0)
#define PCIOPOENLKH_HFPGNPOPEDC_OFFSET UNITYSDK_OFFSET(0xBFFA1B0)
#define PCIOPOENLKH_KJAEOCDLNDL_OFFSET UNITYSDK_OFFSET(0xBFFAE10)
#define PCIOPOENLKH_KNMKABAHANI_OFFSET UNITYSDK_OFFSET(0xBFFA7B0)
#define PCIOPOENLKH_LBBDMJFAENP_OFFSET UNITYSDK_OFFSET(0xBFFA010)
#define PCIOPOENLKH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBFFB110)

inline static constexpr unsigned int PCIOPOENLKH_TypeDefinitionIndex = 61475;

	class PCIOPOENLKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* NAOBEKKJEAI; // 0x10
		::RPG::Client::ClockParkEffectResult* DMEHDJIAAOF; // 0x18
		::RPG::Client::ClockParkEffectResult* MCAKBCOEMNK; // 0x20
		static ::RPG::Client::ClockParkEffectResult** StaticGet_GBMCOPHGNLH()
		{
			return (::RPG::Client::ClockParkEffectResult**)UnitySDK::FromName("", "PCIOPOENLKH")->GetStaticField(0x696E0);
		}

		static ::RPG::Client::ClockParkEffectResult** StaticGet_JGGFEMKMIFN()
		{
			return (::RPG::Client::ClockParkEffectResult**)UnitySDK::FromName("", "PCIOPOENLKH")->GetStaticField(0x696E8);
		}

		static ::RPG::Client::ClockParkEffectResult** StaticGet_LBOPBOPGLKH()
		{
			return (::RPG::Client::ClockParkEffectResult**)UnitySDK::FromName("", "PCIOPOENLKH")->GetStaticField(0x696F0);
		}

		static ::HDIHFIHMEIB** StaticGet_BMFCPIOJLPM()
		{
			return (::HDIHFIHMEIB**)UnitySDK::FromName("", "PCIOPOENLKH")->GetStaticField(0x696F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIOPOENLKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCIOPOENLKH_CCTOR_OFFSET))();
		}

		static ::System::Void FGENHMAEACK(::HDIHFIHMEIB* a1)
		{
			return ((::System::Void(*)(::HDIHFIHMEIB*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_FGENHMAEACK_OFFSET))(a1);
		}

		::System::Void EHMHKEJIHCB(::RPG::Client::ClockParkCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_EHMHKEJIHCB_OFFSET))(this, a1);
		}

		::System::Void HFPGNPOPEDC(::RPG::Client::ClockParkAttributeInfo* a1, ::RPG::Client::ClockParkBuffInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_HFPGNPOPEDC_OFFSET))(this, a1, a2);
		}

		::System::Void CPJBOIAABOC(::RPG::Client::ClockParkCardItem* a1, ::RPG::Client::ClockParkEffectResult* a2, ::RPG::Client::ClockParkEffectResult* a3, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* a4, ::RPG::Client::ClockParkAttributeInfo* a5, ::RPG::Client::ClockParkBuffInfo* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkEffectResult*, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>*, ::RPG::Client::ClockParkAttributeInfo*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_CPJBOIAABOC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIOPOENLKH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void EOAGNGPLECL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIOPOENLKH_EOAGNGPLECL_OFFSET))(this);
		}

		::System::Void LBBDMJFAENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIOPOENLKH_LBBDMJFAENP_OFFSET))(this);
		}

		::RPG::Client::ClockParkEffectResult* BFFNDJAKKKP(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* a1, ::RPG::Client::ClockParkBuffInfo* a2)
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_BFFNDJAKKKP_OFFSET))(this, a1, a2);
		}

		::System::Void KNMKABAHANI(::RPG::Client::ClockParkEffectResult* a1, ::RPG::Client::ClockParkAttributeInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_KNMKABAHANI_OFFSET))(this, a1, a2);
		}

		::System::Void KJAEOCDLNDL(::RPG::Client::ClockParkEffectResult* a1, ::RPG::Client::ClockParkEffectResult* a2, ::RPG::Client::ClockParkAttributeInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + PCIOPOENLKH_KJAEOCDLNDL_OFFSET))(this, a1, a2, a3);
		}

	};
