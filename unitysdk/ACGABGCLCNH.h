#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACGABGCLCNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E015ED0)
#define ACGABGCLCNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E016450)
#define ACGABGCLCNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E016040)
#define ACGABGCLCNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0159C0)
#define ACGABGCLCNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E015C50)
#define ACGABGCLCNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0160E0)
#define ACGABGCLCNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E016130)
#define ACGABGCLCNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E015F10)
#define ACGABGCLCNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E015BF0)
#define ACGABGCLCNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E015D80)
#define ACGABGCLCNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E015FA0)
#define ACGABGCLCNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E015940)

inline static constexpr unsigned int ACGABGCLCNH_TypeDefinitionIndex = 11016;

	class ACGABGCLCNH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x32EF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>**)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x32EF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x32F00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x9DE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x9DE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>*(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ACGABGCLCNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACGABGCLCNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACGABGCLCNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACGABGCLCNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceEffectRow*))((::PBYTE)hIl2Cpp + ACGABGCLCNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
