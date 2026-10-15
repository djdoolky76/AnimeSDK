#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBIEHPDPFGB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D135880)
#define MBIEHPDPFGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D135E50)
#define MBIEHPDPFGB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1359F0)
#define MBIEHPDPFGB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1352F0)
#define MBIEHPDPFGB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D135580)
#define MBIEHPDPFGB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D135A90)
#define MBIEHPDPFGB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D135AE0)
#define MBIEHPDPFGB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1358C0)
#define MBIEHPDPFGB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D135520)
#define MBIEHPDPFGB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1356F0)
#define MBIEHPDPFGB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D135950)
#define MBIEHPDPFGB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D135270)

inline static constexpr unsigned int MBIEHPDPFGB_TypeDefinitionIndex = 15044;

	class MBIEHPDPFGB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>**)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x47420);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x47428);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x47430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x10F80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBIEHPDPFGB")->GetStaticField(0x10F81);
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
