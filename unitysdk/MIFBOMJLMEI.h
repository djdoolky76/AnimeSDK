#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropTriggerEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIFBOMJLMEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D184700)
#define MIFBOMJLMEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D184C80)
#define MIFBOMJLMEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D184870)
#define MIFBOMJLMEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1841B0)
#define MIFBOMJLMEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D184440)
#define MIFBOMJLMEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D184910)
#define MIFBOMJLMEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D184960)
#define MIFBOMJLMEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D184740)
#define MIFBOMJLMEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1843E0)
#define MIFBOMJLMEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1845B0)
#define MIFBOMJLMEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1847D0)
#define MIFBOMJLMEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D184130)

inline static constexpr unsigned int MIFBOMJLMEI_TypeDefinitionIndex = 14567;

	class MIFBOMJLMEI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MIFBOMJLMEI")->GetStaticField(0x46A40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MIFBOMJLMEI")->GetStaticField(0x46A48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropTriggerEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropTriggerEventRow*>**)UnitySDK::FromName("", "MIFBOMJLMEI")->GetStaticField(0x46A50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MIFBOMJLMEI")->GetStaticField(0x10900);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MIFBOMJLMEI")->GetStaticField(0x10901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropTriggerEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropTriggerEventRow*>*(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropTriggerEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropTriggerEventRow*>(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PropTriggerEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PropTriggerEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIFBOMJLMEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIFBOMJLMEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIFBOMJLMEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIFBOMJLMEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MIFBOMJLMEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PropTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropTriggerEventRow*))((::PBYTE)hIl2Cpp + MIFBOMJLMEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
