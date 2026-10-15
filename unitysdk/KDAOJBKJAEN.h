#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyTeamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDAOJBKJAEN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D050760)
#define KDAOJBKJAEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D051340)
#define KDAOJBKJAEN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D050B00)
#define KDAOJBKJAEN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0507A0)
#define KDAOJBKJAEN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D051040)
#define KDAOJBKJAEN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D050BA0)
#define KDAOJBKJAEN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D050BF0)
#define KDAOJBKJAEN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0509D0)
#define KDAOJBKJAEN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D050FE0)
#define KDAOJBKJAEN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0511B0)
#define KDAOJBKJAEN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D050A60)
#define KDAOJBKJAEN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D050F60)

inline static constexpr unsigned int KDAOJBKJAEN_TypeDefinitionIndex = 15337;

	class KDAOJBKJAEN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0x33B50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0x33B58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>**)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0x33B60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0xA7F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0xA7F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDAOJBKJAEN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDAOJBKJAEN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDAOJBKJAEN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyTeamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyTeamRow*))((::PBYTE)hIl2Cpp + KDAOJBKJAEN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>*(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>(*)())((::PBYTE)hIl2Cpp + KDAOJBKJAEN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyTeamRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyTeamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDAOJBKJAEN_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
