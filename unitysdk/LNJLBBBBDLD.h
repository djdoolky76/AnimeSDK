#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestScorePhaseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNJLBBBBDLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D11D280)
#define LNJLBBBBDLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D11D800)
#define LNJLBBBBDLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D11D3F0)
#define LNJLBBBBDLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D11CD30)
#define LNJLBBBBDLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D11CFC0)
#define LNJLBBBBDLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D11D490)
#define LNJLBBBBDLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D11D4E0)
#define LNJLBBBBDLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D11D2C0)
#define LNJLBBBBDLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D11CF60)
#define LNJLBBBBDLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D11D130)
#define LNJLBBBBDLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D11D350)
#define LNJLBBBBDLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D11CCB0)

inline static constexpr unsigned int LNJLBBBBDLD_TypeDefinitionIndex = 13278;

	class LNJLBBBBDLD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LNJLBBBBDLD")->GetStaticField(0x453A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNJLBBBBDLD")->GetStaticField(0x453A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>**)UnitySDK::FromName("", "LNJLBBBBDLD")->GetStaticField(0x453B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNJLBBBBDLD")->GetStaticField(0x10710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNJLBBBBDLD")->GetStaticField(0x10711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>*(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FightFestScorePhaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FightFestScorePhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNJLBBBBDLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNJLBBBBDLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNJLBBBBDLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNJLBBBBDLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNJLBBBBDLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FightFestScorePhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestScorePhaseRow*))((::PBYTE)hIl2Cpp + LNJLBBBBDLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
