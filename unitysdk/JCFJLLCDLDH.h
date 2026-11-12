#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBonusThresholdConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCFJLLCDLDH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E204490)
#define JCFJLLCDLDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E204A00)
#define JCFJLLCDLDH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E204570)
#define JCFJLLCDLDH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E137C40)
#define JCFJLLCDLDH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E204150)
#define JCFJLLCDLDH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E204610)
#define JCFJLLCDLDH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E204660)
#define JCFJLLCDLDH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E1C1FE0)
#define JCFJLLCDLDH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2040F0)
#define JCFJLLCDLDH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2042C0)
#define JCFJLLCDLDH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2044D0)
#define JCFJLLCDLDH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E204070)

inline static constexpr unsigned int JCFJLLCDLDH_TypeDefinitionIndex = 13827;

	class JCFJLLCDLDH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JCFJLLCDLDH")->GetStaticField(0x29EF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*>**)UnitySDK::FromName("", "JCFJLLCDLDH")->GetStaticField(0x29EF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JCFJLLCDLDH")->GetStaticField(0x29F00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JCFJLLCDLDH")->GetStaticField(0x86C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JCFJLLCDLDH")->GetStaticField(0x86C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*>(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JCFJLLCDLDH_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJLLCDLDH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JCFJLLCDLDH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCFJLLCDLDH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JCFJLLCDLDH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*))((::PBYTE)hIl2Cpp + JCFJLLCDLDH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
