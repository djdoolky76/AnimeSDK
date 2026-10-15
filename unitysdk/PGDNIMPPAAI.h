#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmSoundEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGDNIMPPAAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E02E0)
#define PGDNIMPPAAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E08B0)
#define PGDNIMPPAAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E0450)
#define PGDNIMPPAAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2DFD50)
#define PGDNIMPPAAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2DFFE0)
#define PGDNIMPPAAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E04F0)
#define PGDNIMPPAAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E0540)
#define PGDNIMPPAAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E0320)
#define PGDNIMPPAAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2DFF80)
#define PGDNIMPPAAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E0150)
#define PGDNIMPPAAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E03B0)
#define PGDNIMPPAAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2DFCD0)

inline static constexpr unsigned int PGDNIMPPAAI_TypeDefinitionIndex = 14270;

	class PGDNIMPPAAI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSoundEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSoundEffectRow*>**)UnitySDK::FromName("", "PGDNIMPPAAI")->GetStaticField(0x3F7F0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PGDNIMPPAAI")->GetStaticField(0x3F7F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PGDNIMPPAAI")->GetStaticField(0x3F800);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PGDNIMPPAAI")->GetStaticField(0xD8B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PGDNIMPPAAI")->GetStaticField(0xD8B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSoundEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSoundEffectRow*>*(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSoundEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSoundEffectRow*>(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmSoundEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmSoundEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PGDNIMPPAAI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGDNIMPPAAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PGDNIMPPAAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGDNIMPPAAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PGDNIMPPAAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MusicRhythmSoundEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmSoundEffectRow*))((::PBYTE)hIl2Cpp + PGDNIMPPAAI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
