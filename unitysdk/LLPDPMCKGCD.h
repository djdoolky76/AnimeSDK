#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLPDPMCKGCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D110860)
#define LLPDPMCKGCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D110E30)
#define LLPDPMCKGCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1109D0)
#define LLPDPMCKGCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1102D0)
#define LLPDPMCKGCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D110560)
#define LLPDPMCKGCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D110A70)
#define LLPDPMCKGCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D110AC0)
#define LLPDPMCKGCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1108A0)
#define LLPDPMCKGCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D110500)
#define LLPDPMCKGCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1106D0)
#define LLPDPMCKGCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D110930)
#define LLPDPMCKGCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D110250)

inline static constexpr unsigned int LLPDPMCKGCD_TypeDefinitionIndex = 14726;

	class LLPDPMCKGCD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleGroupRow*>**)UnitySDK::FromName("", "LLPDPMCKGCD")->GetStaticField(0x443B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LLPDPMCKGCD")->GetStaticField(0x443B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LLPDPMCKGCD")->GetStaticField(0x443C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LLPDPMCKGCD")->GetStaticField(0x10460);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LLPDPMCKGCD")->GetStaticField(0x10461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleGroupRow*>(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMiracleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMiracleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LLPDPMCKGCD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPDPMCKGCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LLPDPMCKGCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLPDPMCKGCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LLPDPMCKGCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMiracleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMiracleGroupRow*))((::PBYTE)hIl2Cpp + LLPDPMCKGCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
