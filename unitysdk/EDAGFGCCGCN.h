#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmOpticalRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDAGFGCCGCN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9B7AC0)
#define EDAGFGCCGCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8040)
#define EDAGFGCCGCN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9B7C30)
#define EDAGFGCCGCN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9B7570)
#define EDAGFGCCGCN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9B7800)
#define EDAGFGCCGCN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9B7CD0)
#define EDAGFGCCGCN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9B7D20)
#define EDAGFGCCGCN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9B7B00)
#define EDAGFGCCGCN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9B77A0)
#define EDAGFGCCGCN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9B7930)
#define EDAGFGCCGCN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9B7B90)
#define EDAGFGCCGCN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9B74F0)

inline static constexpr unsigned int EDAGFGCCGCN_TypeDefinitionIndex = 14431;

	class EDAGFGCCGCN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmOpticalRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmOpticalRow*>**)UnitySDK::FromName("", "EDAGFGCCGCN")->GetStaticField(0x43E80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EDAGFGCCGCN")->GetStaticField(0x43E88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EDAGFGCCGCN")->GetStaticField(0x43E90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDAGFGCCGCN")->GetStaticField(0xD990);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EDAGFGCCGCN")->GetStaticField(0xD991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmOpticalRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmOpticalRow*>*(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmOpticalRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmOpticalRow*>(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmOpticalRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmOpticalRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EDAGFGCCGCN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAGFGCCGCN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EDAGFGCCGCN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDAGFGCCGCN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EDAGFGCCGCN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MusicRhythmOpticalRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmOpticalRow*))((::PBYTE)hIl2Cpp + EDAGFGCCGCN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
