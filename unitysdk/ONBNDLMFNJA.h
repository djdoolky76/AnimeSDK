#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestartBattleBlackListRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONBNDLMFNJA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D29E630)
#define ONBNDLMFNJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D29F180)
#define ONBNDLMFNJA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D29E9D0)
#define ONBNDLMFNJA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D29E670)
#define ONBNDLMFNJA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D29EEC0)
#define ONBNDLMFNJA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D29EA70)
#define ONBNDLMFNJA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D29EAC0)
#define ONBNDLMFNJA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D29E8A0)
#define ONBNDLMFNJA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D29EE60)
#define ONBNDLMFNJA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D29F030)
#define ONBNDLMFNJA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D29E930)
#define ONBNDLMFNJA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D29EDE0)

inline static constexpr unsigned int ONBNDLMFNJA_TypeDefinitionIndex = 15176;

	class ONBNDLMFNJA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONBNDLMFNJA")->GetStaticField(0x39EC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ONBNDLMFNJA")->GetStaticField(0x39EC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestartBattleBlackListRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestartBattleBlackListRow*>**)UnitySDK::FromName("", "ONBNDLMFNJA")->GetStaticField(0x39ED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONBNDLMFNJA")->GetStaticField(0xC5B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONBNDLMFNJA")->GetStaticField(0xC5B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONBNDLMFNJA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONBNDLMFNJA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONBNDLMFNJA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestartBattleBlackListRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestartBattleBlackListRow*))((::PBYTE)hIl2Cpp + ONBNDLMFNJA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestartBattleBlackListRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestartBattleBlackListRow*>*(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestartBattleBlackListRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestartBattleBlackListRow*>(*)())((::PBYTE)hIl2Cpp + ONBNDLMFNJA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestartBattleBlackListRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestartBattleBlackListRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONBNDLMFNJA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
