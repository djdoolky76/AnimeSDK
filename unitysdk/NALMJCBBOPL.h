#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestChallengeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NALMJCBBOPL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E9770)
#define NALMJCBBOPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E9CF0)
#define NALMJCBBOPL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E98E0)
#define NALMJCBBOPL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E9260)
#define NALMJCBBOPL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E94F0)
#define NALMJCBBOPL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E9980)
#define NALMJCBBOPL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E99D0)
#define NALMJCBBOPL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E97B0)
#define NALMJCBBOPL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E9490)
#define NALMJCBBOPL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E9620)
#define NALMJCBBOPL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E9840)
#define NALMJCBBOPL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E91E0)

	class NALMJCBBOPL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestChallengeRow*>**)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x2C3C0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x2C3C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x2C3D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x8BA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NALMJCBBOPL")->GetStaticField(0x8BA1);
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
