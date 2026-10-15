#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryTextConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDPHKCEJMML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD716E0)
#define EDPHKCEJMML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD71CB0)
#define EDPHKCEJMML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD71850)
#define EDPHKCEJMML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD71150)
#define EDPHKCEJMML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD713E0)
#define EDPHKCEJMML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD718F0)
#define EDPHKCEJMML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD71940)
#define EDPHKCEJMML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD71720)
#define EDPHKCEJMML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD71380)
#define EDPHKCEJMML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD71550)
#define EDPHKCEJMML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD717B0)
#define EDPHKCEJMML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD710D0)

inline static constexpr unsigned int EDPHKCEJMML_TypeDefinitionIndex = 12693;

	class EDPHKCEJMML : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x53940);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x53948);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>**)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x53950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x12870);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x12871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StoryTextConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StoryTextConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EDPHKCEJMML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDPHKCEJMML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EDPHKCEJMML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDPHKCEJMML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EDPHKCEJMML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StoryTextConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryTextConfigRow*))((::PBYTE)hIl2Cpp + EDPHKCEJMML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
