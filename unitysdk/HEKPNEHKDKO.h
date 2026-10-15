#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingConditionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEKPNEHKDKO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE9BB20)
#define HEKPNEHKDKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE9C0F0)
#define HEKPNEHKDKO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE9BC90)
#define HEKPNEHKDKO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE9B590)
#define HEKPNEHKDKO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE9B820)
#define HEKPNEHKDKO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE9BD30)
#define HEKPNEHKDKO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE9BD80)
#define HEKPNEHKDKO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE9BB60)
#define HEKPNEHKDKO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE9B7C0)
#define HEKPNEHKDKO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE9B990)
#define HEKPNEHKDKO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE9BBF0)
#define HEKPNEHKDKO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE9B510)

	class HEKPNEHKDKO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x1CFD0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x1CFD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>**)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x1CFE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x6950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x6951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>*(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HEKPNEHKDKO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEKPNEHKDKO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HEKPNEHKDKO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEKPNEHKDKO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HEKPNEHKDKO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingConditionRow*))((::PBYTE)hIl2Cpp + HEKPNEHKDKO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
