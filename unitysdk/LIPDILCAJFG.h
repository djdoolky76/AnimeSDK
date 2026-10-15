#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRarityWeightConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIPDILCAJFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0CFD50)
#define LIPDILCAJFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D0320)
#define LIPDILCAJFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0CFEC0)
#define LIPDILCAJFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0CF7C0)
#define LIPDILCAJFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0CFA50)
#define LIPDILCAJFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0CFF60)
#define LIPDILCAJFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0CFFB0)
#define LIPDILCAJFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0CFD90)
#define LIPDILCAJFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0CF9F0)
#define LIPDILCAJFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0CFBC0)
#define LIPDILCAJFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0CFE20)
#define LIPDILCAJFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0CF740)

inline static constexpr unsigned int LIPDILCAJFG_TypeDefinitionIndex = 13597;

	class LIPDILCAJFG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0x3C440);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>**)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0x3C448);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0x3C450);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0xC0C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0xC0C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRarityWeightConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRarityWeightConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIPDILCAJFG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIPDILCAJFG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIPDILCAJFG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIPDILCAJFG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIPDILCAJFG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRarityWeightConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRarityWeightConfigRow*))((::PBYTE)hIl2Cpp + LIPDILCAJFG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
