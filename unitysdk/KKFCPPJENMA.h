#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEmojiRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKFCPPJENMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09C570)
#define KKFCPPJENMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09CB40)
#define KKFCPPJENMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09C6E0)
#define KKFCPPJENMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09BFE0)
#define KKFCPPJENMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09C270)
#define KKFCPPJENMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09C780)
#define KKFCPPJENMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09C7D0)
#define KKFCPPJENMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09C5B0)
#define KKFCPPJENMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09C210)
#define KKFCPPJENMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09C3E0)
#define KKFCPPJENMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09C640)
#define KKFCPPJENMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09BF60)

inline static constexpr unsigned int KKFCPPJENMA_TypeDefinitionIndex = 13047;

	class KKFCPPJENMA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KKFCPPJENMA")->GetStaticField(0x35900);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKFCPPJENMA")->GetStaticField(0x35908);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEmojiRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEmojiRow*>**)UnitySDK::FromName("", "KKFCPPJENMA")->GetStaticField(0x35910);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKFCPPJENMA")->GetStaticField(0xB4B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKFCPPJENMA")->GetStaticField(0xB4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEmojiRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEmojiRow*>*(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEmojiRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEmojiRow*>(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraEmojiRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraEmojiRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKFCPPJENMA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKFCPPJENMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKFCPPJENMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKFCPPJENMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKFCPPJENMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraEmojiRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraEmojiRow*))((::PBYTE)hIl2Cpp + KKFCPPJENMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
