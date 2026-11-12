#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamRecommendRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIGPGBDFIDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4FC3B0)
#define PIGPGBDFIDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC930)
#define PIGPGBDFIDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4FC520)
#define PIGPGBDFIDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4FBE60)
#define PIGPGBDFIDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4FC0F0)
#define PIGPGBDFIDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4FC5C0)
#define PIGPGBDFIDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4FC610)
#define PIGPGBDFIDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4FC3F0)
#define PIGPGBDFIDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4FC090)
#define PIGPGBDFIDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4FC220)
#define PIGPGBDFIDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4FC480)
#define PIGPGBDFIDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4FBDE0)

inline static constexpr unsigned int PIGPGBDFIDB_TypeDefinitionIndex = 11767;

	class PIGPGBDFIDB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PIGPGBDFIDB")->GetStaticField(0x392E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>**)UnitySDK::FromName("", "PIGPGBDFIDB")->GetStaticField(0x392E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PIGPGBDFIDB")->GetStaticField(0x392F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PIGPGBDFIDB")->GetStaticField(0xC7B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PIGPGBDFIDB")->GetStaticField(0xC7B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>*(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTeamRecommendRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTeamRecommendRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PIGPGBDFIDB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGPGBDFIDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PIGPGBDFIDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIGPGBDFIDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PIGPGBDFIDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTeamRecommendRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamRecommendRow*))((::PBYTE)hIl2Cpp + PIGPGBDFIDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
