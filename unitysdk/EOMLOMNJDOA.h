#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyMtRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOMLOMNJDOA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF92270)
#define EOMLOMNJDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF92E50)
#define EOMLOMNJDOA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF92610)
#define EOMLOMNJDOA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF922B0)
#define EOMLOMNJDOA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF92B50)
#define EOMLOMNJDOA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF926B0)
#define EOMLOMNJDOA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF92700)
#define EOMLOMNJDOA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF924E0)
#define EOMLOMNJDOA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF92AF0)
#define EOMLOMNJDOA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF92CC0)
#define EOMLOMNJDOA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF92570)
#define EOMLOMNJDOA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF92A70)

inline static constexpr unsigned int EOMLOMNJDOA_TypeDefinitionIndex = 15515;

	class EOMLOMNJDOA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EOMLOMNJDOA")->GetStaticField(0x3BC50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EOMLOMNJDOA")->GetStaticField(0x3BC58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>**)UnitySDK::FromName("", "EOMLOMNJDOA")->GetStaticField(0x3BC60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EOMLOMNJDOA")->GetStaticField(0xD250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EOMLOMNJDOA")->GetStaticField(0xD251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EOMLOMNJDOA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EOMLOMNJDOA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EOMLOMNJDOA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyMtRankConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyMtRankConfigRow*))((::PBYTE)hIl2Cpp + EOMLOMNJDOA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + EOMLOMNJDOA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyMtRankConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyMtRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EOMLOMNJDOA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
