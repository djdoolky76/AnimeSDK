#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HAOGAENOKFH;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DIMIFJPAHCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD277A0)
#define DIMIFJPAHCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD282F0)
#define DIMIFJPAHCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD27B40)
#define DIMIFJPAHCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD277E0)
#define DIMIFJPAHCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD28030)
#define DIMIFJPAHCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD27BE0)
#define DIMIFJPAHCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD27C30)
#define DIMIFJPAHCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD27A10)
#define DIMIFJPAHCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD27FD0)
#define DIMIFJPAHCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD281A0)
#define DIMIFJPAHCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD27AA0)
#define DIMIFJPAHCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD27F50)

	class DIMIFJPAHCC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x4D6A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>**)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x4D6A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x4D6B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x11C90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x11C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DIMIFJPAHCC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIMIFJPAHCC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DIMIFJPAHCC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HAOGAENOKFH* a1)
		{
			return ((::System::Void(*)(::HAOGAENOKFH*))((::PBYTE)hIl2Cpp + DIMIFJPAHCC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>*(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>(*)())((::PBYTE)hIl2Cpp + DIMIFJPAHCC_FPHGMAMDFHE_OFFSET))();
		}

		static ::HAOGAENOKFH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HAOGAENOKFH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DIMIFJPAHCC_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
