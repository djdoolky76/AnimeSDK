#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleDisplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDEKOFKLPEL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA51F30)
#define GDEKOFKLPEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA52500)
#define GDEKOFKLPEL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA520A0)
#define GDEKOFKLPEL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA519A0)
#define GDEKOFKLPEL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA51C30)
#define GDEKOFKLPEL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA52140)
#define GDEKOFKLPEL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA52190)
#define GDEKOFKLPEL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA51F70)
#define GDEKOFKLPEL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA51BD0)
#define GDEKOFKLPEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA51DA0)
#define GDEKOFKLPEL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA52000)
#define GDEKOFKLPEL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA51920)

inline static constexpr unsigned int GDEKOFKLPEL_TypeDefinitionIndex = 11506;

	class GDEKOFKLPEL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*>**)UnitySDK::FromName("", "GDEKOFKLPEL")->GetStaticField(0xBDB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GDEKOFKLPEL")->GetStaticField(0xBDB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GDEKOFKLPEL")->GetStaticField(0xBDC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GDEKOFKLPEL")->GetStaticField(0x1780);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDEKOFKLPEL")->GetStaticField(0x1781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionBattleDisplayConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleDisplayConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDEKOFKLPEL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDEKOFKLPEL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDEKOFKLPEL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDEKOFKLPEL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GDEKOFKLPEL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionBattleDisplayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleDisplayConfigRow*))((::PBYTE)hIl2Cpp + GDEKOFKLPEL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
