#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleSwitchTraitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOKGLIFLEMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9C4EA0)
#define BOKGLIFLEMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9C5470)
#define BOKGLIFLEMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9C5010)
#define BOKGLIFLEMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9C4910)
#define BOKGLIFLEMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9C4BA0)
#define BOKGLIFLEMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9C50B0)
#define BOKGLIFLEMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9C5100)
#define BOKGLIFLEMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9C4EE0)
#define BOKGLIFLEMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9C4B40)
#define BOKGLIFLEMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9C4D10)
#define BOKGLIFLEMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9C4F70)
#define BOKGLIFLEMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9C4890)

inline static constexpr unsigned int BOKGLIFLEMA_TypeDefinitionIndex = 13482;

	class BOKGLIFLEMA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0x38C20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>**)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0x38C28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0x38C30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0xB6E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0xB6E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BOKGLIFLEMA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOKGLIFLEMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOKGLIFLEMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOKGLIFLEMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOKGLIFLEMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightModuleSwitchTraitConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*))((::PBYTE)hIl2Cpp + BOKGLIFLEMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
