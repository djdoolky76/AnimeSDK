#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPPBMCLANEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5F26B0)
#define NPPBMCLANEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2C80)
#define NPPBMCLANEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5F2820)
#define NPPBMCLANEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E5F2120)
#define NPPBMCLANEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5F23B0)
#define NPPBMCLANEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E5F28C0)
#define NPPBMCLANEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5F2910)
#define NPPBMCLANEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E5F26F0)
#define NPPBMCLANEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5F2350)
#define NPPBMCLANEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5F2520)
#define NPPBMCLANEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E5F2780)
#define NPPBMCLANEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5F20A0)

inline static constexpr unsigned int NPPBMCLANEE_TypeDefinitionIndex = 11715;

	class NPPBMCLANEE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x54D80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x54D88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>**)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x54D90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x122C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NPPBMCLANEE")->GetStaticField(0x122C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenStatConfigRow* LMBKNCAIDLC(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + NPPBMCLANEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBMCLANEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NPPBMCLANEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPPBMCLANEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NPPBMCLANEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenStatConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenStatConfigRow*))((::PBYTE)hIl2Cpp + NPPBMCLANEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
