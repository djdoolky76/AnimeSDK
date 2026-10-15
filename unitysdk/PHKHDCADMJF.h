#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentMonsterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHKHDCADMJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E97D0)
#define PHKHDCADMJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EA180)
#define PHKHDCADMJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E9CF0)
#define PHKHDCADMJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E9810)
#define PHKHDCADMJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E9480)
#define PHKHDCADMJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E9D90)
#define PHKHDCADMJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E9DE0)
#define PHKHDCADMJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E9A40)
#define PHKHDCADMJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E9420)
#define PHKHDCADMJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E95F0)
#define PHKHDCADMJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E9AD0)
#define PHKHDCADMJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E93A0)

inline static constexpr unsigned int PHKHDCADMJF_TypeDefinitionIndex = 13404;

	class PHKHDCADMJF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>**)UnitySDK::FromName("", "PHKHDCADMJF")->GetStaticField(0x402A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHKHDCADMJF")->GetStaticField(0x402A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHKHDCADMJF")->GetStaticField(0x402B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHKHDCADMJF")->GetStaticField(0xDB20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHKHDCADMJF")->GetStaticField(0xDB21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightAugmentMonsterConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightAugmentQuality a2)
		{
			return ((::RPG::GameCore::GridFightAugmentMonsterConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightAugmentQuality))((::PBYTE)hIl2Cpp + PHKHDCADMJF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKHDCADMJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHKHDCADMJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHKHDCADMJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHKHDCADMJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightAugmentMonsterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightAugmentMonsterConfigRow*))((::PBYTE)hIl2Cpp + PHKHDCADMJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
