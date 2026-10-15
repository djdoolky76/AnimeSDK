#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChestLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EACNCHPAPOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5B9C0)
#define EACNCHPAPOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5BF90)
#define EACNCHPAPOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5BB30)
#define EACNCHPAPOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5B430)
#define EACNCHPAPOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5B6C0)
#define EACNCHPAPOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5BBD0)
#define EACNCHPAPOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5BC20)
#define EACNCHPAPOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5BA00)
#define EACNCHPAPOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5B660)
#define EACNCHPAPOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5B830)
#define EACNCHPAPOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5BA90)
#define EACNCHPAPOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5B3B0)

	class EACNCHPAPOH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x52D50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>**)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x52D58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x52D60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x125E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x125E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>*(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveChestLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveChestLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EACNCHPAPOH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EACNCHPAPOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EACNCHPAPOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EACNCHPAPOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveChestLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveChestLevelRow*))((::PBYTE)hIl2Cpp + EACNCHPAPOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
