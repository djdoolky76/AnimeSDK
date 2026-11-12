#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPuzzleChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKKEFLNFIBM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E038E90)
#define GKKEFLNFIBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E039410)
#define GKKEFLNFIBM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E039000)
#define GKKEFLNFIBM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E038980)
#define GKKEFLNFIBM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E038C10)
#define GKKEFLNFIBM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0390A0)
#define GKKEFLNFIBM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0390F0)
#define GKKEFLNFIBM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E038ED0)
#define GKKEFLNFIBM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E038BB0)
#define GKKEFLNFIBM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E038D40)
#define GKKEFLNFIBM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E038F60)
#define GKKEFLNFIBM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E038900)

inline static constexpr unsigned int GKKEFLNFIBM_TypeDefinitionIndex = 14269;

	class GKKEFLNFIBM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimPuzzleChallengeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimPuzzleChallengeRow*>**)UnitySDK::FromName("", "GKKEFLNFIBM")->GetStaticField(0x10D70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKKEFLNFIBM")->GetStaticField(0x10D78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GKKEFLNFIBM")->GetStaticField(0x10D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKKEFLNFIBM")->GetStaticField(0x3780);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKKEFLNFIBM")->GetStaticField(0x3781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimPuzzleChallengeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimPuzzleChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimPuzzleChallengeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimPuzzleChallengeRow*>(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FiveDimPuzzleChallengeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FiveDimPuzzleChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKKEFLNFIBM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKKEFLNFIBM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GKKEFLNFIBM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKKEFLNFIBM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GKKEFLNFIBM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FiveDimPuzzleChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimPuzzleChallengeRow*))((::PBYTE)hIl2Cpp + GKKEFLNFIBM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
