#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistantTipsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMJMJGDDPEJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E98C250)
#define DMJMJGDDPEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98C7D0)
#define DMJMJGDDPEJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E98C3C0)
#define DMJMJGDDPEJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E98BD00)
#define DMJMJGDDPEJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E98BF90)
#define DMJMJGDDPEJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E98C460)
#define DMJMJGDDPEJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E98C4B0)
#define DMJMJGDDPEJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E98C290)
#define DMJMJGDDPEJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E98BF30)
#define DMJMJGDDPEJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E98C0C0)
#define DMJMJGDDPEJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E98C320)
#define DMJMJGDDPEJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E98BC80)

inline static constexpr unsigned int DMJMJGDDPEJ_TypeDefinitionIndex = 12744;

	class DMJMJGDDPEJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x400B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsConfigRow*>**)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x400B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0x400C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0xCDF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMJMJGDDPEJ")->GetStaticField(0xCDF1);
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
