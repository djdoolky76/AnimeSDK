#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournAdventureRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PALMOAFGILA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D294530)
#define PALMOAFGILA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D294B00)
#define PALMOAFGILA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2946A0)
#define PALMOAFGILA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D293FA0)
#define PALMOAFGILA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D294230)
#define PALMOAFGILA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D294740)
#define PALMOAFGILA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D294790)
#define PALMOAFGILA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D294570)
#define PALMOAFGILA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2941D0)
#define PALMOAFGILA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2943A0)
#define PALMOAFGILA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D294600)
#define PALMOAFGILA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D293F20)

inline static constexpr unsigned int PALMOAFGILA_TypeDefinitionIndex = 14965;

	class PALMOAFGILA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>**)UnitySDK::FromName("", "PALMOAFGILA")->GetStaticField(0x4CAC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PALMOAFGILA")->GetStaticField(0x4CAC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PALMOAFGILA")->GetStaticField(0x4CAD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PALMOAFGILA")->GetStaticField(0x11870);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PALMOAFGILA")->GetStaticField(0x11871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournAdventureRoomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PALMOAFGILA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALMOAFGILA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PALMOAFGILA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PALMOAFGILA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PALMOAFGILA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournAdventureRoomRow*))((::PBYTE)hIl2Cpp + PALMOAFGILA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
