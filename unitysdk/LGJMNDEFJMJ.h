#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmPresetSongRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGJMNDEFJMJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EE000)
#define LGJMNDEFJMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EE580)
#define LGJMNDEFJMJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EE170)
#define LGJMNDEFJMJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EDAB0)
#define LGJMNDEFJMJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EDD40)
#define LGJMNDEFJMJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EE210)
#define LGJMNDEFJMJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EE260)
#define LGJMNDEFJMJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EE040)
#define LGJMNDEFJMJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EDCE0)
#define LGJMNDEFJMJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0EDEB0)
#define LGJMNDEFJMJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EE0D0)
#define LGJMNDEFJMJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EDA30)

inline static constexpr unsigned int LGJMNDEFJMJ_TypeDefinitionIndex = 14276;

	class LGJMNDEFJMJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>**)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0x3CF50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0x3CF58);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0x3CF60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0xD150);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0xD151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>*(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmPresetSongRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmPresetSongRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MusicRhythmPresetSongRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmPresetSongRow*))((::PBYTE)hIl2Cpp + LGJMNDEFJMJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
