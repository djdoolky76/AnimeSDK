#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePassWeekConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGHNFNPHNDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B50C0)
#define PGHNFNPHNDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B5640)
#define PGHNFNPHNDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B5230)
#define PGHNFNPHNDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2B4B70)
#define PGHNFNPHNDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2B4E00)
#define PGHNFNPHNDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B52D0)
#define PGHNFNPHNDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B5320)
#define PGHNFNPHNDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B5100)
#define PGHNFNPHNDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2B4DA0)
#define PGHNFNPHNDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2B4F70)
#define PGHNFNPHNDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B5190)
#define PGHNFNPHNDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2B4AF0)

inline static constexpr unsigned int PGHNFNPHNDB_TypeDefinitionIndex = 12876;

	class PGHNFNPHNDB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>**)UnitySDK::FromName("", "PGHNFNPHNDB")->GetStaticField(0x4E9E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PGHNFNPHNDB")->GetStaticField(0x4E9E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PGHNFNPHNDB")->GetStaticField(0x4E9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PGHNFNPHNDB")->GetStaticField(0x11F10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PGHNFNPHNDB")->GetStaticField(0x11F11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattlePassWeekConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattlePassWeekConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PGHNFNPHNDB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHNFNPHNDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PGHNFNPHNDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGHNFNPHNDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PGHNFNPHNDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattlePassWeekConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattlePassWeekConfigRow*))((::PBYTE)hIl2Cpp + PGHNFNPHNDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
