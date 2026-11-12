#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarAbilityStatisticsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMHJEINEKAD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E312380)
#define LMHJEINEKAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E312900)
#define LMHJEINEKAD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E3124F0)
#define LMHJEINEKAD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E311E30)
#define LMHJEINEKAD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3120C0)
#define LMHJEINEKAD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E312590)
#define LMHJEINEKAD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E3125E0)
#define LMHJEINEKAD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3123C0)
#define LMHJEINEKAD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E312060)
#define LMHJEINEKAD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E312230)
#define LMHJEINEKAD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E312450)
#define LMHJEINEKAD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E311DB0)

inline static constexpr unsigned int LMHJEINEKAD_TypeDefinitionIndex = 12923;

	class LMHJEINEKAD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMHJEINEKAD")->GetStaticField(0x36150);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LMHJEINEKAD")->GetStaticField(0x36158);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>**)UnitySDK::FromName("", "LMHJEINEKAD")->GetStaticField(0x36160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LMHJEINEKAD")->GetStaticField(0xB8B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMHJEINEKAD")->GetStaticField(0xB8B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>*(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAbilityStatisticsRow*>(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarAbilityStatisticsRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarAbilityStatisticsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LMHJEINEKAD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHJEINEKAD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMHJEINEKAD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMHJEINEKAD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMHJEINEKAD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarAbilityStatisticsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarAbilityStatisticsRow*))((::PBYTE)hIl2Cpp + LMHJEINEKAD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
