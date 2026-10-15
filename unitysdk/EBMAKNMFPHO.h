#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBMAKNMFPHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD60690)
#define EBMAKNMFPHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD60C10)
#define EBMAKNMFPHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD60800)
#define EBMAKNMFPHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD60180)
#define EBMAKNMFPHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD60410)
#define EBMAKNMFPHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD608A0)
#define EBMAKNMFPHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD608F0)
#define EBMAKNMFPHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD606D0)
#define EBMAKNMFPHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD603B0)
#define EBMAKNMFPHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD60540)
#define EBMAKNMFPHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD60760)
#define EBMAKNMFPHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD60100)

	class EBMAKNMFPHO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x52FB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x52FB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>**)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x52FC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x126C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x126C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>*(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SceneTVMenuDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SceneTVMenuDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SceneTVMenuDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SceneTVMenuDataRow*))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
