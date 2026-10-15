#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFKPHNJIBJH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D12D7A0)
#define MFKPHNJIBJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12DD20)
#define MFKPHNJIBJH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D12D910)
#define MFKPHNJIBJH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D12D250)
#define MFKPHNJIBJH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D12D4E0)
#define MFKPHNJIBJH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D12D9B0)
#define MFKPHNJIBJH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D12DA00)
#define MFKPHNJIBJH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D12D7E0)
#define MFKPHNJIBJH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D12D480)
#define MFKPHNJIBJH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D12D610)
#define MFKPHNJIBJH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D12D870)
#define MFKPHNJIBJH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D12D1D0)

inline static constexpr unsigned int MFKPHNJIBJH_TypeDefinitionIndex = 12523;

	class MFKPHNJIBJH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>**)UnitySDK::FromName("", "MFKPHNJIBJH")->GetStaticField(0x43980);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MFKPHNJIBJH")->GetStaticField(0x43988);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MFKPHNJIBJH")->GetStaticField(0x43990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MFKPHNJIBJH")->GetStaticField(0x10030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MFKPHNJIBJH")->GetStaticField(0x10031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MFKPHNJIBJH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKPHNJIBJH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MFKPHNJIBJH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFKPHNJIBJH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MFKPHNJIBJH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonGroupConfigRow*))((::PBYTE)hIl2Cpp + MFKPHNJIBJH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
