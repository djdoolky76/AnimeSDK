#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAGOILJAIOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB9D4A0)
#define DAGOILJAIOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9DA20)
#define DAGOILJAIOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB9D610)
#define DAGOILJAIOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB9CF50)
#define DAGOILJAIOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB9D1E0)
#define DAGOILJAIOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB9D6B0)
#define DAGOILJAIOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB9D700)
#define DAGOILJAIOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB9D4E0)
#define DAGOILJAIOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB9D180)
#define DAGOILJAIOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB9D310)
#define DAGOILJAIOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB9D570)
#define DAGOILJAIOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB9CED0)

inline static constexpr unsigned int DAGOILJAIOH_TypeDefinitionIndex = 11905;

	class DAGOILJAIOH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>**)UnitySDK::FromName("", "DAGOILJAIOH")->GetStaticField(0x387D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DAGOILJAIOH")->GetStaticField(0x387D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DAGOILJAIOH")->GetStaticField(0x387E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DAGOILJAIOH")->GetStaticField(0xB220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DAGOILJAIOH")->GetStaticField(0xB221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>*(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DAGOILJAIOH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGOILJAIOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DAGOILJAIOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAGOILJAIOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DAGOILJAIOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleSealRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + DAGOILJAIOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
