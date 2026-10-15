#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightVictoryBonusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBJAONODOCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D033640)
#define KBJAONODOCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D033C10)
#define KBJAONODOCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0337B0)
#define KBJAONODOCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0330B0)
#define KBJAONODOCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D033340)
#define KBJAONODOCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D033850)
#define KBJAONODOCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0338A0)
#define KBJAONODOCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D033680)
#define KBJAONODOCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0332E0)
#define KBJAONODOCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0334B0)
#define KBJAONODOCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D033710)
#define KBJAONODOCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D033030)

inline static constexpr unsigned int KBJAONODOCO_TypeDefinitionIndex = 13414;

	class KBJAONODOCO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KBJAONODOCO")->GetStaticField(0x31B50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KBJAONODOCO")->GetStaticField(0x31B58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVictoryBonusConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVictoryBonusConfigRow*>**)UnitySDK::FromName("", "KBJAONODOCO")->GetStaticField(0x31B60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KBJAONODOCO")->GetStaticField(0xA3E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KBJAONODOCO")->GetStaticField(0xA3E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVictoryBonusConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVictoryBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVictoryBonusConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVictoryBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightVictoryBonusConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightVictoryBonusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KBJAONODOCO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBJAONODOCO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KBJAONODOCO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBJAONODOCO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KBJAONODOCO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightVictoryBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightVictoryBonusConfigRow*))((::PBYTE)hIl2Cpp + KBJAONODOCO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
