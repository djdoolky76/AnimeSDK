#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakRewardORRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHEMIAMJGCF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1DE950)
#define NHEMIAMJGCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DEF50)
#define NHEMIAMJGCF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1DEAC0)
#define NHEMIAMJGCF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1DE3B0)
#define NHEMIAMJGCF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1DE640)
#define NHEMIAMJGCF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1DEB60)
#define NHEMIAMJGCF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1DEBB0)
#define NHEMIAMJGCF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1DE990)
#define NHEMIAMJGCF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1DE5E0)
#define NHEMIAMJGCF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1DE7B0)
#define NHEMIAMJGCF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1DEA20)
#define NHEMIAMJGCF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1DE330)

inline static constexpr unsigned int NHEMIAMJGCF_TypeDefinitionIndex = 12987;

	class NHEMIAMJGCF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NHEMIAMJGCF")->GetStaticField(0x40790);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NHEMIAMJGCF")->GetStaticField(0x40798);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>**)UnitySDK::FromName("", "NHEMIAMJGCF")->GetStaticField(0x407A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NHEMIAMJGCF")->GetStaticField(0xF500);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NHEMIAMJGCF")->GetStaticField(0xF501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>*(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengePeakRewardORRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChallengePeakRewardORRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NHEMIAMJGCF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHEMIAMJGCF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NHEMIAMJGCF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHEMIAMJGCF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NHEMIAMJGCF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengePeakRewardORRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengePeakRewardORRow*))((::PBYTE)hIl2Cpp + NHEMIAMJGCF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
