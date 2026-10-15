#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeStoryMazeExtraConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHOCOJEKEMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D032BD0)
#define JHOCOJEKEMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D033150)
#define JHOCOJEKEMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D032D40)
#define JHOCOJEKEMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D032680)
#define JHOCOJEKEMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D032910)
#define JHOCOJEKEMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D032DE0)
#define JHOCOJEKEMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D032E30)
#define JHOCOJEKEMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D032C10)
#define JHOCOJEKEMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0328B0)
#define JHOCOJEKEMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D032A80)
#define JHOCOJEKEMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D032CA0)
#define JHOCOJEKEMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D032600)

inline static constexpr unsigned int JHOCOJEKEMD_TypeDefinitionIndex = 12994;

	class JHOCOJEKEMD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>**)UnitySDK::FromName("", "JHOCOJEKEMD")->GetStaticField(0x2E640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHOCOJEKEMD")->GetStaticField(0x2E648);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JHOCOJEKEMD")->GetStaticField(0x2E650);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHOCOJEKEMD")->GetStaticField(0x98F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHOCOJEKEMD")->GetStaticField(0x98F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHOCOJEKEMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOCOJEKEMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHOCOJEKEMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHOCOJEKEMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHOCOJEKEMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + JHOCOJEKEMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
