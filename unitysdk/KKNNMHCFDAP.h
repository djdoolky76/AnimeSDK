#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingMoodRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKNNMHCFDAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A05F0)
#define KKNNMHCFDAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A0BC0)
#define KKNNMHCFDAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A0760)
#define KKNNMHCFDAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A0060)
#define KKNNMHCFDAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A02F0)
#define KKNNMHCFDAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A0800)
#define KKNNMHCFDAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A0850)
#define KKNNMHCFDAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A0630)
#define KKNNMHCFDAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A0290)
#define KKNNMHCFDAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A0460)
#define KKNNMHCFDAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A06C0)
#define KKNNMHCFDAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09FFE0)

inline static constexpr unsigned int KKNNMHCFDAP_TypeDefinitionIndex = 12448;

	class KKNNMHCFDAP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKNNMHCFDAP")->GetStaticField(0x35E70);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KKNNMHCFDAP")->GetStaticField(0x35E78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingMoodRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingMoodRow*>**)UnitySDK::FromName("", "KKNNMHCFDAP")->GetStaticField(0x35E80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKNNMHCFDAP")->GetStaticField(0xB5F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKNNMHCFDAP")->GetStaticField(0xB5F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingMoodRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingMoodRow*>*(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingMoodRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingMoodRow*>(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingMoodRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingMoodRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKNNMHCFDAP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNNMHCFDAP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKNNMHCFDAP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKNNMHCFDAP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKNNMHCFDAP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingMoodRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingMoodRow*))((::PBYTE)hIl2Cpp + KKNNMHCFDAP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
