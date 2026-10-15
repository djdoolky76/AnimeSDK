#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournExpRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCKPFIOHEBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCD9DE0)
#define DCKPFIOHEBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCDA3A0)
#define DCKPFIOHEBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCD9F50)
#define DCKPFIOHEBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCD9850)
#define DCKPFIOHEBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCD9AE0)
#define DCKPFIOHEBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCD9FF0)
#define DCKPFIOHEBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCDA040)
#define DCKPFIOHEBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCD9E20)
#define DCKPFIOHEBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCD9A80)
#define DCKPFIOHEBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCD9C10)
#define DCKPFIOHEBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCD9EB0)
#define DCKPFIOHEBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCD97D0)

	class DCKPFIOHEBD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DCKPFIOHEBD")->GetStaticField(0x48110);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCKPFIOHEBD")->GetStaticField(0x48118);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>**)UnitySDK::FromName("", "DCKPFIOHEBD")->GetStaticField(0x48120);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCKPFIOHEBD")->GetStaticField(0x11140);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCKPFIOHEBD")->GetStaticField(0x11141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>*(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpRewardRow*>(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournExpRewardRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueTournExpRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DCKPFIOHEBD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKPFIOHEBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCKPFIOHEBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCKPFIOHEBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCKPFIOHEBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournExpRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournExpRewardRow*))((::PBYTE)hIl2Cpp + DCKPFIOHEBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
