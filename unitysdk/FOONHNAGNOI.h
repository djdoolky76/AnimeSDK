#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnAssistConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOONHNAGNOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE18680)
#define FOONHNAGNOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE18C00)
#define FOONHNAGNOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE187F0)
#define FOONHNAGNOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE18130)
#define FOONHNAGNOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE183C0)
#define FOONHNAGNOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE18890)
#define FOONHNAGNOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE188E0)
#define FOONHNAGNOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE186C0)
#define FOONHNAGNOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE18360)
#define FOONHNAGNOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE184F0)
#define FOONHNAGNOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE18750)
#define FOONHNAGNOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE180B0)

inline static constexpr unsigned int FOONHNAGNOI_TypeDefinitionIndex = 14543;

	class FOONHNAGNOI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FOONHNAGNOI")->GetStaticField(0x15540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnAssistConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnAssistConfigRow*>**)UnitySDK::FromName("", "FOONHNAGNOI")->GetStaticField(0x15548);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOONHNAGNOI")->GetStaticField(0x15550);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOONHNAGNOI")->GetStaticField(0x5150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOONHNAGNOI")->GetStaticField(0x5151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnAssistConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnAssistConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnAssistConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnAssistConfigRow*>(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnAssistConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnAssistConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOONHNAGNOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOONHNAGNOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOONHNAGNOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOONHNAGNOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FOONHNAGNOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnAssistConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnAssistConfigRow*))((::PBYTE)hIl2Cpp + FOONHNAGNOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
