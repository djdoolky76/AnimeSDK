#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveBossDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBKPKLAAMDJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1F01B0)
#define NBKPKLAAMDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F0780)
#define NBKPKLAAMDJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1F0320)
#define NBKPKLAAMDJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1EFC20)
#define NBKPKLAAMDJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1EFEB0)
#define NBKPKLAAMDJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1F03C0)
#define NBKPKLAAMDJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1F0410)
#define NBKPKLAAMDJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1F01F0)
#define NBKPKLAAMDJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1EFE50)
#define NBKPKLAAMDJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1F0020)
#define NBKPKLAAMDJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1F0280)
#define NBKPKLAAMDJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1EFBA0)

	class NBKPKLAAMDJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBKPKLAAMDJ")->GetStaticField(0x2CD30);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NBKPKLAAMDJ")->GetStaticField(0x2CD38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>**)UnitySDK::FromName("", "NBKPKLAAMDJ")->GetStaticField(0x2CD40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NBKPKLAAMDJ")->GetStaticField(0x8CF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NBKPKLAAMDJ")->GetStaticField(0x8CF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>*(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveBossDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveBossDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveBossDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveBossDataRow*))((::PBYTE)hIl2Cpp + NBKPKLAAMDJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
