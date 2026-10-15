#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLELOFIJDGK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D077700)
#define KLELOFIJDGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D077CD0)
#define KLELOFIJDGK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D077870)
#define KLELOFIJDGK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D077170)
#define KLELOFIJDGK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D077400)
#define KLELOFIJDGK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D077910)
#define KLELOFIJDGK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D077960)
#define KLELOFIJDGK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D077740)
#define KLELOFIJDGK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0773A0)
#define KLELOFIJDGK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D077570)
#define KLELOFIJDGK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0777D0)
#define KLELOFIJDGK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0770F0)

inline static constexpr unsigned int KLELOFIJDGK_TypeDefinitionIndex = 13785;

	class KLELOFIJDGK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*>**)UnitySDK::FromName("", "KLELOFIJDGK")->GetStaticField(0x35E20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLELOFIJDGK")->GetStaticField(0x35E28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLELOFIJDGK")->GetStaticField(0x35E30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLELOFIJDGK")->GetStaticField(0xAE30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLELOFIJDGK")->GetStaticField(0xAE31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleAvatarSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleAvatarSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLELOFIJDGK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLELOFIJDGK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLELOFIJDGK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLELOFIJDGK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLELOFIJDGK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleAvatarSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarSkillConfigRow*))((::PBYTE)hIl2Cpp + KLELOFIJDGK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
