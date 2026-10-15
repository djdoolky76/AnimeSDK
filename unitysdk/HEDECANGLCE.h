#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOINNCPHPNP.h"
#include "unitysdk/EOOIJAGNMHI.h"
class EJOKIJIAKNH;
class FECDLDCCHPN;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEDECANGLCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C4B4F0)
#define HEDECANGLCE_CFNCFGLONLK_OFFSET UNITYSDK_OFFSET(0x15C4A270)
#define HEDECANGLCE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C49460)
#define HEDECANGLCE_IEFDLJPDCPK_1_OFFSET UNITYSDK_OFFSET(0x15C4A080)
#define HEDECANGLCE_IEFDLJPDCPK_OFFSET UNITYSDK_OFFSET(0x15C49EA0)
#define HEDECANGLCE_JNAOGFOPMDM_OFFSET UNITYSDK_OFFSET(0x15C49870)
#define HEDECANGLCE_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x15C4A5E0)
#define HEDECANGLCE_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0x15C49E60)
#define HEDECANGLCE_MBLEHJELBCI_OFFSET UNITYSDK_OFFSET(0x15C4A430)
#define HEDECANGLCE_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0x15C495A0)
#define HEDECANGLCE_MNCKAJEEHKM_OFFSET UNITYSDK_OFFSET(0x15C4A9A0)
#define HEDECANGLCE_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x15C4B120)
#define HEDECANGLCE_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0x15C4AA10)

	class HEDECANGLCE : public ::OOINNCPHPNP
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::EJOKIJIAKNH*>* KIHJDIECKOP; // 0x28
		::EJOKIJIAKNH* OFJPGOEDAKK; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTagContainer*, ::EJOKIJIAKNH*>* HLDHJBEJLPK; // 0x38
		static ::System::Collections::Generic::List_1<::KLEFGGIHGMI*>** StaticGet_PLMGFJDNADN()
		{
			return (::System::Collections::Generic::List_1<::KLEFGGIHGMI*>**)UnitySDK::FromName("", "HEDECANGLCE")->GetStaticField(0xCBE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDECANGLCE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEDECANGLCE_CCTOR_OFFSET))();
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + HEDECANGLCE_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void JNAOGFOPMDM(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + HEDECANGLCE_JNAOGFOPMDM_OFFSET))(this, a1);
		}

		::System::Void KGJNPNLKCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDECANGLCE_KGJNPNLKCBF_OFFSET))(this);
		}

		::System::Void IEFDLJPDCPK(::System::Collections::Generic::List_1<::FECDLDCCHPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FECDLDCCHPN*>*))((::PBYTE)hIl2Cpp + HEDECANGLCE_IEFDLJPDCPK_OFFSET))(this, a1);
		}

		::System::Void CFNCFGLONLK(::EOOIJAGNMHI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOOIJAGNMHI))((::PBYTE)hIl2Cpp + HEDECANGLCE_CFNCFGLONLK_OFFSET))(this, a1);
		}

		::System::Void MBLEHJELBCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDECANGLCE_MBLEHJELBCI_OFFSET))(this);
		}

		::System::Void KDPEDNKCMEB(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + HEDECANGLCE_KDPEDNKCMEB_OFFSET))(this, a1);
		}

		::System::Void IEFDLJPDCPK_1(::EJOKIJIAKNH* a1, ::System::Collections::Generic::List_1<::FECDLDCCHPN*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EJOKIJIAKNH*, ::System::Collections::Generic::List_1<::FECDLDCCHPN*>*))((::PBYTE)hIl2Cpp + HEDECANGLCE_IEFDLJPDCPK_1_OFFSET))(this, a1, a2);
		}

		::System::Void OJJPFMBLLDJ(::FECDLDCCHPN* a1, ::FECDLDCCHPN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*, ::FECDLDCCHPN*, ::System::Single))((::PBYTE)hIl2Cpp + HEDECANGLCE_OJJPFMBLLDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + HEDECANGLCE_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::EJOKIJIAKNH* MNCKAJEEHKM()
		{
			return ((::EJOKIJIAKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDECANGLCE_MNCKAJEEHKM_OFFSET))(this);
		}

	};
