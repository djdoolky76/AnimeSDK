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

#define LIPDILCAJFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0FDBA0)
#define LIPDILCAJFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0FE170)
#define LIPDILCAJFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0FDD10)
#define LIPDILCAJFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FD610)
#define LIPDILCAJFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FD8A0)
#define LIPDILCAJFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0FDDB0)
#define LIPDILCAJFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0FDE00)
#define LIPDILCAJFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0FDBE0)
#define LIPDILCAJFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FD840)
#define LIPDILCAJFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FDA10)
#define LIPDILCAJFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0FDC70)
#define LIPDILCAJFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FD590)

inline static constexpr unsigned int LIPDILCAJFG_TypeDefinitionIndex = 13597;

	class LIPDILCAJFG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0x3F1B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>**)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0x3F1B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0x3F1C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0xD7D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIPDILCAJFG")->GetStaticField(0xD7D1);
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
