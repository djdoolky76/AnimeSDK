#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamVoiceAtlasBindingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMPECCBGJGP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE6C8E0)
#define GMPECCBGJGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE6CEE0)
#define GMPECCBGJGP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE6CA50)
#define GMPECCBGJGP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE6C310)
#define GMPECCBGJGP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE6C5A0)
#define GMPECCBGJGP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE6CAF0)
#define GMPECCBGJGP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE6CB40)
#define GMPECCBGJGP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE6C920)
#define GMPECCBGJGP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE6C540)
#define GMPECCBGJGP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE6C710)
#define GMPECCBGJGP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE6C9B0)
#define GMPECCBGJGP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE6C290)

inline static constexpr unsigned int GMPECCBGJGP_TypeDefinitionIndex = 12684;

	class GMPECCBGJGP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GMPECCBGJGP")->GetStaticField(0x19E20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GMPECCBGJGP")->GetStaticField(0x19E28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>**)UnitySDK::FromName("", "GMPECCBGJGP")->GetStaticField(0x19E30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GMPECCBGJGP")->GetStaticField(0x5DF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GMPECCBGJGP")->GetStaticField(0x5DF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>*(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TeamVoiceAtlasBindingRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TeamVoiceAtlasBindingRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GMPECCBGJGP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPECCBGJGP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GMPECCBGJGP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMPECCBGJGP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GMPECCBGJGP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TeamVoiceAtlasBindingRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeamVoiceAtlasBindingRow*))((::PBYTE)hIl2Cpp + GMPECCBGJGP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
