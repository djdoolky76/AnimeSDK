#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomDynamicConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MENALACGOCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1BB9DB60)
#define MENALACGOCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB9E0E0)
#define MENALACGOCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1BB9DCD0)
#define MENALACGOCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1BB9D610)
#define MENALACGOCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1BB9D8A0)
#define MENALACGOCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1BB9DD70)
#define MENALACGOCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1BB9DDC0)
#define MENALACGOCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1BB9DBA0)
#define MENALACGOCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1BB9D840)
#define MENALACGOCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1BB9DA10)
#define MENALACGOCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1BB9DC30)
#define MENALACGOCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1BB9D590)

inline static constexpr unsigned int MENALACGOCK_TypeDefinitionIndex = 14703;

	class MENALACGOCK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomDynamicConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomDynamicConfigRow*>**)UnitySDK::FromName("", "MENALACGOCK")->GetStaticField(0x42000);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MENALACGOCK")->GetStaticField(0x42008);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MENALACGOCK")->GetStaticField(0x42010);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MENALACGOCK")->GetStaticField(0xD3F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MENALACGOCK")->GetStaticField(0xD3F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomDynamicConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomDynamicConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomDynamicConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomDynamicConfigRow*>(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomDynamicConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomDynamicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MENALACGOCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENALACGOCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MENALACGOCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MENALACGOCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MENALACGOCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomDynamicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomDynamicConfigRow*))((::PBYTE)hIl2Cpp + MENALACGOCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
