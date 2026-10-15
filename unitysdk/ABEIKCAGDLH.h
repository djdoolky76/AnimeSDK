#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABEIKCAGDLH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC70960)
#define ABEIKCAGDLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC70EE0)
#define ABEIKCAGDLH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC70AD0)
#define ABEIKCAGDLH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC70410)
#define ABEIKCAGDLH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC706A0)
#define ABEIKCAGDLH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC70B70)
#define ABEIKCAGDLH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC70BC0)
#define ABEIKCAGDLH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC709A0)
#define ABEIKCAGDLH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC70640)
#define ABEIKCAGDLH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC70810)
#define ABEIKCAGDLH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC70A30)
#define ABEIKCAGDLH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC70390)

inline static constexpr unsigned int ABEIKCAGDLH_TypeDefinitionIndex = 12521;

	class ABEIKCAGDLH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABEIKCAGDLH")->GetStaticField(0x3D530);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ABEIKCAGDLH")->GetStaticField(0x3D538);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonConfigRow*>**)UnitySDK::FromName("", "ABEIKCAGDLH")->GetStaticField(0x3D540);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABEIKCAGDLH")->GetStaticField(0xC490);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABEIKCAGDLH")->GetStaticField(0xC491);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonConfigRow*>(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ABEIKCAGDLH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABEIKCAGDLH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABEIKCAGDLH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABEIKCAGDLH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABEIKCAGDLH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonConfigRow*))((::PBYTE)hIl2Cpp + ABEIKCAGDLH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
