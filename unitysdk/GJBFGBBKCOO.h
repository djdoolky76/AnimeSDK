#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartySkillEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJBFGBBKCOO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE262E0)
#define GJBFGBBKCOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE26EC0)
#define GJBFGBBKCOO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE26680)
#define GJBFGBBKCOO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE26320)
#define GJBFGBBKCOO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE26BC0)
#define GJBFGBBKCOO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE26720)
#define GJBFGBBKCOO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE26770)
#define GJBFGBBKCOO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE26550)
#define GJBFGBBKCOO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE26B60)
#define GJBFGBBKCOO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE26D30)
#define GJBFGBBKCOO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE265E0)
#define GJBFGBBKCOO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE26AE0)

inline static constexpr unsigned int GJBFGBBKCOO_TypeDefinitionIndex = 15361;

	class GJBFGBBKCOO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GJBFGBBKCOO")->GetStaticField(0x15ED0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>**)UnitySDK::FromName("", "GJBFGBBKCOO")->GetStaticField(0x15ED8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GJBFGBBKCOO")->GetStaticField(0x15EE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GJBFGBBKCOO")->GetStaticField(0x4AD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GJBFGBBKCOO")->GetStaticField(0x4AD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GJBFGBBKCOO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJBFGBBKCOO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GJBFGBBKCOO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartySkillEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartySkillEffectRow*))((::PBYTE)hIl2Cpp + GJBFGBBKCOO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>*(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySkillEffectRow*>(*)())((::PBYTE)hIl2Cpp + GJBFGBBKCOO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartySkillEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartySkillEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GJBFGBBKCOO_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
