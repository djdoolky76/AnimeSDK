#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonFloorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMMIFGMDOBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0A89C0)
#define HMMIFGMDOBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A95A0)
#define HMMIFGMDOBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0A8B30)
#define HMMIFGMDOBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0A83F0)
#define HMMIFGMDOBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0A8680)
#define HMMIFGMDOBF_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1E0A9510)
#define HMMIFGMDOBF_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1E0A9040)
#define HMMIFGMDOBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0A8BD0)
#define HMMIFGMDOBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0A8C20)
#define HMMIFGMDOBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0A8A00)
#define HMMIFGMDOBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0A8620)
#define HMMIFGMDOBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0A87F0)
#define HMMIFGMDOBF_OMBFGPDHBKP_OFFSET UNITYSDK_OFFSET(0x1E0A8FC0)
#define HMMIFGMDOBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0A8A90)
#define HMMIFGMDOBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0A8370)

inline static constexpr unsigned int HMMIFGMDOBF_TypeDefinitionIndex = 12592;

	class HMMIFGMDOBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_EMGJDBJMKAF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x16F10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x16F18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x16F20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonFloorConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonFloorConfigRow*>**)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x16F28);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x4C00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x4C01);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HMMIFGMDOBF")->GetStaticField(0x4C02);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonFloorConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonFloorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonFloorConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonFloorConfigRow*>(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonFloorConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TreasureDungeonFloorConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HMMIFGMDOBF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMMIFGMDOBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMMIFGMDOBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HMMIFGMDOBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonFloorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonFloorConfigRow*))((::PBYTE)hIl2Cpp + HMMIFGMDOBF_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::UInt32 OMBFGPDHBKP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMMIFGMDOBF_OMBFGPDHBKP_OFFSET))(a1);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMIFGMDOBF_HFBAFEEPOLN_OFFSET))();
		}

	};
