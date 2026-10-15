#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingCarRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFAODPLBKAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1FFAF0)
#define NFAODPLBKAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D200070)
#define NFAODPLBKAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1FFC60)
#define NFAODPLBKAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1FF5A0)
#define NFAODPLBKAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1FF830)
#define NFAODPLBKAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1FFD00)
#define NFAODPLBKAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1FFD50)
#define NFAODPLBKAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1FFB30)
#define NFAODPLBKAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1FF7D0)
#define NFAODPLBKAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1FF9A0)
#define NFAODPLBKAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1FFBC0)
#define NFAODPLBKAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1FF520)

inline static constexpr unsigned int NFAODPLBKAP_TypeDefinitionIndex = 10963;

	class NFAODPLBKAP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCarRow*>**)UnitySDK::FromName("", "NFAODPLBKAP")->GetStaticField(0x2DE20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFAODPLBKAP")->GetStaticField(0x2DE28);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NFAODPLBKAP")->GetStaticField(0x2DE30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFAODPLBKAP")->GetStaticField(0x9650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFAODPLBKAP")->GetStaticField(0x9651);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCarRow*>*(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingCarRow*>(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingCarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingCarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NFAODPLBKAP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAODPLBKAP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFAODPLBKAP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFAODPLBKAP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NFAODPLBKAP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingCarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingCarRow*))((::PBYTE)hIl2Cpp + NFAODPLBKAP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
