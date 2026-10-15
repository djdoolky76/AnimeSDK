#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePVEMatchTalkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKIEDOBHEPF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD68CB0)
#define EKIEDOBHEPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD692B0)
#define EKIEDOBHEPF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD68E20)
#define EKIEDOBHEPF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD686E0)
#define EKIEDOBHEPF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD68970)
#define EKIEDOBHEPF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD68EC0)
#define EKIEDOBHEPF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD68F10)
#define EKIEDOBHEPF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD68CF0)
#define EKIEDOBHEPF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD68910)
#define EKIEDOBHEPF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD68AE0)
#define EKIEDOBHEPF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD68D80)
#define EKIEDOBHEPF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD68660)

inline static constexpr unsigned int EKIEDOBHEPF_TypeDefinitionIndex = 11860;

	class EKIEDOBHEPF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKIEDOBHEPF")->GetStaticField(0x2100);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKIEDOBHEPF")->GetStaticField(0x2108);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>**)UnitySDK::FromName("", "EKIEDOBHEPF")->GetStaticField(0x2110);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKIEDOBHEPF")->GetStaticField(0x1D30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKIEDOBHEPF")->GetStaticField(0x1D31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarblePVEMatchTalkConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarblePVEMatchTalkConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKIEDOBHEPF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKIEDOBHEPF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EKIEDOBHEPF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKIEDOBHEPF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EKIEDOBHEPF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarblePVEMatchTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarblePVEMatchTalkConfigRow*))((::PBYTE)hIl2Cpp + EKIEDOBHEPF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
