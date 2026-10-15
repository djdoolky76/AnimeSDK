#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmTrackRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NONEJFOPOIO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D243440)
#define NONEJFOPOIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D243A10)
#define NONEJFOPOIO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2435B0)
#define NONEJFOPOIO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D242EB0)
#define NONEJFOPOIO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D243140)
#define NONEJFOPOIO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D243650)
#define NONEJFOPOIO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2436A0)
#define NONEJFOPOIO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D243480)
#define NONEJFOPOIO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2430E0)
#define NONEJFOPOIO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2432B0)
#define NONEJFOPOIO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D243510)
#define NONEJFOPOIO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D242E30)

inline static constexpr unsigned int NONEJFOPOIO_TypeDefinitionIndex = 14272;

	class NONEJFOPOIO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NONEJFOPOIO")->GetStaticField(0x313D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NONEJFOPOIO")->GetStaticField(0x313D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmTrackRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmTrackRow*>**)UnitySDK::FromName("", "NONEJFOPOIO")->GetStaticField(0x313E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NONEJFOPOIO")->GetStaticField(0xA570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NONEJFOPOIO")->GetStaticField(0xA571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmTrackRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmTrackRow*>*(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmTrackRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmTrackRow*>(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmTrackRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmTrackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NONEJFOPOIO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NONEJFOPOIO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NONEJFOPOIO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NONEJFOPOIO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NONEJFOPOIO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MusicRhythmTrackRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmTrackRow*))((::PBYTE)hIl2Cpp + NONEJFOPOIO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
