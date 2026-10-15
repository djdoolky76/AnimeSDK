#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialRestartBattleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAJAHEEEIBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC684F0)
#define AAJAHEEEIBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC690D0)
#define AAJAHEEEIBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC68890)
#define AAJAHEEEIBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC68530)
#define AAJAHEEEIBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC68DD0)
#define AAJAHEEEIBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC68930)
#define AAJAHEEEIBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC68980)
#define AAJAHEEEIBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC68760)
#define AAJAHEEEIBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC68D70)
#define AAJAHEEEIBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC68F40)
#define AAJAHEEEIBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC687F0)
#define AAJAHEEEIBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC68CF0)

inline static constexpr unsigned int AAJAHEEEIBN_TypeDefinitionIndex = 15175;

	class AAJAHEEEIBN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>**)UnitySDK::FromName("", "AAJAHEEEIBN")->GetStaticField(0x3CE80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AAJAHEEEIBN")->GetStaticField(0x3CE88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAJAHEEEIBN")->GetStaticField(0x3CE90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAJAHEEEIBN")->GetStaticField(0xC2C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAJAHEEEIBN")->GetStaticField(0xC2C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAJAHEEEIBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAJAHEEEIBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAJAHEEEIBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpecialRestartBattleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialRestartBattleRow*))((::PBYTE)hIl2Cpp + AAJAHEEEIBN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>*(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>(*)())((::PBYTE)hIl2Cpp + AAJAHEEEIBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpecialRestartBattleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpecialRestartBattleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAJAHEEEIBN_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
