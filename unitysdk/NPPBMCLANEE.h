#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPPBMCLANEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D247150)
#define NPPBMCLANEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D247720)
#define NPPBMCLANEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2472C0)
#define NPPBMCLANEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D246BC0)
#define NPPBMCLANEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D246E50)
#define NPPBMCLANEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D247360)
#define NPPBMCLANEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2473B0)
#define NPPBMCLANEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D247190)
#define NPPBMCLANEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D246DF0)
#define NPPBMCLANEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D246FC0)
#define NPPBMCLANEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D247220)
#define NPPBMCLANEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D246B40)

	class NPPBMCLANEE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>**)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x31790);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x31798);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x317A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0xA660);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0xA661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenStatConfigRow* LMBKNCAIDLC(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + NPPBMCLANEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NPPBMCLANEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPPBMCLANEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NPPBMCLANEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenStatConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenStatConfigRow*))((::PBYTE)hIl2Cpp + NPPBMCLANEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
