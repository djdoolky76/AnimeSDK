#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicAdventureRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDDPMIMHOEC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDFF3A0)
#define GDDPMIMHOEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDFF970)
#define GDDPMIMHOEC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDFF510)
#define GDDPMIMHOEC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDFEE10)
#define GDDPMIMHOEC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDFF0A0)
#define GDDPMIMHOEC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDFF5B0)
#define GDDPMIMHOEC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDFF600)
#define GDDPMIMHOEC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDFF3E0)
#define GDDPMIMHOEC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDFF040)
#define GDDPMIMHOEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDFF210)
#define GDDPMIMHOEC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDFF470)
#define GDDPMIMHOEC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDFED90)

inline static constexpr unsigned int GDDPMIMHOEC_TypeDefinitionIndex = 14863;

	class GDDPMIMHOEC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAdventureRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAdventureRoomRow*>**)UnitySDK::FromName("", "GDDPMIMHOEC")->GetStaticField(0x14A80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GDDPMIMHOEC")->GetStaticField(0x14A88);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GDDPMIMHOEC")->GetStaticField(0x14A90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GDDPMIMHOEC")->GetStaticField(0x4630);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDDPMIMHOEC")->GetStaticField(0x4631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAdventureRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAdventureRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicAdventureRoomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDDPMIMHOEC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDPMIMHOEC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDDPMIMHOEC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDDPMIMHOEC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GDDPMIMHOEC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicAdventureRoomRow*))((::PBYTE)hIl2Cpp + GDDPMIMHOEC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
