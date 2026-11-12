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

#define BOKGLIFLEMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBBD130)
#define BOKGLIFLEMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBBD700)
#define BOKGLIFLEMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBBD2A0)
#define BOKGLIFLEMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBBCBA0)
#define BOKGLIFLEMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBBCE30)
#define BOKGLIFLEMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBBD340)
#define BOKGLIFLEMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBBD390)
#define BOKGLIFLEMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBBD170)
#define BOKGLIFLEMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBBCDD0)
#define BOKGLIFLEMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBBCFA0)
#define BOKGLIFLEMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBBD200)
#define BOKGLIFLEMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBBCB20)

inline static constexpr unsigned int BOKGLIFLEMA_TypeDefinitionIndex = 13558;

	class BOKGLIFLEMA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0x4B3B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>**)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0x4B3B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0x4B3C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0xF500);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOKGLIFLEMA")->GetStaticField(0xF501);
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
