#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidSpecialOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EECAEEBADBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD72990)
#define EECAEEBADBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD72F60)
#define EECAEEBADBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD72B00)
#define EECAEEBADBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD72400)
#define EECAEEBADBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD72690)
#define EECAEEBADBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD72BA0)
#define EECAEEBADBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD72BF0)
#define EECAEEBADBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD729D0)
#define EECAEEBADBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD72630)
#define EECAEEBADBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD72800)
#define EECAEEBADBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD72A60)
#define EECAEEBADBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD72380)

inline static constexpr unsigned int EECAEEBADBK_TypeDefinitionIndex = 12645;

	class EECAEEBADBK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EECAEEBADBK")->GetStaticField(0x53990);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EECAEEBADBK")->GetStaticField(0x53998);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>**)UnitySDK::FromName("", "EECAEEBADBK")->GetStaticField(0x539A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EECAEEBADBK")->GetStaticField(0x128A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EECAEEBADBK")->GetStaticField(0x128A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>*(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidSpecialOrderRow*>(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidSpecialOrderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidSpecialOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EECAEEBADBK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECAEEBADBK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EECAEEBADBK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EECAEEBADBK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EECAEEBADBK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRaidSpecialOrderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidSpecialOrderRow*))((::PBYTE)hIl2Cpp + EECAEEBADBK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
