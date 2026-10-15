#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeDmgLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGABAPMICJN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDEAF00)
#define FGABAPMICJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEB700)
#define FGABAPMICJN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDEB2A0)
#define FGABAPMICJN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDEAF40)
#define FGABAPMICJN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDEA980)
#define FGABAPMICJN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDEB340)
#define FGABAPMICJN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDEB390)
#define FGABAPMICJN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDEB170)
#define FGABAPMICJN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDEA920)
#define FGABAPMICJN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDEAAF0)
#define FGABAPMICJN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDEB200)
#define FGABAPMICJN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDEA8A0)

inline static constexpr unsigned int FGABAPMICJN_TypeDefinitionIndex = 11922;

	class FGABAPMICJN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FGABAPMICJN")->GetStaticField(0x112F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FGABAPMICJN")->GetStaticField(0x112F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>**)UnitySDK::FromName("", "FGABAPMICJN")->GetStaticField(0x11300);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FGABAPMICJN")->GetStaticField(0x3990);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FGABAPMICJN")->GetStaticField(0x3991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>*(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeDmgLimitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeDmgLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGABAPMICJN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGABAPMICJN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGABAPMICJN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGABAPMICJN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FGABAPMICJN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeDmgLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeDmgLimitRow*))((::PBYTE)hIl2Cpp + FGABAPMICJN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
