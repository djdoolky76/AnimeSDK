#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEmojiConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLDBOMFMMJD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2FE750)
#define PLDBOMFMMJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FED20)
#define PLDBOMFMMJD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2FE8C0)
#define PLDBOMFMMJD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2FE1C0)
#define PLDBOMFMMJD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2FE450)
#define PLDBOMFMMJD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2FE960)
#define PLDBOMFMMJD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2FE9B0)
#define PLDBOMFMMJD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2FE790)
#define PLDBOMFMMJD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2FE3F0)
#define PLDBOMFMMJD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2FE5C0)
#define PLDBOMFMMJD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2FE820)
#define PLDBOMFMMJD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2FE140)

inline static constexpr unsigned int PLDBOMFMMJD_TypeDefinitionIndex = 11380;

	class PLDBOMFMMJD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLDBOMFMMJD")->GetStaticField(0x45280);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>**)UnitySDK::FromName("", "PLDBOMFMMJD")->GetStaticField(0x45288);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PLDBOMFMMJD")->GetStaticField(0x45290);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLDBOMFMMJD")->GetStaticField(0x106E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLDBOMFMMJD")->GetStaticField(0x106E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantEmojiConfigRow* LMBKNCAIDLC(::RPG::GameCore::ElfBehaviorStateType a1)
		{
			return ((::RPG::GameCore::RestaurantEmojiConfigRow*(*)(::RPG::GameCore::ElfBehaviorStateType))((::PBYTE)hIl2Cpp + PLDBOMFMMJD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLDBOMFMMJD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLDBOMFMMJD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLDBOMFMMJD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLDBOMFMMJD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantEmojiConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantEmojiConfigRow*))((::PBYTE)hIl2Cpp + PLDBOMFMMJD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
