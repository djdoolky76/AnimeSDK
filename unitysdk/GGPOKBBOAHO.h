#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityThemeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGPOKBBOAHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE441B0)
#define GGPOKBBOAHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE44780)
#define GGPOKBBOAHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE44320)
#define GGPOKBBOAHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE43C20)
#define GGPOKBBOAHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE43EB0)
#define GGPOKBBOAHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE443C0)
#define GGPOKBBOAHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE44410)
#define GGPOKBBOAHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE441F0)
#define GGPOKBBOAHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE43E50)
#define GGPOKBBOAHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE44020)
#define GGPOKBBOAHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE44280)
#define GGPOKBBOAHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE43BA0)

inline static constexpr unsigned int GGPOKBBOAHO_TypeDefinitionIndex = 11214;

	class GGPOKBBOAHO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGPOKBBOAHO")->GetStaticField(0x175F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityThemeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityThemeRow*>**)UnitySDK::FromName("", "GGPOKBBOAHO")->GetStaticField(0x175F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GGPOKBBOAHO")->GetStaticField(0x17600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGPOKBBOAHO")->GetStaticField(0x57A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGPOKBBOAHO")->GetStaticField(0x57A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityThemeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityThemeRow*>*(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityThemeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityThemeRow*>(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityThemeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityThemeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGPOKBBOAHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGPOKBBOAHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGPOKBBOAHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGPOKBBOAHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGPOKBBOAHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityThemeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityThemeRow*))((::PBYTE)hIl2Cpp + GGPOKBBOAHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
