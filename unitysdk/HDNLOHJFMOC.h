#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingCycleRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDNLOHJFMOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE966F0)
#define HDNLOHJFMOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE96CC0)
#define HDNLOHJFMOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE96860)
#define HDNLOHJFMOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE96160)
#define HDNLOHJFMOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE963F0)
#define HDNLOHJFMOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE96900)
#define HDNLOHJFMOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE96950)
#define HDNLOHJFMOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE96730)
#define HDNLOHJFMOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE96390)
#define HDNLOHJFMOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE96560)
#define HDNLOHJFMOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE967C0)
#define HDNLOHJFMOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE960E0)

	class HDNLOHJFMOC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HDNLOHJFMOC")->GetStaticField(0x1CBE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDNLOHJFMOC")->GetStaticField(0x1CBE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCycleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCycleRow*>**)UnitySDK::FromName("", "HDNLOHJFMOC")->GetStaticField(0x1CBF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDNLOHJFMOC")->GetStaticField(0x67F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDNLOHJFMOC")->GetStaticField(0x67F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCycleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCycleRow*>*(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCycleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCycleRow*>(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingCycleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingCycleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HDNLOHJFMOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDNLOHJFMOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDNLOHJFMOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDNLOHJFMOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDNLOHJFMOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingCycleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingCycleRow*))((::PBYTE)hIl2Cpp + HDNLOHJFMOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
