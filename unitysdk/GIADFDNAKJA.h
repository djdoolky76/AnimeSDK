#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiniGameRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIADFDNAKJA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE4C9D0)
#define GIADFDNAKJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE4CFD0)
#define GIADFDNAKJA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE4CB40)
#define GIADFDNAKJA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE4C400)
#define GIADFDNAKJA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE4C690)
#define GIADFDNAKJA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE4CBE0)
#define GIADFDNAKJA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE4CC30)
#define GIADFDNAKJA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE4CA10)
#define GIADFDNAKJA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE4C630)
#define GIADFDNAKJA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE4C800)
#define GIADFDNAKJA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE4CAA0)
#define GIADFDNAKJA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE4C380)

	class GIADFDNAKJA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GIADFDNAKJA")->GetStaticField(0x17A00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIADFDNAKJA")->GetStaticField(0x17A08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>**)UnitySDK::FromName("", "GIADFDNAKJA")->GetStaticField(0x17A10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIADFDNAKJA")->GetStaticField(0x5840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIADFDNAKJA")->GetStaticField(0x5841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FiveDimMiniGameRewardRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FiveDimMiniGameRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIADFDNAKJA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIADFDNAKJA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIADFDNAKJA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIADFDNAKJA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIADFDNAKJA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FiveDimMiniGameRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimMiniGameRewardRow*))((::PBYTE)hIl2Cpp + GIADFDNAKJA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
