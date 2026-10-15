#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPMKMALCJIF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD92A50)
#define EPMKMALCJIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD93020)
#define EPMKMALCJIF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD92BC0)
#define EPMKMALCJIF_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CD92840)
#define EPMKMALCJIF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD92440)
#define EPMKMALCJIF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD926D0)
#define EPMKMALCJIF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD92C60)
#define EPMKMALCJIF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD92CB0)
#define EPMKMALCJIF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD92A90)
#define EPMKMALCJIF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD92670)
#define EPMKMALCJIF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD928C0)
#define EPMKMALCJIF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD92B20)
#define EPMKMALCJIF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD923C0)

inline static constexpr unsigned int EPMKMALCJIF_TypeDefinitionIndex = 11276;

	class EPMKMALCJIF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EPMKMALCJIF")->GetStaticField(0xEA30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EPMKMALCJIF")->GetStaticField(0xEA38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>**)UnitySDK::FromName("", "EPMKMALCJIF")->GetStaticField(0xEA40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EPMKMALCJIF")->GetStaticField(0x2F90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EPMKMALCJIF")->GetStaticField(0x2F91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>*(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>, ::RPG::GameCore::ActivityDiceHintRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>, ::RPG::GameCore::ActivityDiceHintRow*>(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceHintRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPMKMALCJIF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMKMALCJIF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EPMKMALCJIF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPMKMALCJIF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EPMKMALCJIF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceHintRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceHintRow*))((::PBYTE)hIl2Cpp + EPMKMALCJIF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
