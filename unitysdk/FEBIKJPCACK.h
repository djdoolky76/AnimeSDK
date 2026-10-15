#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRelicBoxQuestConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEBIKJPCACK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDFE90)
#define FEBIKJPCACK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE0410)
#define FEBIKJPCACK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE0000)
#define FEBIKJPCACK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDF940)
#define FEBIKJPCACK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDFBD0)
#define FEBIKJPCACK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE00A0)
#define FEBIKJPCACK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE00F0)
#define FEBIKJPCACK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDFED0)
#define FEBIKJPCACK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDFB70)
#define FEBIKJPCACK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDFD00)
#define FEBIKJPCACK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDFF60)
#define FEBIKJPCACK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDF8C0)

inline static constexpr unsigned int FEBIKJPCACK_TypeDefinitionIndex = 12336;

	class FEBIKJPCACK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x10BA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x10BA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>**)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x10BB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x3890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x3891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRelicBoxQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRelicBoxQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FEBIKJPCACK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEBIKJPCACK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEBIKJPCACK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEBIKJPCACK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRelicBoxQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + FEBIKJPCACK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
