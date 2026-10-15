#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicWorkbenchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMHJIJJDHMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF4B60)
#define IMHJIJJDHMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF5130)
#define IMHJIJJDHMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF4CD0)
#define IMHJIJJDHMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF45D0)
#define IMHJIJJDHMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF4860)
#define IMHJIJJDHMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF4D70)
#define IMHJIJJDHMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF4DC0)
#define IMHJIJJDHMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF4BA0)
#define IMHJIJJDHMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF4800)
#define IMHJIJJDHMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF49D0)
#define IMHJIJJDHMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF4C30)
#define IMHJIJJDHMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF4550)

inline static constexpr unsigned int IMHJIJJDHMF_TypeDefinitionIndex = 14871;

	class IMHJIJJDHMF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IMHJIJJDHMF")->GetStaticField(0x23940);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IMHJIJJDHMF")->GetStaticField(0x23948);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>**)UnitySDK::FromName("", "IMHJIJJDHMF")->GetStaticField(0x23950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IMHJIJJDHMF")->GetStaticField(0x7B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IMHJIJJDHMF")->GetStaticField(0x7B51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>*(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicWorkbenchRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicWorkbenchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IMHJIJJDHMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMHJIJJDHMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IMHJIJJDHMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IMHJIJJDHMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IMHJIJJDHMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicWorkbenchRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicWorkbenchRow*))((::PBYTE)hIl2Cpp + IMHJIJJDHMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
