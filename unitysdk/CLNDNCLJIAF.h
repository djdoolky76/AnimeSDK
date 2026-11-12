#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChatContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLNDNCLJIAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EECD430)
#define CLNDNCLJIAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EECDA00)
#define CLNDNCLJIAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EECD5A0)
#define CLNDNCLJIAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EECCEA0)
#define CLNDNCLJIAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EECD130)
#define CLNDNCLJIAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EECD640)
#define CLNDNCLJIAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EECD690)
#define CLNDNCLJIAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EECD470)
#define CLNDNCLJIAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EECD0D0)
#define CLNDNCLJIAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EECD2A0)
#define CLNDNCLJIAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EECD500)
#define CLNDNCLJIAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EECCE20)

inline static constexpr unsigned int CLNDNCLJIAF_TypeDefinitionIndex = 11838;

	class CLNDNCLJIAF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLNDNCLJIAF")->GetStaticField(0x35B40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLNDNCLJIAF")->GetStaticField(0x35B48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChatContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChatContentRow*>**)UnitySDK::FromName("", "CLNDNCLJIAF")->GetStaticField(0x35B50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLNDNCLJIAF")->GetStaticField(0xB710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLNDNCLJIAF")->GetStaticField(0xB711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChatContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChatContentRow*>*(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChatContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChatContentRow*>(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveChatContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveChatContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLNDNCLJIAF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNDNCLJIAF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLNDNCLJIAF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLNDNCLJIAF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLNDNCLJIAF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveChatContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveChatContentRow*))((::PBYTE)hIl2Cpp + CLNDNCLJIAF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
