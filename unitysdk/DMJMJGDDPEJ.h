#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistantTipsConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMJMJGDDPEJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD45AB0)
#define DMJMJGDDPEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD46030)
#define DMJMJGDDPEJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD45C20)
#define DMJMJGDDPEJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD45560)
#define DMJMJGDDPEJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD457F0)
#define DMJMJGDDPEJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD45CC0)
#define DMJMJGDDPEJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD45D10)
#define DMJMJGDDPEJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD45AF0)
#define DMJMJGDDPEJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD45790)
#define DMJMJGDDPEJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD45920)
#define DMJMJGDDPEJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD45B80)
#define DMJMJGDDPEJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD454E0)

inline static constexpr unsigned int DMJMJGDDPEJ_TypeDefinitionIndex = 12677;

	class DMJMJGDDPEJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>**)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x50D50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x50D58);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x50D60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x121D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x121D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AssistantTipsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AssistantTipsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AssistantTipsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AssistantTipsConfigRow*))((::PBYTE)hIl2Cpp + DMJMJGDDPEJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
