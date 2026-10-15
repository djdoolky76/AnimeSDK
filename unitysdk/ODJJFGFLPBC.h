#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleBGMConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODJJFGFLPBC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D258F30)
#define ODJJFGFLPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D259720)
#define ODJJFGFLPBC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2592D0)
#define ODJJFGFLPBC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D258F70)
#define ODJJFGFLPBC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D258840)
#define ODJJFGFLPBC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D259370)
#define ODJJFGFLPBC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2593C0)
#define ODJJFGFLPBC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2591A0)
#define ODJJFGFLPBC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2587E0)
#define ODJJFGFLPBC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D258970)
#define ODJJFGFLPBC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D259230)
#define ODJJFGFLPBC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D258760)

inline static constexpr unsigned int ODJJFGFLPBC_TypeDefinitionIndex = 12825;

	class ODJJFGFLPBC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODJJFGFLPBC")->GetStaticField(0x32540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>**)UnitySDK::FromName("", "ODJJFGFLPBC")->GetStaticField(0x32548);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODJJFGFLPBC")->GetStaticField(0x32550);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODJJFGFLPBC")->GetStaticField(0xA9C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODJJFGFLPBC")->GetStaticField(0xA9C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleBGMConfigRow* LMBKNCAIDLC(::System::String* a1, ::RPG::GameCore::StageType a2)
		{
			return ((::RPG::GameCore::BattleBGMConfigRow*(*)(::System::String*, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + ODJJFGFLPBC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODJJFGFLPBC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ODJJFGFLPBC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODJJFGFLPBC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ODJJFGFLPBC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleBGMConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleBGMConfigRow*))((::PBYTE)hIl2Cpp + ODJJFGFLPBC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
