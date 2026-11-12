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

#define EEJFCAJBLFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x147F11C0)
#define EEJFCAJBLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x147EF030)
#define EEJFCAJBLFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147F0750)
#define EEJFCAJBLFK_FLIEMBIODAG_OFFSET UNITYSDK_OFFSET(0x147F0DC0)
#define EEJFCAJBLFK_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x147F11A0)
#define EEJFCAJBLFK_HDOEBIBNOKI_1_OFFSET UNITYSDK_OFFSET(0x147F1100)
#define EEJFCAJBLFK_HDOEBIBNOKI_OFFSET UNITYSDK_OFFSET(0x147F0F80)
#define EEJFCAJBLFK_HKPNLHOBIHH_OFFSET UNITYSDK_OFFSET(0x147EFC80)
#define EEJFCAJBLFK_IHJPKOCMHBD_OFFSET UNITYSDK_OFFSET(0x147EFF90)
#define EEJFCAJBLFK_KJBCLBAMCKA_OFFSET UNITYSDK_OFFSET(0x147F0090)
#define EEJFCAJBLFK_LPPJLNPDFEE_OFFSET UNITYSDK_OFFSET(0x147F0190)
#define EEJFCAJBLFK_NENHCOHIKEA_OFFSET UNITYSDK_OFFSET(0x147F0A50)
#define EEJFCAJBLFK_NJNGBKBAMAA_OFFSET UNITYSDK_OFFSET(0x147EF250)
#define EEJFCAJBLFK_OKMMIFOOLMJ_OFFSET UNITYSDK_OFFSET(0x147F0390)
#define EEJFCAJBLFK_OKOCHDDPLLA_OFFSET UNITYSDK_OFFSET(0x147EFD30)
#define EEJFCAJBLFK_PFFDFEMIJGI_OFFSET UNITYSDK_OFFSET(0x147EF970)
#define EEJFCAJBLFK_PIKLKKOPCEM_OFFSET UNITYSDK_OFFSET(0x147F0C10)
#define EEJFCAJBLFK_PKNEAPBEJLD_OFFSET UNITYSDK_OFFSET(0x147F0B70)
#define EEJFCAJBLFK_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x147F11B0)

inline static constexpr unsigned int EEJFCAJBLFK_TypeDefinitionIndex = 79587;

	class EEJFCAJBLFK : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::RPG::GameCore::ElfBehaviorStateConfig* HLFCGABNIKO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*>* LJKKGBBEIMP; // 0x20
		::RPG::GameCore::LittleGameStateTreeConfig* OFGOJIFBLBM; // 0x28
		::RPG::GameCore::LittleGameStateTreeConfig* LDJLEMJMLJJ; // 0x30
		::RPG::GameCore::ElfBuffConfig* MBOKKHFKBAJ; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfBehaviorStateConfig*>* GIGGFDAHCAC; // 0x40
		::RPG::GameCore::ElfRestaurantGameConfig* _GameConfig_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NDAHMHCJMIP*>* HJMNMBENFEN; // 0x50
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x58
		::RPG::GameCore::ElfDailyWaveConfig* GPCPFJNGAJJ; // 0x60
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x68
		::RPG::GameCore::LittleGameStateTreeConfig* IELHPOFHKPG; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* GOPEKIINHHD; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* LLMDPDFEFNE; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::RPG::GameCore::RestaurantEventRewardRow*>* OPDJKHPKKNG; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* MFPIDNOGPOF; // 0x90
		::IMEFEGGEMIJ* HIHNBLKIAAL; // 0x98
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantSuperEventType, ::RPG::GameCore::LittleGameEntityConfig*>* CKKDCOPDHHK; // 0xA0
		::System::UInt32 KJHIDGFLLGC; // 0xA8
		static ::System::String** StaticGet_BKEODCGPDBE()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x73610);
		}

		static ::System::String** StaticGet_CPCJDNNAKCJ()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x73618);
		}

		static ::System::String** StaticGet_GKCCFPDDFML()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x73620);
		}

		static ::System::String** StaticGet_CMDFEEFNFIP()
		{
			return (::System::String**)UnitySDK::FromName("", "EEJFCAJBLFK")->GetStaticField(0x73628);
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
