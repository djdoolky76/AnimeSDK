#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGEBFGCHHOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E082850)
#define HGEBFGCHHOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E082E20)
#define HGEBFGCHHOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0829C0)
#define HGEBFGCHHOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0822C0)
#define HGEBFGCHHOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E082550)
#define HGEBFGCHHOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E082A60)
#define HGEBFGCHHOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E082AB0)
#define HGEBFGCHHOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E082890)
#define HGEBFGCHHOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0824F0)
#define HGEBFGCHHOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0826C0)
#define HGEBFGCHHOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E082920)
#define HGEBFGCHHOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E082240)

inline static constexpr unsigned int HGEBFGCHHOM_TypeDefinitionIndex = 11500;

	class HGEBFGCHHOM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x15450);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x15458);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>**)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x15460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x46F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x46F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionBattleBuffConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGEBFGCHHOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEBFGCHHOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGEBFGCHHOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGEBFGCHHOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HGEBFGCHHOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionBattleBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleBuffConfigRow*))((::PBYTE)hIl2Cpp + HGEBFGCHHOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
