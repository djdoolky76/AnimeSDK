#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubPerformanceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICCOECNDLGF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0D4A30)
#define ICCOECNDLGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5000)
#define ICCOECNDLGF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0D4BA0)
#define ICCOECNDLGF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0D44A0)
#define ICCOECNDLGF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0D4730)
#define ICCOECNDLGF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0D4C40)
#define ICCOECNDLGF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0D4C90)
#define ICCOECNDLGF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0D4A70)
#define ICCOECNDLGF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0D46D0)
#define ICCOECNDLGF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0D48A0)
#define ICCOECNDLGF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0D4B00)
#define ICCOECNDLGF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0D4420)

inline static constexpr unsigned int ICCOECNDLGF_TypeDefinitionIndex = 12997;

	class ICCOECNDLGF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ICCOECNDLGF")->GetStaticField(0x192E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ICCOECNDLGF")->GetStaticField(0x192E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubPerformanceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubPerformanceConfigRow*>**)UnitySDK::FromName("", "ICCOECNDLGF")->GetStaticField(0x192F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ICCOECNDLGF")->GetStaticField(0x52A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ICCOECNDLGF")->GetStaticField(0x52A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubPerformanceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubPerformanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubPerformanceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubPerformanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubPerformanceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubPerformanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ICCOECNDLGF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCOECNDLGF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICCOECNDLGF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICCOECNDLGF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ICCOECNDLGF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BoxingClubPerformanceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubPerformanceConfigRow*))((::PBYTE)hIl2Cpp + ICCOECNDLGF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
