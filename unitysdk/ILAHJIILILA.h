#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILAHJIILILA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEEFE70)
#define ILAHJIILILA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF03F0)
#define ILAHJIILILA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEEFFE0)
#define ILAHJIILILA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEEF920)
#define ILAHJIILILA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEEFBB0)
#define ILAHJIILILA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF0080)
#define ILAHJIILILA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF00D0)
#define ILAHJIILILA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEEFEB0)
#define ILAHJIILILA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEEFB50)
#define ILAHJIILILA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEEFCE0)
#define ILAHJIILILA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEEFF40)
#define ILAHJIILILA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEEF8A0)

inline static constexpr unsigned int ILAHJIILILA_TypeDefinitionIndex = 12978;

	class ILAHJIILILA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>**)UnitySDK::FromName("", "ILAHJIILILA")->GetStaticField(0x23530);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ILAHJIILILA")->GetStaticField(0x23538);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ILAHJIILILA")->GetStaticField(0x23540);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ILAHJIILILA")->GetStaticField(0x7A30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ILAHJIILILA")->GetStaticField(0x7A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengePeakGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengePeakGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ILAHJIILILA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAHJIILILA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ILAHJIILILA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAHJIILILA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ILAHJIILILA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengePeakGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengePeakGroupConfigRow*))((::PBYTE)hIl2Cpp + ILAHJIILILA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
