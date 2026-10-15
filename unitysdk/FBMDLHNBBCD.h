#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleSubTraitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBMDLHNBBCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9EC00)
#define FBMDLHNBBCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9F200)
#define FBMDLHNBBCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9ED70)
#define FBMDLHNBBCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9E630)
#define FBMDLHNBBCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9E8C0)
#define FBMDLHNBBCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9EE10)
#define FBMDLHNBBCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9EE60)
#define FBMDLHNBBCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9EC40)
#define FBMDLHNBBCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9E860)
#define FBMDLHNBBCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9EA30)
#define FBMDLHNBBCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9ECD0)
#define FBMDLHNBBCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9E5B0)

inline static constexpr unsigned int FBMDLHNBBCD_TypeDefinitionIndex = 13486;

	class FBMDLHNBBCD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*>**)UnitySDK::FromName("", "FBMDLHNBBCD")->GetStaticField(0xF590);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FBMDLHNBBCD")->GetStaticField(0xF598);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FBMDLHNBBCD")->GetStaticField(0xF5A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FBMDLHNBBCD")->GetStaticField(0x3220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBMDLHNBBCD")->GetStaticField(0x3221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*>(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightModuleSubTraitConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightModuleSubTraitConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FBMDLHNBBCD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBMDLHNBBCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBMDLHNBBCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMDLHNBBCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FBMDLHNBBCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightModuleSubTraitConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightModuleSubTraitConfigRow*))((::PBYTE)hIl2Cpp + FBMDLHNBBCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
