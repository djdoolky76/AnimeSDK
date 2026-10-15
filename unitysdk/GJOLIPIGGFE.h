#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSlotConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJOLIPIGGFE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE5A2D0)
#define GJOLIPIGGFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5A8A0)
#define GJOLIPIGGFE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE5A440)
#define GJOLIPIGGFE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE59D40)
#define GJOLIPIGGFE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE59FD0)
#define GJOLIPIGGFE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE5A4E0)
#define GJOLIPIGGFE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE5A530)
#define GJOLIPIGGFE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE5A310)
#define GJOLIPIGGFE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE59F70)
#define GJOLIPIGGFE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE5A140)
#define GJOLIPIGGFE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE5A3A0)
#define GJOLIPIGGFE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE59CC0)

inline static constexpr unsigned int GJOLIPIGGFE_TypeDefinitionIndex = 14546;

	class GJOLIPIGGFE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>**)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x18AE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x18AE8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x18AF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x5B00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x5B01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomSlotConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomSlotConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomSlotConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSlotConfigRow*))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
