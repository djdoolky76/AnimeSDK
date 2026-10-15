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

#define HGEBFGCHHOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE766F0)
#define HGEBFGCHHOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE76CC0)
#define HGEBFGCHHOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE76860)
#define HGEBFGCHHOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE76160)
#define HGEBFGCHHOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE763F0)
#define HGEBFGCHHOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE76900)
#define HGEBFGCHHOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE76950)
#define HGEBFGCHHOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE76730)
#define HGEBFGCHHOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE76390)
#define HGEBFGCHHOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE76560)
#define HGEBFGCHHOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE767C0)
#define HGEBFGCHHOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE760E0)

inline static constexpr unsigned int HGEBFGCHHOM_TypeDefinitionIndex = 11449;

	class HGEBFGCHHOM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x1B560);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*>**)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x1B568);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x1B570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x5EB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGEBFGCHHOM")->GetStaticField(0x5EB1);
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
