#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoEntranceConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHACFCFOAGH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD7FD60)
#define EHACFCFOAGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD802E0)
#define EHACFCFOAGH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD7FED0)
#define EHACFCFOAGH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD7F850)
#define EHACFCFOAGH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD7FAE0)
#define EHACFCFOAGH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD7FF70)
#define EHACFCFOAGH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7FFC0)
#define EHACFCFOAGH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD7FDA0)
#define EHACFCFOAGH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD7FA80)
#define EHACFCFOAGH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD7FC10)
#define EHACFCFOAGH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD7FE30)
#define EHACFCFOAGH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD7F7D0)

	class EHACFCFOAGH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EHACFCFOAGH")->GetStaticField(0x53E70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHACFCFOAGH")->GetStaticField(0x53E78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoEntranceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoEntranceConfigRow*>**)UnitySDK::FromName("", "EHACFCFOAGH")->GetStaticField(0x53E80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHACFCFOAGH")->GetStaticField(0x129D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHACFCFOAGH")->GetStaticField(0x129D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoEntranceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoEntranceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoEntranceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoEntranceConfigRow*>(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDemoEntranceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarDemoEntranceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EHACFCFOAGH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHACFCFOAGH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EHACFCFOAGH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHACFCFOAGH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EHACFCFOAGH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarDemoEntranceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDemoEntranceConfigRow*))((::PBYTE)hIl2Cpp + EHACFCFOAGH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
