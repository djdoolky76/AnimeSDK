#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeCostRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKCEIELECDH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDCFBE0)
#define FKCEIELECDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD01B0)
#define FKCEIELECDH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDCFD50)
#define FKCEIELECDH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDCF650)
#define FKCEIELECDH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDCF8E0)
#define FKCEIELECDH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDCFDF0)
#define FKCEIELECDH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDCFE40)
#define FKCEIELECDH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDCFC20)
#define FKCEIELECDH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDCF880)
#define FKCEIELECDH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDCFA50)
#define FKCEIELECDH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDCFCB0)
#define FKCEIELECDH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDCF5D0)

inline static constexpr unsigned int FKCEIELECDH_TypeDefinitionIndex = 11684;

	class FKCEIELECDH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FKCEIELECDH")->GetStaticField(0x124C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FKCEIELECDH")->GetStaticField(0x124C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*>**)UnitySDK::FromName("", "FKCEIELECDH")->GetStaticField(0x124D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FKCEIELECDH")->GetStaticField(0x3C00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FKCEIELECDH")->GetStaticField(0x3C01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*>*(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*>(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKCEIELECDH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCEIELECDH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKCEIELECDH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKCEIELECDH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FKCEIELECDH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveAvatarUpgradeCostRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*))((::PBYTE)hIl2Cpp + FKCEIELECDH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
