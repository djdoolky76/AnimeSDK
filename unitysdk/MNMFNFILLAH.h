#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMasterChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNMFNFILLAH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3EC910)
#define MNMFNFILLAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ECEE0)
#define MNMFNFILLAH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E3ECA80)
#define MNMFNFILLAH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E3EC380)
#define MNMFNFILLAH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3EC610)
#define MNMFNFILLAH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E3ECB20)
#define MNMFNFILLAH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E3ECB70)
#define MNMFNFILLAH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3EC950)
#define MNMFNFILLAH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E3EC5B0)
#define MNMFNFILLAH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E3EC780)
#define MNMFNFILLAH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E3EC9E0)
#define MNMFNFILLAH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3EC300)

inline static constexpr unsigned int MNMFNFILLAH_TypeDefinitionIndex = 11170;

	class MNMFNFILLAH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MNMFNFILLAH")->GetStaticField(0x44180);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>**)UnitySDK::FromName("", "MNMFNFILLAH")->GetStaticField(0x44188);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNMFNFILLAH")->GetStaticField(0x44190);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNMFNFILLAH")->GetStaticField(0xE630);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNMFNFILLAH")->GetStaticField(0xE631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelMasterChallengeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelMasterChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNMFNFILLAH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNMFNFILLAH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNMFNFILLAH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNMFNFILLAH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNMFNFILLAH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelMasterChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelMasterChallengeRow*))((::PBYTE)hIl2Cpp + MNMFNFILLAH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
