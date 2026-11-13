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

#define EDPHKCEJMML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9BA740)
#define EDPHKCEJMML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BAD10)
#define EDPHKCEJMML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9BA8B0)
#define EDPHKCEJMML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9BA1B0)
#define EDPHKCEJMML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9BA440)
#define EDPHKCEJMML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9BA950)
#define EDPHKCEJMML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9BA9A0)
#define EDPHKCEJMML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9BA780)
#define EDPHKCEJMML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9BA3E0)
#define EDPHKCEJMML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9BA5B0)
#define EDPHKCEJMML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9BA810)
#define EDPHKCEJMML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9BA130)

inline static constexpr unsigned int EDPHKCEJMML_TypeDefinitionIndex = 12760;

	class EDPHKCEJMML : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x44050);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>**)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x44058);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0x44060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0xD9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDPHKCEJMML")->GetStaticField(0xD9F1);
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
