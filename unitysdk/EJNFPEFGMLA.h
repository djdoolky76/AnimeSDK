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

#define EJNFPEFGMLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD924B0)
#define EJNFPEFGMLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD92A30)
#define EJNFPEFGMLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD92620)
#define EJNFPEFGMLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD91FA0)
#define EJNFPEFGMLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD92230)
#define EJNFPEFGMLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD926C0)
#define EJNFPEFGMLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD92710)
#define EJNFPEFGMLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD924F0)
#define EJNFPEFGMLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD921D0)
#define EJNFPEFGMLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD92360)
#define EJNFPEFGMLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD92580)
#define EJNFPEFGMLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD91F20)

inline static constexpr unsigned int EJNFPEFGMLA_TypeDefinitionIndex = 10890;

	class EJNFPEFGMLA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>**)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0x1B80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0xA00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJNFPEFGMLA")->GetStaticField(0xA01);
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
