#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMMMHGPIHMH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9B5510)
#define BMMMHGPIHMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9B5AE0)
#define BMMMHGPIHMH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9B5680)
#define BMMMHGPIHMH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9B4F80)
#define BMMMHGPIHMH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9B5210)
#define BMMMHGPIHMH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9B5720)
#define BMMMHGPIHMH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9B5770)
#define BMMMHGPIHMH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9B5550)
#define BMMMHGPIHMH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9B51B0)
#define BMMMHGPIHMH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9B5380)
#define BMMMHGPIHMH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9B55E0)
#define BMMMHGPIHMH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9B4F00)

inline static constexpr unsigned int BMMMHGPIHMH_TypeDefinitionIndex = 11092;

	class BMMMHGPIHMH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0x38A00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0x38A08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>**)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0x38A10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0xB5D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0xB5D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>*(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingActionRow*))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
