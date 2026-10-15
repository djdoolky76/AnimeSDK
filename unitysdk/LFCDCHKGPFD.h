#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelRecommendationRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFCDCHKGPFD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0B9470)
#define LFCDCHKGPFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0B99F0)
#define LFCDCHKGPFD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0B95E0)
#define LFCDCHKGPFD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0B8F20)
#define LFCDCHKGPFD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0B91B0)
#define LFCDCHKGPFD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0B9680)
#define LFCDCHKGPFD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0B96D0)
#define LFCDCHKGPFD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0B94B0)
#define LFCDCHKGPFD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0B9150)
#define LFCDCHKGPFD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0B92E0)
#define LFCDCHKGPFD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0B9540)
#define LFCDCHKGPFD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0B8EA0)

inline static constexpr unsigned int LFCDCHKGPFD_TypeDefinitionIndex = 11122;

	class LFCDCHKGPFD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRecommendationRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRecommendationRow*>**)UnitySDK::FromName("", "LFCDCHKGPFD")->GetStaticField(0x3A7C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LFCDCHKGPFD")->GetStaticField(0x3A7C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LFCDCHKGPFD")->GetStaticField(0x3A7D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFCDCHKGPFD")->GetStaticField(0xBCF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LFCDCHKGPFD")->GetStaticField(0xBCF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRecommendationRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRecommendationRow*>*(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRecommendationRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRecommendationRow*>(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelRecommendationRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelRecommendationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LFCDCHKGPFD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFCDCHKGPFD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LFCDCHKGPFD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFCDCHKGPFD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LFCDCHKGPFD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelRecommendationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelRecommendationRow*))((::PBYTE)hIl2Cpp + LFCDCHKGPFD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
