#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CCDMGPLMKHJ;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNHFFFHMADB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC86D40)
#define CNHFFFHMADB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC879F0)
#define CNHFFFHMADB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC870E0)
#define CNHFFFHMADB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC86D80)
#define CNHFFFHMADB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC87670)
#define CNHFFFHMADB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC87180)
#define CNHFFFHMADB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC871D0)
#define CNHFFFHMADB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC86FB0)
#define CNHFFFHMADB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC87610)
#define CNHFFFHMADB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC877E0)
#define CNHFFFHMADB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC87040)
#define CNHFFFHMADB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC87590)

inline static constexpr unsigned int CNHFFFHMADB_TypeDefinitionIndex = 15412;

	class CNHFFFHMADB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNHFFFHMADB")->GetStaticField(0x3F510);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNHFFFHMADB")->GetStaticField(0x3F518);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CCDMGPLMKHJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CCDMGPLMKHJ*>**)UnitySDK::FromName("", "CNHFFFHMADB")->GetStaticField(0x3F520);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNHFFFHMADB")->GetStaticField(0xEEF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNHFFFHMADB")->GetStaticField(0xEEF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CNHFFFHMADB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNHFFFHMADB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CNHFFFHMADB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CCDMGPLMKHJ* a1)
		{
			return ((::System::Void(*)(::CCDMGPLMKHJ*))((::PBYTE)hIl2Cpp + CNHFFFHMADB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CCDMGPLMKHJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CCDMGPLMKHJ*>*(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CCDMGPLMKHJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CCDMGPLMKHJ*>(*)())((::PBYTE)hIl2Cpp + CNHFFFHMADB_FPHGMAMDFHE_OFFSET))();
		}

		static ::CCDMGPLMKHJ* LMBKNCAIDLC(::RPG::GameCore::UpgradeAvatarSubRelicType a1, ::RPG::GameCore::CombatPowerRelicRarityType a2, ::System::UInt32 a3, ::RPG::GameCore::RelicType a4)
		{
			return ((::CCDMGPLMKHJ*(*)(::RPG::GameCore::UpgradeAvatarSubRelicType, ::RPG::GameCore::CombatPowerRelicRarityType, ::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CNHFFFHMADB_LMBKNCAIDLC_OFFSET))(a1, a2, a3, a4);
		}

	};
