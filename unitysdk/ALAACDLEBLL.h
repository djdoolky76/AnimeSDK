#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALAACDLEBLL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE814E0)
#define ALAACDLEBLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE81A60)
#define ALAACDLEBLL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE81650)
#define ALAACDLEBLL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE80F90)
#define ALAACDLEBLL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE81220)
#define ALAACDLEBLL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE816F0)
#define ALAACDLEBLL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE81740)
#define ALAACDLEBLL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE81520)
#define ALAACDLEBLL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE811C0)
#define ALAACDLEBLL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE81390)
#define ALAACDLEBLL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE815B0)
#define ALAACDLEBLL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE80F10)

inline static constexpr unsigned int ALAACDLEBLL_TypeDefinitionIndex = 11059;

	class ALAACDLEBLL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0x300D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0x300D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>**)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0x300E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0xA200);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0xA201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>*(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ALAACDLEBLL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ALAACDLEBLL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALAACDLEBLL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ALAACDLEBLL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingCardRow*))((::PBYTE)hIl2Cpp + ALAACDLEBLL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
