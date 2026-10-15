#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmPhaseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKMAGBHJJJP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE60670)
#define GKMAGBHJJJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE60BF0)
#define GKMAGBHJJJP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE607E0)
#define GKMAGBHJJJP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE60160)
#define GKMAGBHJJJP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE603F0)
#define GKMAGBHJJJP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE60880)
#define GKMAGBHJJJP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE608D0)
#define GKMAGBHJJJP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE606B0)
#define GKMAGBHJJJP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE60390)
#define GKMAGBHJJJP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE60520)
#define GKMAGBHJJJP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE60740)
#define GKMAGBHJJJP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE600E0)

	class GKMAGBHJJJP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GKMAGBHJJJP")->GetStaticField(0x18EE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPhaseRow*>**)UnitySDK::FromName("", "GKMAGBHJJJP")->GetStaticField(0x18EE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKMAGBHJJJP")->GetStaticField(0x18EF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKMAGBHJJJP")->GetStaticField(0x5C00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKMAGBHJJJP")->GetStaticField(0x5C01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPhaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPhaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPhaseRow*>(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmPhaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKMAGBHJJJP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMAGBHJJJP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GKMAGBHJJJP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKMAGBHJJJP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GKMAGBHJJJP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MusicRhythmPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmPhaseRow*))((::PBYTE)hIl2Cpp + GKMAGBHJJJP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
