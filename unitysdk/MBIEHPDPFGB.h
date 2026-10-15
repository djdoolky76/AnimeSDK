#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBIEHPDPFGB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D107AB0)
#define MBIEHPDPFGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D108080)
#define MBIEHPDPFGB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D107C20)
#define MBIEHPDPFGB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D107520)
#define MBIEHPDPFGB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1077B0)
#define MBIEHPDPFGB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D107CC0)
#define MBIEHPDPFGB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D107D10)
#define MBIEHPDPFGB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D107AF0)
#define MBIEHPDPFGB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D107750)
#define MBIEHPDPFGB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D107920)
#define MBIEHPDPFGB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D107B80)
#define MBIEHPDPFGB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1074A0)

inline static constexpr unsigned int MBIEHPDPFGB_TypeDefinitionIndex = 15044;

	class MBIEHPDPFGB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x40970);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>**)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x40978);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x40980);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0xF5E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0xF5E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>*(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournGambleUnitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournGambleUnitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBIEHPDPFGB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBIEHPDPFGB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MBIEHPDPFGB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBIEHPDPFGB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MBIEHPDPFGB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournGambleUnitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournGambleUnitRow*))((::PBYTE)hIl2Cpp + MBIEHPDPFGB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
