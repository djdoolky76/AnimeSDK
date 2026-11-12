#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNPIPGKHNFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E31DF80)
#define LNPIPGKHNFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31E500)
#define LNPIPGKHNFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E31E0F0)
#define LNPIPGKHNFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E31DA30)
#define LNPIPGKHNFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E31DCC0)
#define LNPIPGKHNFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E31E190)
#define LNPIPGKHNFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E31E1E0)
#define LNPIPGKHNFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E31DFC0)
#define LNPIPGKHNFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E31DC60)
#define LNPIPGKHNFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E31DE30)
#define LNPIPGKHNFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E31E050)
#define LNPIPGKHNFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E31D9B0)

inline static constexpr unsigned int LNPIPGKHNFA_TypeDefinitionIndex = 11963;

	class LNPIPGKHNFA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeSkillRow*>**)UnitySDK::FromName("", "LNPIPGKHNFA")->GetStaticField(0x369A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNPIPGKHNFA")->GetStaticField(0x369A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LNPIPGKHNFA")->GetStaticField(0x369B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNPIPGKHNFA")->GetStaticField(0xBB10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNPIPGKHNFA")->GetStaticField(0xBB11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeSkillRow*>*(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeSkillRow*>(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNPIPGKHNFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNPIPGKHNFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNPIPGKHNFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNPIPGKHNFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNPIPGKHNFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeSkillRow*))((::PBYTE)hIl2Cpp + LNPIPGKHNFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
