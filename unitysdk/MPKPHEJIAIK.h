#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonMapConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPKPHEJIAIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E885EC0)
#define MPKPHEJIAIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E886490)
#define MPKPHEJIAIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E886030)
#define MPKPHEJIAIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E885930)
#define MPKPHEJIAIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E885BC0)
#define MPKPHEJIAIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E8860D0)
#define MPKPHEJIAIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E886120)
#define MPKPHEJIAIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E885F00)
#define MPKPHEJIAIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E885B60)
#define MPKPHEJIAIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E885D30)
#define MPKPHEJIAIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E885F90)
#define MPKPHEJIAIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E8858B0)

inline static constexpr unsigned int MPKPHEJIAIK_TypeDefinitionIndex = 12594;

	class MPKPHEJIAIK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x4C8E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>**)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x4C8E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x4C8F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0xE9A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0xE9A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonMapConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonMapConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPKPHEJIAIK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKPHEJIAIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPKPHEJIAIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPKPHEJIAIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPKPHEJIAIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonMapConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonMapConfigRow*))((::PBYTE)hIl2Cpp + MPKPHEJIAIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
