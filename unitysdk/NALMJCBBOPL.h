#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NALMJCBBOPL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1BBA60)
#define NALMJCBBOPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BBFE0)
#define NALMJCBBOPL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1BBBD0)
#define NALMJCBBOPL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1BB550)
#define NALMJCBBOPL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1BB7E0)
#define NALMJCBBOPL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1BBC70)
#define NALMJCBBOPL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1BBCC0)
#define NALMJCBBOPL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1BBAA0)
#define NALMJCBBOPL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1BB780)
#define NALMJCBBOPL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1BB910)
#define NALMJCBBOPL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1BBB30)
#define NALMJCBBOPL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1BB4D0)

inline static constexpr unsigned int NALMJCBBOPL_TypeDefinitionIndex = 13282;

	class NALMJCBBOPL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x3E030);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>**)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x3E038);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x3E040);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0xEA20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0xEA21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FightFestChallengeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FightFestChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NALMJCBBOPL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALMJCBBOPL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NALMJCBBOPL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NALMJCBBOPL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NALMJCBBOPL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FightFestChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestChallengeRow*))((::PBYTE)hIl2Cpp + NALMJCBBOPL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
