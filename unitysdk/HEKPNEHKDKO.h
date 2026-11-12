#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEKPNEHKDKO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E078880)
#define HEKPNEHKDKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E078E50)
#define HEKPNEHKDKO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0789F0)
#define HEKPNEHKDKO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0782F0)
#define HEKPNEHKDKO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E078580)
#define HEKPNEHKDKO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E078A90)
#define HEKPNEHKDKO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E078AE0)
#define HEKPNEHKDKO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0788C0)
#define HEKPNEHKDKO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E078520)
#define HEKPNEHKDKO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0786F0)
#define HEKPNEHKDKO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E078950)
#define HEKPNEHKDKO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E078270)

inline static constexpr unsigned int HEKPNEHKDKO_TypeDefinitionIndex = 11047;

	class HEKPNEHKDKO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionRow*>**)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x14620);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x14628);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x14630);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x4410);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HEKPNEHKDKO")->GetStaticField(0x4411);
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
