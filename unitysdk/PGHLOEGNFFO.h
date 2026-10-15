#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomTagConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGHLOEGNFFO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E1F60)
#define PGHLOEGNFFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E2530)
#define PGHLOEGNFFO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E20D0)
#define PGHLOEGNFFO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E19D0)
#define PGHLOEGNFFO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E1C60)
#define PGHLOEGNFFO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E2170)
#define PGHLOEGNFFO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E21C0)
#define PGHLOEGNFFO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E1FA0)
#define PGHLOEGNFFO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E1C00)
#define PGHLOEGNFFO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E1DD0)
#define PGHLOEGNFFO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E2030)
#define PGHLOEGNFFO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E1950)

inline static constexpr unsigned int PGHLOEGNFFO_TypeDefinitionIndex = 14554;

	class PGHLOEGNFFO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x3FA30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomTagConfigRow*>**)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x3FA38);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0x3FA40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0xD960);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PGHLOEGNFFO")->GetStaticField(0xD961);
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
