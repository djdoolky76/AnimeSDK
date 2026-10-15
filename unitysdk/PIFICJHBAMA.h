#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIFICJHBAMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C0520)
#define PIFICJHBAMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C0AF0)
#define PIFICJHBAMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C0690)
#define PIFICJHBAMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BFF90)
#define PIFICJHBAMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C0220)
#define PIFICJHBAMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C0730)
#define PIFICJHBAMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C0780)
#define PIFICJHBAMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C0560)
#define PIFICJHBAMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C01C0)
#define PIFICJHBAMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C0390)
#define PIFICJHBAMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C05F0)
#define PIFICJHBAMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BFF10)

inline static constexpr unsigned int PIFICJHBAMA_TypeDefinitionIndex = 12104;

	class PIFICJHBAMA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PIFICJHBAMA")->GetStaticField(0x509F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>**)UnitySDK::FromName("", "PIFICJHBAMA")->GetStaticField(0x509F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PIFICJHBAMA")->GetStaticField(0x50A00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PIFICJHBAMA")->GetStaticField(0x12300);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PIFICJHBAMA")->GetStaticField(0x12301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityParkourAIConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityParkourAIConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PIFICJHBAMA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFICJHBAMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PIFICJHBAMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIFICJHBAMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PIFICJHBAMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityParkourAIConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityParkourAIConfigRow*))((::PBYTE)hIl2Cpp + PIFICJHBAMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
