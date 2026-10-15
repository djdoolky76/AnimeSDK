#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmSongRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOCKIEGFIAO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9C0470)
#define BOCKIEGFIAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9C09F0)
#define BOCKIEGFIAO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9C05E0)
#define BOCKIEGFIAO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9BFF60)
#define BOCKIEGFIAO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9C01F0)
#define BOCKIEGFIAO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9C0680)
#define BOCKIEGFIAO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9C06D0)
#define BOCKIEGFIAO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9C04B0)
#define BOCKIEGFIAO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9C0190)
#define BOCKIEGFIAO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9C0320)
#define BOCKIEGFIAO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9C0540)
#define BOCKIEGFIAO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9BFEE0)

inline static constexpr unsigned int BOCKIEGFIAO_TypeDefinitionIndex = 14268;

	class BOCKIEGFIAO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOCKIEGFIAO")->GetStaticField(0x38B80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BOCKIEGFIAO")->GetStaticField(0x38B88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSongRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSongRow*>**)UnitySDK::FromName("", "BOCKIEGFIAO")->GetStaticField(0x38B90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOCKIEGFIAO")->GetStaticField(0xB690);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOCKIEGFIAO")->GetStaticField(0xB691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSongRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSongRow*>*(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSongRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmSongRow*>(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmSongRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmSongRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BOCKIEGFIAO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOCKIEGFIAO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOCKIEGFIAO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOCKIEGFIAO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOCKIEGFIAO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MusicRhythmSongRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmSongRow*))((::PBYTE)hIl2Cpp + BOCKIEGFIAO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
