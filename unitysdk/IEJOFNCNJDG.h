#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideOverflowChunkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEJOFNCNJDG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEBDB60)
#define IEJOFNCNJDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBE130)
#define IEJOFNCNJDG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEBDCD0)
#define IEJOFNCNJDG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBD5D0)
#define IEJOFNCNJDG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBD860)
#define IEJOFNCNJDG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEBDD70)
#define IEJOFNCNJDG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEBDDC0)
#define IEJOFNCNJDG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEBDBA0)
#define IEJOFNCNJDG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBD800)
#define IEJOFNCNJDG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBD9D0)
#define IEJOFNCNJDG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEBDC30)
#define IEJOFNCNJDG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBD550)

inline static constexpr unsigned int IEJOFNCNJDG_TypeDefinitionIndex = 10921;

	class IEJOFNCNJDG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>**)UnitySDK::FromName("", "IEJOFNCNJDG")->GetStaticField(0x20900);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IEJOFNCNJDG")->GetStaticField(0x20908);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEJOFNCNJDG")->GetStaticField(0x20910);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IEJOFNCNJDG")->GetStaticField(0x7440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IEJOFNCNJDG")->GetStaticField(0x7441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>*(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideOverflowChunkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideOverflowChunkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IEJOFNCNJDG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJOFNCNJDG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IEJOFNCNJDG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEJOFNCNJDG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IEJOFNCNJDG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AetherDivideOverflowChunkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideOverflowChunkRow*))((::PBYTE)hIl2Cpp + IEJOFNCNJDG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
