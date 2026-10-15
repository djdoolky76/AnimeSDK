#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ContentPackageConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABKOCDAIGHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA08A0)
#define ABKOCDAIGHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA0E20)
#define ABKOCDAIGHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA0A10)
#define ABKOCDAIGHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA0390)
#define ABKOCDAIGHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA0620)
#define ABKOCDAIGHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA0AB0)
#define ABKOCDAIGHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA0B00)
#define ABKOCDAIGHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA08E0)
#define ABKOCDAIGHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA05C0)
#define ABKOCDAIGHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA0750)
#define ABKOCDAIGHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA0970)
#define ABKOCDAIGHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA0310)

	class ABKOCDAIGHF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABKOCDAIGHF")->GetStaticField(0x36450);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ContentPackageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ContentPackageConfigRow*>**)UnitySDK::FromName("", "ABKOCDAIGHF")->GetStaticField(0x36458);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ABKOCDAIGHF")->GetStaticField(0x36460);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABKOCDAIGHF")->GetStaticField(0xB6A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABKOCDAIGHF")->GetStaticField(0xB6A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ContentPackageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ContentPackageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ContentPackageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ContentPackageConfigRow*>(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ContentPackageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ContentPackageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ABKOCDAIGHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKOCDAIGHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABKOCDAIGHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABKOCDAIGHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABKOCDAIGHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ContentPackageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ContentPackageConfigRow*))((::PBYTE)hIl2Cpp + ABKOCDAIGHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
