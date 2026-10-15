#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyTeamRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDAOJBKJAEN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D07E6E0)
#define KDAOJBKJAEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07F2C0)
#define KDAOJBKJAEN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D07EA80)
#define KDAOJBKJAEN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D07E720)
#define KDAOJBKJAEN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D07EFC0)
#define KDAOJBKJAEN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D07EB20)
#define KDAOJBKJAEN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D07EB70)
#define KDAOJBKJAEN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D07E950)
#define KDAOJBKJAEN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D07EF60)
#define KDAOJBKJAEN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D07F130)
#define KDAOJBKJAEN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D07E9E0)
#define KDAOJBKJAEN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D07EEE0)

inline static constexpr unsigned int KDAOJBKJAEN_TypeDefinitionIndex = 15337;

	class KDAOJBKJAEN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0x33E40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyTeamRow*>**)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0x33E48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0x33E50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0xAE90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDAOJBKJAEN")->GetStaticField(0xAE91);
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
