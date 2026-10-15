#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJPHHFHBAJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD93320)
#define EJPHHFHBAJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD938F0)
#define EJPHHFHBAJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD93490)
#define EJPHHFHBAJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD92D90)
#define EJPHHFHBAJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD93020)
#define EJPHHFHBAJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD93530)
#define EJPHHFHBAJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD93580)
#define EJPHHFHBAJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD93360)
#define EJPHHFHBAJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD92FC0)
#define EJPHHFHBAJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD93190)
#define EJPHHFHBAJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD933F0)
#define EJPHHFHBAJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD92D10)

	class EJPHHFHBAJF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJPHHFHBAJF")->GetStaticField(0x1D80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatQuickFunctionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatQuickFunctionConfigRow*>**)UnitySDK::FromName("", "EJPHHFHBAJF")->GetStaticField(0x1D88);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EJPHHFHBAJF")->GetStaticField(0x1D90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJPHHFHBAJF")->GetStaticField(0x1C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJPHHFHBAJF")->GetStaticField(0x1C51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatQuickFunctionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatQuickFunctionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatQuickFunctionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatQuickFunctionConfigRow*>(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamChatQuickFunctionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PamChatQuickFunctionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJPHHFHBAJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJPHHFHBAJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJPHHFHBAJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJPHHFHBAJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJPHHFHBAJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamChatQuickFunctionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamChatQuickFunctionConfigRow*))((::PBYTE)hIl2Cpp + EJPHHFHBAJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
