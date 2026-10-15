#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelPresetTeamRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LACCPGNJLGK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D0D20)
#define LACCPGNJLGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D12F0)
#define LACCPGNJLGK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D0E90)
#define LACCPGNJLGK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D0790)
#define LACCPGNJLGK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D0A20)
#define LACCPGNJLGK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D0F30)
#define LACCPGNJLGK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D0F80)
#define LACCPGNJLGK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D0D60)
#define LACCPGNJLGK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D09C0)
#define LACCPGNJLGK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D0B90)
#define LACCPGNJLGK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D0DF0)
#define LACCPGNJLGK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D0710)

inline static constexpr unsigned int LACCPGNJLGK_TypeDefinitionIndex = 11138;

	class LACCPGNJLGK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LACCPGNJLGK")->GetStaticField(0x3A8A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelPresetTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelPresetTeamRow*>**)UnitySDK::FromName("", "LACCPGNJLGK")->GetStaticField(0x3A8A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LACCPGNJLGK")->GetStaticField(0x3A8B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LACCPGNJLGK")->GetStaticField(0xC790);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LACCPGNJLGK")->GetStaticField(0xC791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelPresetTeamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelPresetTeamRow*>*(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelPresetTeamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelPresetTeamRow*>(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelPresetTeamRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelPresetTeamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LACCPGNJLGK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACCPGNJLGK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LACCPGNJLGK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LACCPGNJLGK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LACCPGNJLGK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelPresetTeamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelPresetTeamRow*))((::PBYTE)hIl2Cpp + LACCPGNJLGK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
