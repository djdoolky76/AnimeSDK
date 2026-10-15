#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDOJNJCHMMH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE97BF0)
#define HDOJNJCHMMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE981F0)
#define HDOJNJCHMMH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE97D60)
#define HDOJNJCHMMH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE97620)
#define HDOJNJCHMMH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE978B0)
#define HDOJNJCHMMH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE97E00)
#define HDOJNJCHMMH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE97E50)
#define HDOJNJCHMMH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE97C30)
#define HDOJNJCHMMH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE97850)
#define HDOJNJCHMMH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE97A20)
#define HDOJNJCHMMH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE97CC0)
#define HDOJNJCHMMH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE975A0)

inline static constexpr unsigned int HDOJNJCHMMH_TypeDefinitionIndex = 12786;

	class HDOJNJCHMMH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDOJNJCHMMH")->GetStaticField(0x1CD60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>**)UnitySDK::FromName("", "HDOJNJCHMMH")->GetStaticField(0x1CD68);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HDOJNJCHMMH")->GetStaticField(0x1CD70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDOJNJCHMMH")->GetStaticField(0x68A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDOJNJCHMMH")->GetStaticField(0x68A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>*(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarEnhancedHintRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarEnhancedHintRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HDOJNJCHMMH_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOJNJCHMMH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDOJNJCHMMH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDOJNJCHMMH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDOJNJCHMMH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarEnhancedHintRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedHintRow*))((::PBYTE)hIl2Cpp + HDOJNJCHMMH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
