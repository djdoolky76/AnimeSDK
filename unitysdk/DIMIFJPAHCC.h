#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HAOGAENOKFH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DIMIFJPAHCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DEF45B0)
#define DIMIFJPAHCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5100)
#define DIMIFJPAHCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DEF4950)
#define DIMIFJPAHCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DEF45F0)
#define DIMIFJPAHCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DEF4E40)
#define DIMIFJPAHCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DEF49F0)
#define DIMIFJPAHCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DEF4A40)
#define DIMIFJPAHCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DEF4820)
#define DIMIFJPAHCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DEF4DE0)
#define DIMIFJPAHCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DEF4FB0)
#define DIMIFJPAHCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DEF48B0)
#define DIMIFJPAHCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DEF4D60)

inline static constexpr unsigned int DIMIFJPAHCC_TypeDefinitionIndex = 15567;

	class DIMIFJPAHCC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x3C250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x3C258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAOGAENOKFH*>**)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0x3C260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0xD450);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DIMIFJPAHCC")->GetStaticField(0xD451);
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
