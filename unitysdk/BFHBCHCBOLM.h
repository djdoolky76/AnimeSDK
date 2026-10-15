#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkBehaviorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFHBCHCBOLM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D672C50)
#define BFHBCHCBOLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D673830)
#define BFHBCHCBOLM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D672FF0)
#define BFHBCHCBOLM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D672C90)
#define BFHBCHCBOLM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D673530)
#define BFHBCHCBOLM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D673090)
#define BFHBCHCBOLM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D6730E0)
#define BFHBCHCBOLM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D672EC0)
#define BFHBCHCBOLM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D6734D0)
#define BFHBCHCBOLM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D6736A0)
#define BFHBCHCBOLM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D672F50)
#define BFHBCHCBOLM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D673450)

inline static constexpr unsigned int BFHBCHCBOLM_TypeDefinitionIndex = 15214;

	class BFHBCHCBOLM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>**)UnitySDK::FromName("", "BFHBCHCBOLM")->GetStaticField(0x33D70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BFHBCHCBOLM")->GetStaticField(0x33D78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BFHBCHCBOLM")->GetStaticField(0x33D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BFHBCHCBOLM")->GetStaticField(0xAE50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BFHBCHCBOLM")->GetStaticField(0xAE51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BFHBCHCBOLM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFHBCHCBOLM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BFHBCHCBOLM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TalkBehaviorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + BFHBCHCBOLM_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>*(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>(*)())((::PBYTE)hIl2Cpp + BFHBCHCBOLM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TalkBehaviorRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkBehaviorRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFHBCHCBOLM_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
