#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AchievementDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJNFPEFGMLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD64470)
#define EJNFPEFGMLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD649F0)
#define EJNFPEFGMLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD645E0)
#define EJNFPEFGMLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD63F60)
#define EJNFPEFGMLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD641F0)
#define EJNFPEFGMLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD64680)
#define EJNFPEFGMLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD646D0)
#define EJNFPEFGMLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD644B0)
#define EJNFPEFGMLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD64190)
#define EJNFPEFGMLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD64320)
#define EJNFPEFGMLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD64540)
#define EJNFPEFGMLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD63EE0)

inline static constexpr unsigned int EJNFPEFGMLA_TypeDefinitionIndex = 10890;

	class EJNFPEFGMLA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>**)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>*(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AchievementDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AchievementDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJNFPEFGMLA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNFPEFGMLA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJNFPEFGMLA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJNFPEFGMLA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJNFPEFGMLA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AchievementDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AchievementDataRow*))((::PBYTE)hIl2Cpp + EJNFPEFGMLA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
