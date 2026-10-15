#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeGiftDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKBEGCILLJA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD34190)
#define DKBEGCILLJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD34710)
#define DKBEGCILLJA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD34300)
#define DKBEGCILLJA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD33C40)
#define DKBEGCILLJA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD33ED0)
#define DKBEGCILLJA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD343A0)
#define DKBEGCILLJA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD343F0)
#define DKBEGCILLJA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD341D0)
#define DKBEGCILLJA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD33E70)
#define DKBEGCILLJA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD34040)
#define DKBEGCILLJA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD34260)
#define DKBEGCILLJA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD33BC0)

	class DKBEGCILLJA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKBEGCILLJA")->GetStaticField(0x4DEC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftDataRow*>**)UnitySDK::FromName("", "DKBEGCILLJA")->GetStaticField(0x4DEC8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DKBEGCILLJA")->GetStaticField(0x4DED0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKBEGCILLJA")->GetStaticField(0x11EF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKBEGCILLJA")->GetStaticField(0x11EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftDataRow*>*(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftDataRow*>(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RechargeGiftDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RechargeGiftDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKBEGCILLJA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKBEGCILLJA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKBEGCILLJA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKBEGCILLJA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKBEGCILLJA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RechargeGiftDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RechargeGiftDataRow*))((::PBYTE)hIl2Cpp + DKBEGCILLJA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
