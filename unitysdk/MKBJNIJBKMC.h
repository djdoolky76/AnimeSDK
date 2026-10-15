#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatConstValueRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKBJNIJBKMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B77F0)
#define MKBJNIJBKMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B7D70)
#define MKBJNIJBKMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B7960)
#define MKBJNIJBKMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B7280)
#define MKBJNIJBKMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B7510)
#define MKBJNIJBKMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B7A00)
#define MKBJNIJBKMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B7A50)
#define MKBJNIJBKMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B7830)
#define MKBJNIJBKMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B74B0)
#define MKBJNIJBKMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B7680)
#define MKBJNIJBKMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B78C0)
#define MKBJNIJBKMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B7200)

inline static constexpr unsigned int MKBJNIJBKMC_TypeDefinitionIndex = 11234;

	class MKBJNIJBKMC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MKBJNIJBKMC")->GetStaticField(0x4D8D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MKBJNIJBKMC")->GetStaticField(0x4D8D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatConstValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatConstValueRow*>**)UnitySDK::FromName("", "MKBJNIJBKMC")->GetStaticField(0x4D8E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MKBJNIJBKMC")->GetStaticField(0x11D30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MKBJNIJBKMC")->GetStaticField(0x11D31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatConstValueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatConstValueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatConstValueRow*>(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DiceCombatConstValueRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::DiceCombatConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + MKBJNIJBKMC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBJNIJBKMC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MKBJNIJBKMC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKBJNIJBKMC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MKBJNIJBKMC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DiceCombatConstValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DiceCombatConstValueRow*))((::PBYTE)hIl2Cpp + MKBJNIJBKMC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
