#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGHLOEGNFFO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B43D0)
#define PGHLOEGNFFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B49A0)
#define PGHLOEGNFFO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B4540)
#define PGHLOEGNFFO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2B3E40)
#define PGHLOEGNFFO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2B40D0)
#define PGHLOEGNFFO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B45E0)
#define PGHLOEGNFFO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B4630)
#define PGHLOEGNFFO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B4410)
#define PGHLOEGNFFO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2B4070)
#define PGHLOEGNFFO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2B4240)
#define PGHLOEGNFFO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B44A0)
#define PGHLOEGNFFO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2B3DC0)

inline static constexpr unsigned int PGHLOEGNFFO_TypeDefinitionIndex = 14554;

	class PGHLOEGNFFO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>**)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x4E980);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x4E988);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x4E990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x11F00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x11F01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomTagConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomTagConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PGHLOEGNFFO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHLOEGNFFO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PGHLOEGNFFO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGHLOEGNFFO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PGHLOEGNFFO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomTagConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomTagConfigRow*))((::PBYTE)hIl2Cpp + PGHLOEGNFFO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
