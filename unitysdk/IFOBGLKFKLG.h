#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EPOIGLEBNCB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFOBGLKFKLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEC8390)
#define IFOBGLKFKLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC8960)
#define IFOBGLKFKLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEC8500)
#define IFOBGLKFKLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEC7E00)
#define IFOBGLKFKLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEC8090)
#define IFOBGLKFKLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEC85A0)
#define IFOBGLKFKLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEC85F0)
#define IFOBGLKFKLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEC83D0)
#define IFOBGLKFKLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEC8030)
#define IFOBGLKFKLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEC8200)
#define IFOBGLKFKLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEC8460)
#define IFOBGLKFKLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEC7D80)

inline static constexpr unsigned int IFOBGLKFKLG_TypeDefinitionIndex = 13916;

	class IFOBGLKFKLG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IFOBGLKFKLG")->GetStaticField(0x21760);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPOIGLEBNCB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPOIGLEBNCB*>**)UnitySDK::FromName("", "IFOBGLKFKLG")->GetStaticField(0x21768);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IFOBGLKFKLG")->GetStaticField(0x21770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IFOBGLKFKLG")->GetStaticField(0x7600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IFOBGLKFKLG")->GetStaticField(0x7601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPOIGLEBNCB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPOIGLEBNCB*>*(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EPOIGLEBNCB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EPOIGLEBNCB*>(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::EPOIGLEBNCB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::EPOIGLEBNCB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IFOBGLKFKLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFOBGLKFKLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFOBGLKFKLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFOBGLKFKLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IFOBGLKFKLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EPOIGLEBNCB* a1)
		{
			return ((::System::Void(*)(::EPOIGLEBNCB*))((::PBYTE)hIl2Cpp + IFOBGLKFKLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
