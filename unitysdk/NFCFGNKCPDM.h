#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFCFGNKCPDM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2014F0)
#define NFCFGNKCPDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D201A70)
#define NFCFGNKCPDM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D201660)
#define NFCFGNKCPDM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D200FE0)
#define NFCFGNKCPDM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D201270)
#define NFCFGNKCPDM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D201700)
#define NFCFGNKCPDM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D201750)
#define NFCFGNKCPDM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D201530)
#define NFCFGNKCPDM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D201210)
#define NFCFGNKCPDM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2013A0)
#define NFCFGNKCPDM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2015C0)
#define NFCFGNKCPDM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D200F60)

inline static constexpr unsigned int NFCFGNKCPDM_TypeDefinitionIndex = 14869;

	class NFCFGNKCPDM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>**)UnitySDK::FromName("", "NFCFGNKCPDM")->GetStaticField(0x2DF30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NFCFGNKCPDM")->GetStaticField(0x2DF38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFCFGNKCPDM")->GetStaticField(0x2DF40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFCFGNKCPDM")->GetStaticField(0x96A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFCFGNKCPDM")->GetStaticField(0x96A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>*(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicTalentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NFCFGNKCPDM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCFGNKCPDM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFCFGNKCPDM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFCFGNKCPDM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NFCFGNKCPDM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicTalentRow*))((::PBYTE)hIl2Cpp + NFCFGNKCPDM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
