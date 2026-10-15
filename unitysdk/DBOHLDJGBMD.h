#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBOHLDJGBMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCD0420)
#define DBOHLDJGBMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCD09F0)
#define DBOHLDJGBMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCD0590)
#define DBOHLDJGBMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCCFE90)
#define DBOHLDJGBMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCD0120)
#define DBOHLDJGBMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCD0630)
#define DBOHLDJGBMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCD0680)
#define DBOHLDJGBMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCD0460)
#define DBOHLDJGBMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCD00C0)
#define DBOHLDJGBMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCD0290)
#define DBOHLDJGBMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCD04F0)
#define DBOHLDJGBMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCCFE10)

inline static constexpr unsigned int DBOHLDJGBMD_TypeDefinitionIndex = 12792;

	class DBOHLDJGBMD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DBOHLDJGBMD")->GetStaticField(0x47050);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>**)UnitySDK::FromName("", "DBOHLDJGBMD")->GetStaticField(0x47058);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DBOHLDJGBMD")->GetStaticField(0x47060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DBOHLDJGBMD")->GetStaticField(0x10EE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DBOHLDJGBMD")->GetStaticField(0x10EE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>*(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarEnhancedRankRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarEnhancedRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBOHLDJGBMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBOHLDJGBMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DBOHLDJGBMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DBOHLDJGBMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DBOHLDJGBMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarEnhancedRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedRankRow*))((::PBYTE)hIl2Cpp + DBOHLDJGBMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
