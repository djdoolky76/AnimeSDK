#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionTeamConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBEDEFDCGPG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1EDBB0)
#define NBEDEFDCGPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1EE180)
#define NBEDEFDCGPG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1EDD20)
#define NBEDEFDCGPG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1ED620)
#define NBEDEFDCGPG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1ED8B0)
#define NBEDEFDCGPG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1EDDC0)
#define NBEDEFDCGPG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1EDE10)
#define NBEDEFDCGPG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1EDBF0)
#define NBEDEFDCGPG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1ED850)
#define NBEDEFDCGPG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1EDA20)
#define NBEDEFDCGPG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1EDC80)
#define NBEDEFDCGPG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1ED5A0)

inline static constexpr unsigned int NBEDEFDCGPG_TypeDefinitionIndex = 13256;

	class NBEDEFDCGPG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>**)UnitySDK::FromName("", "NBEDEFDCGPG")->GetStaticField(0x2C870);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NBEDEFDCGPG")->GetStaticField(0x2C878);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBEDEFDCGPG")->GetStaticField(0x2C880);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NBEDEFDCGPG")->GetStaticField(0x8C60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NBEDEFDCGPG")->GetStaticField(0x8C61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionTeamConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionTeamConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NBEDEFDCGPG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEDEFDCGPG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NBEDEFDCGPG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBEDEFDCGPG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NBEDEFDCGPG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionTeamConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionTeamConfigRow*))((::PBYTE)hIl2Cpp + NBEDEFDCGPG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
