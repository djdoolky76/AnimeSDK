#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonMapConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPKPHEJIAIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E12D0)
#define MPKPHEJIAIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E18A0)
#define MPKPHEJIAIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E1440)
#define MPKPHEJIAIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E0D40)
#define MPKPHEJIAIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E0FD0)
#define MPKPHEJIAIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E14E0)
#define MPKPHEJIAIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E1530)
#define MPKPHEJIAIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E1310)
#define MPKPHEJIAIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E0F70)
#define MPKPHEJIAIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E1140)
#define MPKPHEJIAIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E13A0)
#define MPKPHEJIAIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E0CC0)

inline static constexpr unsigned int MPKPHEJIAIK_TypeDefinitionIndex = 12527;

	class MPKPHEJIAIK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x2BE20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>**)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x2BE28);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x2BE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x8990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPKPHEJIAIK")->GetStaticField(0x8991);
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
