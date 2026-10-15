#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookClueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDNGGBIBHHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCCFE10)
#define BDNGGBIBHHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD09F0)
#define BDNGGBIBHHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD01B0)
#define BDNGGBIBHHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCCFE50)
#define BDNGGBIBHHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD06F0)
#define BDNGGBIBHHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD0250)
#define BDNGGBIBHHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD02A0)
#define BDNGGBIBHHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD0080)
#define BDNGGBIBHHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD0690)
#define BDNGGBIBHHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD0860)
#define BDNGGBIBHHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD0110)
#define BDNGGBIBHHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD0610)

inline static constexpr unsigned int BDNGGBIBHHO_TypeDefinitionIndex = 15252;

	class BDNGGBIBHHO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BDNGGBIBHHO")->GetStaticField(0x44010);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BDNGGBIBHHO")->GetStaticField(0x44018);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookClueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookClueRow*>**)UnitySDK::FromName("", "BDNGGBIBHHO")->GetStaticField(0x44020);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BDNGGBIBHHO")->GetStaticField(0x10190);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BDNGGBIBHHO")->GetStaticField(0x10191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BDNGGBIBHHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDNGGBIBHHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BDNGGBIBHHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookClueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookClueRow*))((::PBYTE)hIl2Cpp + BDNGGBIBHHO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookClueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookClueRow*>*(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookClueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookClueRow*>(*)())((::PBYTE)hIl2Cpp + BDNGGBIBHHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookClueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookClueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BDNGGBIBHHO_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
