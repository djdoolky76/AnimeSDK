#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantQuestGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOPFMKAICJI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE192E0)
#define FOPFMKAICJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE19860)
#define FOPFMKAICJI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE19450)
#define FOPFMKAICJI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE18DD0)
#define FOPFMKAICJI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE19060)
#define FOPFMKAICJI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE194F0)
#define FOPFMKAICJI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE19540)
#define FOPFMKAICJI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE19320)
#define FOPFMKAICJI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE19000)
#define FOPFMKAICJI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE19190)
#define FOPFMKAICJI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE193B0)
#define FOPFMKAICJI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE18D50)

	class FOPFMKAICJI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>**)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x155A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x155A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x155B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x5170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x5171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantQuestGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOPFMKAICJI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOPFMKAICJI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOPFMKAICJI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FOPFMKAICJI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantQuestGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantQuestGroupRow*))((::PBYTE)hIl2Cpp + FOPFMKAICJI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
