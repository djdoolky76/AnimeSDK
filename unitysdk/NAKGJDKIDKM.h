#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChooseDeliveryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAKGJDKIDKM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1BADB0)
#define NAKGJDKIDKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BB380)
#define NAKGJDKIDKM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1BAF20)
#define NAKGJDKIDKM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1BA820)
#define NAKGJDKIDKM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1BAAB0)
#define NAKGJDKIDKM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1BAFC0)
#define NAKGJDKIDKM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1BB010)
#define NAKGJDKIDKM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1BADF0)
#define NAKGJDKIDKM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1BAA50)
#define NAKGJDKIDKM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1BAC20)
#define NAKGJDKIDKM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1BAE80)
#define NAKGJDKIDKM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1BA7A0)

inline static constexpr unsigned int NAKGJDKIDKM_TypeDefinitionIndex = 13059;

	class NAKGJDKIDKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>**)UnitySDK::FromName("", "NAKGJDKIDKM")->GetStaticField(0x3DF60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NAKGJDKIDKM")->GetStaticField(0x3DF68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NAKGJDKIDKM")->GetStaticField(0x3DF70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NAKGJDKIDKM")->GetStaticField(0xE9F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NAKGJDKIDKM")->GetStaticField(0xE9F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChooseDeliveryGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChooseDeliveryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAKGJDKIDKM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKGJDKIDKM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAKGJDKIDKM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAKGJDKIDKM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NAKGJDKIDKM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChooseDeliveryGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChooseDeliveryGroupRow*))((::PBYTE)hIl2Cpp + NAKGJDKIDKM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
