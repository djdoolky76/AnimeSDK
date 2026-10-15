#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityVoracityInvasionProRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEFGKMKLFJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD75390)
#define EEFGKMKLFJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD75A30)
#define EEFGKMKLFJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD75580)
#define EEFGKMKLFJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD74C90)
#define EEFGKMKLFJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD74FF0)
#define EEFGKMKLFJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD75650)
#define EEFGKMKLFJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD756C0)
#define EEFGKMKLFJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD753F0)
#define EEFGKMKLFJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD74F70)
#define EEFGKMKLFJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD751A0)
#define EEFGKMKLFJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD754B0)
#define EEFGKMKLFJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD74B80)

inline static constexpr unsigned int EEFGKMKLFJO_TypeDefinitionIndex = 12543;

	class EEFGKMKLFJO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EEFGKMKLFJO")->GetStaticField(0x53A80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EEFGKMKLFJO")->GetStaticField(0x53A88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProRow*>**)UnitySDK::FromName("", "EEFGKMKLFJO")->GetStaticField(0x53A90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EEFGKMKLFJO")->GetStaticField(0x128F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EEFGKMKLFJO")->GetStaticField(0x128F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProRow*>*(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProRow*>(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityVoracityInvasionProRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityVoracityInvasionProRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EEFGKMKLFJO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFGKMKLFJO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EEFGKMKLFJO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EEFGKMKLFJO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EEFGKMKLFJO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityVoracityInvasionProRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityVoracityInvasionProRow*))((::PBYTE)hIl2Cpp + EEFGKMKLFJO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
