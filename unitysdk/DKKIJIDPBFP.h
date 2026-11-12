#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournRoomGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKKIJIDPBFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF055E0)
#define DKKIJIDPBFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF05BB0)
#define DKKIJIDPBFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF05750)
#define DKKIJIDPBFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF05050)
#define DKKIJIDPBFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF052E0)
#define DKKIJIDPBFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF057F0)
#define DKKIJIDPBFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF05840)
#define DKKIJIDPBFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF05620)
#define DKKIJIDPBFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF05280)
#define DKKIJIDPBFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF05450)
#define DKKIJIDPBFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF056B0)
#define DKKIJIDPBFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF04FD0)

inline static constexpr unsigned int DKKIJIDPBFP_TypeDefinitionIndex = 15117;

	class DKKIJIDPBFP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomGroupRow*>**)UnitySDK::FromName("", "DKKIJIDPBFP")->GetStaticField(0x3C990);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKKIJIDPBFP")->GetStaticField(0x3C998);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DKKIJIDPBFP")->GetStaticField(0x3C9A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKKIJIDPBFP")->GetStaticField(0xD670);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKKIJIDPBFP")->GetStaticField(0xD671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomGroupRow*>*(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomGroupRow*>(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournRoomGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournRoomGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKKIJIDPBFP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKIJIDPBFP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKKIJIDPBFP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKKIJIDPBFP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKKIJIDPBFP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournRoomGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournRoomGroupRow*))((::PBYTE)hIl2Cpp + DKKIJIDPBFP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
