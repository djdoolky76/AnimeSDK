#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAICAMHABMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDC5150)
#define FAICAMHABMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC5720)
#define FAICAMHABMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDC52C0)
#define FAICAMHABMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDC4BC0)
#define FAICAMHABMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDC4E50)
#define FAICAMHABMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDC5360)
#define FAICAMHABMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDC53B0)
#define FAICAMHABMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDC5190)
#define FAICAMHABMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDC4DF0)
#define FAICAMHABMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDC4FC0)
#define FAICAMHABMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDC5220)
#define FAICAMHABMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDC4B40)

inline static constexpr unsigned int FAICAMHABMC_TypeDefinitionIndex = 10884;

	class FAICAMHABMC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>**)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0xEDA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0xEDA8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0xEDB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0x31D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0x31D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>*(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RelicSubAffixAvatarValueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicSubAffixAvatarValueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FAICAMHABMC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAICAMHABMC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAICAMHABMC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAICAMHABMC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FAICAMHABMC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RelicSubAffixAvatarValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSubAffixAvatarValueRow*))((::PBYTE)hIl2Cpp + FAICAMHABMC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
