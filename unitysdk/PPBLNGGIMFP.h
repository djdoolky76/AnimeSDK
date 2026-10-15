#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasChangeInfoRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPBLNGGIMFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D3182C0)
#define PPBLNGGIMFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D318E10)
#define PPBLNGGIMFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D318660)
#define PPBLNGGIMFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D318300)
#define PPBLNGGIMFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D318B50)
#define PPBLNGGIMFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D318700)
#define PPBLNGGIMFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D318750)
#define PPBLNGGIMFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D318530)
#define PPBLNGGIMFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D318AF0)
#define PPBLNGGIMFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D318C80)
#define PPBLNGGIMFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D3185C0)
#define PPBLNGGIMFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D318A70)

	class PPBLNGGIMFP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>**)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x47310);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x47318);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x47320);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x10F50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x10F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TitanAtlasChangeInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TitanAtlasChangeInfoRow*))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TitanAtlasChangeInfoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TitanAtlasChangeInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
