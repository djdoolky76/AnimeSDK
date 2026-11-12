#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AMPPONMNKBD;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABBLFFNDHOP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE44340)
#define ABBLFFNDHOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE448C0)
#define ABBLFFNDHOP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE444B0)
#define ABBLFFNDHOP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE43DF0)
#define ABBLFFNDHOP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE44080)
#define ABBLFFNDHOP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE44550)
#define ABBLFFNDHOP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE445A0)
#define ABBLFFNDHOP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE44380)
#define ABBLFFNDHOP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE44020)
#define ABBLFFNDHOP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE441F0)
#define ABBLFFNDHOP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE44410)
#define ABBLFFNDHOP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE43D70)

inline static constexpr unsigned int ABBLFFNDHOP_TypeDefinitionIndex = 15103;

	class ABBLFFNDHOP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ABBLFFNDHOP")->GetStaticField(0x2B340);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABBLFFNDHOP")->GetStaticField(0x2B348);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMPPONMNKBD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMPPONMNKBD*>**)UnitySDK::FromName("", "ABBLFFNDHOP")->GetStaticField(0x2B350);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABBLFFNDHOP")->GetStaticField(0x8E10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABBLFFNDHOP")->GetStaticField(0x8E11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMPPONMNKBD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMPPONMNKBD*>*(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AMPPONMNKBD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AMPPONMNKBD*>(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_FPHGMAMDFHE_OFFSET))();
		}

		static ::AMPPONMNKBD* LMBKNCAIDLC(::RPG::GameCore::RogueTournAreaGroupID a1)
		{
			return ((::AMPPONMNKBD*(*)(::RPG::GameCore::RogueTournAreaGroupID))((::PBYTE)hIl2Cpp + ABBLFFNDHOP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBLFFNDHOP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABBLFFNDHOP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABBLFFNDHOP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABBLFFNDHOP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AMPPONMNKBD* a1)
		{
			return ((::System::Void(*)(::AMPPONMNKBD*))((::PBYTE)hIl2Cpp + ABBLFFNDHOP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
