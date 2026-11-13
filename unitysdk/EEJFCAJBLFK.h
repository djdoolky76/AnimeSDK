#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class IMEFEGGEMIJ;
class NDAHMHCJMIP;
class PGBLBOJBDGG;
namespace RPG::GameCore { class ElfBehaviorStateConfig; }
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfBuffConfig; }
namespace RPG::GameCore { class ElfDailyWaveConfig; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class ElfSpecialEventConfig; }
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameStateTreeConfig; }
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEJFCAJBLFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A319710)
#define EEJFCAJBLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A317580)
#define EEJFCAJBLFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A318CA0)
#define EEJFCAJBLFK_FLIEMBIODAG_OFFSET UNITYSDK_OFFSET(0x1A319310)
#define EEJFCAJBLFK_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1A3196F0)
#define EEJFCAJBLFK_HDOEBIBNOKI_1_OFFSET UNITYSDK_OFFSET(0x1A319650)
#define EEJFCAJBLFK_HDOEBIBNOKI_OFFSET UNITYSDK_OFFSET(0x1A3194D0)
#define EEJFCAJBLFK_HKPNLHOBIHH_OFFSET UNITYSDK_OFFSET(0x1A3181D0)
#define EEJFCAJBLFK_IHJPKOCMHBD_OFFSET UNITYSDK_OFFSET(0x1A3184E0)
#define EEJFCAJBLFK_KJBCLBAMCKA_OFFSET UNITYSDK_OFFSET(0x1A3185E0)
#define EEJFCAJBLFK_LPPJLNPDFEE_OFFSET UNITYSDK_OFFSET(0x1A3186E0)
#define EEJFCAJBLFK_NENHCOHIKEA_OFFSET UNITYSDK_OFFSET(0x1A318FA0)
#define EEJFCAJBLFK_NJNGBKBAMAA_OFFSET UNITYSDK_OFFSET(0x1A3177A0)
#define EEJFCAJBLFK_OKMMIFOOLMJ_OFFSET UNITYSDK_OFFSET(0x1A3188E0)
#define EEJFCAJBLFK_OKOCHDDPLLA_OFFSET UNITYSDK_OFFSET(0x1A318280)
#define EEJFCAJBLFK_PFFDFEMIJGI_OFFSET UNITYSDK_OFFSET(0x1A317EC0)
#define EEJFCAJBLFK_PIKLKKOPCEM_OFFSET UNITYSDK_OFFSET(0x1A319160)
#define EEJFCAJBLFK_PKNEAPBEJLD_OFFSET UNITYSDK_OFFSET(0x1A3190C0)
#define EEJFCAJBLFK_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1A319700)

inline static constexpr unsigned int EEJFCAJBLFK_TypeDefinitionIndex = 79586;

	class EEJFCAJBLFK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*>* LJKKGBBEIMP; // 0x10
		::RPG::GameCore::ElfDailyWaveConfig* GPCPFJNGAJJ; // 0x18
		::RPG::GameCore::ElfBuffConfig* MBOKKHFKBAJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* MFPIDNOGPOF; // 0x28
		::RPG::GameCore::LittleGameStateTreeConfig* IELHPOFHKPG; // 0x30
		::IMEFEGGEMIJ* HIHNBLKIAAL; // 0x38
		::RPG::GameCore::LittleGameStateTreeConfig* OFGOJIFBLBM; // 0x40
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x48
		::RPG::GameCore::LittleGameStateTreeConfig* LDJLEMJMLJJ; // 0x50
		::RPG::GameCore::ElfRestaurantGameConfig* _GameConfig_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::RPG::GameCore::RestaurantEventRewardRow*>* OPDJKHPKKNG; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfBehaviorStateConfig*>* GIGGFDAHCAC; // 0x68
		::BNLHGENFEHG* PDENFEFCAGN; // 0x70
		::RPG::GameCore::ElfBehaviorStateConfig* HLFCGABNIKO; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NDAHMHCJMIP*>* HJMNMBENFEN; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantSuperEventType, ::RPG::GameCore::LittleGameEntityConfig*>* CKKDCOPDHHK; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* LLMDPDFEFNE; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* GOPEKIINHHD; // 0x98
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0xA0
		::System::UInt32 KJHIDGFLLGC; // 0xA8
		static ::System::String** StaticGet_CMDFEEFNFIP()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x72A30);
		}

		static ::System::String** StaticGet_CPCJDNNAKCJ()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x72A38);
		}

		static ::System::String** StaticGet_GKCCFPDDFML()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x72A40);
		}

		static ::System::String** StaticGet_BKEODCGPDBE()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x72A48);
		}

		::System::Void _ctor(::BNLHGENFEHG* a1, ::PGBLBOJBDGG* a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BNLHGENFEHG*, ::PGBLBOJBDGG*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEJFCAJBLFK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean NENHCOHIKEA(::System::String* a1, ::RPG::GameCore::ElfBuff* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::ElfBuff*))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_NENHCOHIKEA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ElfSuperEventTypeConfig* PKNEAPBEJLD(::RPG::GameCore::RestaurantSuperEventType a1)
		{
			return ((::RPG::GameCore::ElfSuperEventTypeConfig*(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_PKNEAPBEJLD_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElfWaveCustomerConfig* PIKLKKOPCEM()
		{
			return ((::RPG::GameCore::ElfWaveCustomerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_PIKLKKOPCEM_OFFSET))(this);
		}

		::RPG::GameCore::ElfBehaviorStateConfig* FLIEMBIODAG(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ElfBehaviorStateConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_FLIEMBIODAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElfSpecialEventConfig* HDOEBIBNOKI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ElfSpecialEventConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_HDOEBIBNOKI_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElfSpecialEventConfig* HDOEBIBNOKI_1(::System::String* a1)
		{
			return ((::RPG::GameCore::ElfSpecialEventConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_HDOEBIBNOKI_1_OFFSET))(this, a1);
		}

		::System::Void NJNGBKBAMAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_NJNGBKBAMAA_OFFSET))(this);
		}

		::System::Void PFFDFEMIJGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_PFFDFEMIJGI_OFFSET))(this);
		}

		::System::Void HKPNLHOBIHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_HKPNLHOBIHH_OFFSET))(this);
		}

		::System::Void OKOCHDDPLLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_OKOCHDDPLLA_OFFSET))(this);
		}

		::System::Void IHJPKOCMHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_IHJPKOCMHBD_OFFSET))(this);
		}

		::System::Void KJBCLBAMCKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_KJBCLBAMCKA_OFFSET))(this);
		}

		::System::Void LPPJLNPDFEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_LPPJLNPDFEE_OFFSET))(this);
		}

		::System::Void OKMMIFOOLMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_OKMMIFOOLMJ_OFFSET))(this);
		}

		::RPG::GameCore::ElfRestaurantGameConfig* get_GameConfig()
		{
			return ((::RPG::GameCore::ElfRestaurantGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::GameCore::ElfRestaurantGameConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfRestaurantGameConfig*))((::PBYTE)hIl2Cpp + EEJFCAJBLFK_SET_GAMECONFIG_OFFSET))(this, a1);
		}

	};
