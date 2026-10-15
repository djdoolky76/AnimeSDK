#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSubAreaConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCCDFADFHEO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDCF640)
#define FCCDFADFHEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFC10)
#define FCCDFADFHEO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDCF7B0)
#define FCCDFADFHEO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDCF0B0)
#define FCCDFADFHEO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDCF340)
#define FCCDFADFHEO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDCF850)
#define FCCDFADFHEO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDCF8A0)
#define FCCDFADFHEO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDCF680)
#define FCCDFADFHEO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDCF2E0)
#define FCCDFADFHEO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDCF4B0)
#define FCCDFADFHEO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDCF710)
#define FCCDFADFHEO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDCF030)

inline static constexpr unsigned int FCCDFADFHEO_TypeDefinitionIndex = 14550;

	class FCCDFADFHEO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0xFD70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0xFD78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>**)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0xFD80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x35E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x35E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomSubAreaConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomSubAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCCDFADFHEO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCCDFADFHEO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCCDFADFHEO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCCDFADFHEO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomSubAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSubAreaConfigRow*))((::PBYTE)hIl2Cpp + FCCDFADFHEO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
