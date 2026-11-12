#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonGridBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFGEEKIECKJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E46EC80)
#define OFGEEKIECKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46F250)
#define OFGEEKIECKJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E46EDF0)
#define OFGEEKIECKJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E46E6F0)
#define OFGEEKIECKJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E46E980)
#define OFGEEKIECKJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E46EE90)
#define OFGEEKIECKJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E46EEE0)
#define OFGEEKIECKJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E46ECC0)
#define OFGEEKIECKJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E46E920)
#define OFGEEKIECKJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E46EAF0)
#define OFGEEKIECKJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E46ED50)
#define OFGEEKIECKJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E46E670)

inline static constexpr unsigned int OFGEEKIECKJ_TypeDefinitionIndex = 12598;

	class OFGEEKIECKJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*>**)UnitySDK::FromName("", "OFGEEKIECKJ")->GetStaticField(0x4F920);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OFGEEKIECKJ")->GetStaticField(0x4F928);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFGEEKIECKJ")->GetStaticField(0x4F930);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFGEEKIECKJ")->GetStaticField(0xFD70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFGEEKIECKJ")->GetStaticField(0xFD71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonGridBuffConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonGridBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFGEEKIECKJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGEEKIECKJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OFGEEKIECKJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFGEEKIECKJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OFGEEKIECKJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonGridBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonGridBuffConfigRow*))((::PBYTE)hIl2Cpp + OFGEEKIECKJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
