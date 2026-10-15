#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingWaveExpRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIJPKLOMJLJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0FB940)
#define LIJPKLOMJLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0FBF10)
#define LIJPKLOMJLJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0FBAB0)
#define LIJPKLOMJLJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FB3B0)
#define LIJPKLOMJLJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FB640)
#define LIJPKLOMJLJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0FBB50)
#define LIJPKLOMJLJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0FBBA0)
#define LIJPKLOMJLJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0FB980)
#define LIJPKLOMJLJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FB5E0)
#define LIJPKLOMJLJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FB7B0)
#define LIJPKLOMJLJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0FBA10)
#define LIJPKLOMJLJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FB330)

	class LIJPKLOMJLJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>**)UnitySDK::FromName("", "LIJPKLOMJLJ")->GetStaticField(0x3EDD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIJPKLOMJLJ")->GetStaticField(0x3EDD8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIJPKLOMJLJ")->GetStaticField(0x3EDE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIJPKLOMJLJ")->GetStaticField(0xD710);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIJPKLOMJLJ")->GetStaticField(0xD711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>*(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingWaveExpRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingWaveExpRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingWaveExpRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingWaveExpRow*))((::PBYTE)hIl2Cpp + LIJPKLOMJLJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
