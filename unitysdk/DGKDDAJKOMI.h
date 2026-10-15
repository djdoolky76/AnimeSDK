#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirStageRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGKDDAJKOMI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD202A0)
#define DGKDDAJKOMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD20820)
#define DGKDDAJKOMI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD20410)
#define DGKDDAJKOMI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD1FD90)
#define DGKDDAJKOMI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD20020)
#define DGKDDAJKOMI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD204B0)
#define DGKDDAJKOMI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD20500)
#define DGKDDAJKOMI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD202E0)
#define DGKDDAJKOMI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD1FFC0)
#define DGKDDAJKOMI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD20150)
#define DGKDDAJKOMI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD20370)
#define DGKDDAJKOMI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD1FD10)

	class DGKDDAJKOMI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x4C620);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x4C628);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>**)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x4C630);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x119E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x119E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>*(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirStageRow*))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
