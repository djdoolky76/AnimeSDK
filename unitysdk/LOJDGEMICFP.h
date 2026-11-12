#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionTeamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOJDGEMICFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3209B0)
#define LOJDGEMICFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E320F80)
#define LOJDGEMICFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E320B20)
#define LOJDGEMICFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E320420)
#define LOJDGEMICFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3206B0)
#define LOJDGEMICFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E320BC0)
#define LOJDGEMICFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E320C10)
#define LOJDGEMICFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3209F0)
#define LOJDGEMICFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E320650)
#define LOJDGEMICFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E320820)
#define LOJDGEMICFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E320A80)
#define LOJDGEMICFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3203A0)

inline static constexpr unsigned int LOJDGEMICFP_TypeDefinitionIndex = 11889;

	class LOJDGEMICFP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LOJDGEMICFP")->GetStaticField(0x36C50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionTeamRow*>**)UnitySDK::FromName("", "LOJDGEMICFP")->GetStaticField(0x36C58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LOJDGEMICFP")->GetStaticField(0x36C60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LOJDGEMICFP")->GetStaticField(0xBC10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LOJDGEMICFP")->GetStaticField(0xBC11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionTeamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionTeamRow*>*(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionTeamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionTeamRow*>(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestionTeamRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestionTeamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LOJDGEMICFP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOJDGEMICFP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LOJDGEMICFP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LOJDGEMICFP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LOJDGEMICFP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestionTeamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestionTeamRow*))((::PBYTE)hIl2Cpp + LOJDGEMICFP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
