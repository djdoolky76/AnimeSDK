#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmPresetSongRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGJMNDEFJMJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E95B180)
#define LGJMNDEFJMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95B700)
#define LGJMNDEFJMJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E95B2F0)
#define LGJMNDEFJMJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E95AC30)
#define LGJMNDEFJMJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E95AEC0)
#define LGJMNDEFJMJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E95B390)
#define LGJMNDEFJMJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E95B3E0)
#define LGJMNDEFJMJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E95B1C0)
#define LGJMNDEFJMJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E95AE60)
#define LGJMNDEFJMJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E95B030)
#define LGJMNDEFJMJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E95B250)
#define LGJMNDEFJMJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E95ABB0)

inline static constexpr unsigned int LGJMNDEFJMJ_TypeDefinitionIndex = 14433;

	class LGJMNDEFJMJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0x39AD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>**)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0x39AD8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0x39AE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0xB730);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGJMNDEFJMJ")->GetStaticField(0xB731);
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
