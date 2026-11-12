#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAICAMHABMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF9C8D0)
#define FAICAMHABMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9CEA0)
#define FAICAMHABMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF9CA40)
#define FAICAMHABMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF9C340)
#define FAICAMHABMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF9C5D0)
#define FAICAMHABMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF9CAE0)
#define FAICAMHABMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF9CB30)
#define FAICAMHABMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF9C910)
#define FAICAMHABMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF9C570)
#define FAICAMHABMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF9C740)
#define FAICAMHABMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF9C9A0)
#define FAICAMHABMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF9C2C0)

inline static constexpr unsigned int FAICAMHABMC_TypeDefinitionIndex = 10900;

	class FAICAMHABMC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixAvatarValueRow*>**)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0x3C1E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0x3C1E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0x3C1F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0xD440);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAICAMHABMC")->GetStaticField(0xD441);
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
