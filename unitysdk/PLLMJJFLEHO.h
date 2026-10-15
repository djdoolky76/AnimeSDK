#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpineAnimTriggerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLLMJJFLEHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2D4A20)
#define PLLMJJFLEHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2D4FF0)
#define PLLMJJFLEHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2D4B90)
#define PLLMJJFLEHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2D4490)
#define PLLMJJFLEHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2D4720)
#define PLLMJJFLEHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2D4C30)
#define PLLMJJFLEHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2D4C80)
#define PLLMJJFLEHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2D4A60)
#define PLLMJJFLEHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2D46C0)
#define PLLMJJFLEHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2D4890)
#define PLLMJJFLEHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2D4AF0)
#define PLLMJJFLEHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2D4410)

inline static constexpr unsigned int PLLMJJFLEHO_TypeDefinitionIndex = 11815;

	class PLLMJJFLEHO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PLLMJJFLEHO")->GetStaticField(0x51630);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*>**)UnitySDK::FromName("", "PLLMJJFLEHO")->GetStaticField(0x51638);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLLMJJFLEHO")->GetStaticField(0x51640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLLMJJFLEHO")->GetStaticField(0x12510);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLLMJJFLEHO")->GetStaticField(0x12511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*>*(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*>(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpineAnimTriggerRow* LMBKNCAIDLC(::RPG::GameCore::IdleLiveSpineAnimTriggerType a1)
		{
			return ((::RPG::GameCore::IdleLiveSpineAnimTriggerRow*(*)(::RPG::GameCore::IdleLiveSpineAnimTriggerType))((::PBYTE)hIl2Cpp + PLLMJJFLEHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLLMJJFLEHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLLMJJFLEHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLLMJJFLEHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLLMJJFLEHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpineAnimTriggerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineAnimTriggerRow*))((::PBYTE)hIl2Cpp + PLLMJJFLEHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
