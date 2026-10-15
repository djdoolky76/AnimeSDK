#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeAimConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGODPEALDAB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEA8460)
#define HGODPEALDAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA8A30)
#define HGODPEALDAB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEA85D0)
#define HGODPEALDAB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEA7ED0)
#define HGODPEALDAB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEA8160)
#define HGODPEALDAB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEA8670)
#define HGODPEALDAB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEA86C0)
#define HGODPEALDAB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEA84A0)
#define HGODPEALDAB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEA8100)
#define HGODPEALDAB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEA82D0)
#define HGODPEALDAB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEA8530)
#define HGODPEALDAB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEA7E50)

inline static constexpr unsigned int HGODPEALDAB_TypeDefinitionIndex = 12843;

	class HGODPEALDAB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGODPEALDAB")->GetStaticField(0x1D7F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeAimConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeAimConfigRow*>**)UnitySDK::FromName("", "HGODPEALDAB")->GetStaticField(0x1D7F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HGODPEALDAB")->GetStaticField(0x1D800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGODPEALDAB")->GetStaticField(0x6B90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGODPEALDAB")->GetStaticField(0x6B91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeAimConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeAimConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeAimConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeAimConfigRow*>(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleCollegeAimConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleCollegeAimConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGODPEALDAB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGODPEALDAB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGODPEALDAB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGODPEALDAB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HGODPEALDAB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleCollegeAimConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleCollegeAimConfigRow*))((::PBYTE)hIl2Cpp + HGODPEALDAB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
