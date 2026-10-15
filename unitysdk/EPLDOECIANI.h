#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooInteractionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPLDOECIANI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD91CA0)
#define EPLDOECIANI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD92270)
#define EPLDOECIANI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD91E10)
#define EPLDOECIANI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD91710)
#define EPLDOECIANI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD919A0)
#define EPLDOECIANI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD91EB0)
#define EPLDOECIANI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD91F00)
#define EPLDOECIANI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD91CE0)
#define EPLDOECIANI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD91940)
#define EPLDOECIANI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD91B10)
#define EPLDOECIANI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD91D70)
#define EPLDOECIANI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD91690)

inline static constexpr unsigned int EPLDOECIANI_TypeDefinitionIndex = 12385;

	class EPLDOECIANI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EPLDOECIANI")->GetStaticField(0xE9C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EPLDOECIANI")->GetStaticField(0xE9C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooInteractionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooInteractionRow*>**)UnitySDK::FromName("", "EPLDOECIANI")->GetStaticField(0xE9D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EPLDOECIANI")->GetStaticField(0x2F80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EPLDOECIANI")->GetStaticField(0x2F81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooInteractionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooInteractionRow*>*(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooInteractionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooInteractionRow*>(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooInteractionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooInteractionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPLDOECIANI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPLDOECIANI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EPLDOECIANI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPLDOECIANI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EPLDOECIANI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpaceZooInteractionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooInteractionRow*))((::PBYTE)hIl2Cpp + EPLDOECIANI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
