#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILCombatAdvantageGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCPIGFBGGPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE62F50)
#define HCPIGFBGGPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE637D0)
#define HCPIGFBGGPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE63340)
#define HCPIGFBGGPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE62A90)
#define HCPIGFBGGPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE62C00)
#define HCPIGFBGGPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE633E0)
#define HCPIGFBGGPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE63430)
#define HCPIGFBGGPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE63210)
#define HCPIGFBGGPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE62BA0)
#define HCPIGFBGGPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE62D70)
#define HCPIGFBGGPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE632A0)
#define HCPIGFBGGPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE62A10)

inline static constexpr unsigned int HCPIGFBGGPC_TypeDefinitionIndex = 13804;

	class HCPIGFBGGPC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCPIGFBGGPC")->GetStaticField(0x193A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HCPIGFBGGPC")->GetStaticField(0x193A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>**)UnitySDK::FromName("", "HCPIGFBGGPC")->GetStaticField(0x193B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCPIGFBGGPC")->GetStaticField(0x5710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HCPIGFBGGPC")->GetStaticField(0x5711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILCombatAdvantageGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::RPG::GameCore::ILCombatAdvantageGroupConfigRow*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + HCPIGFBGGPC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCPIGFBGGPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HCPIGFBGGPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCPIGFBGGPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HCPIGFBGGPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILCombatAdvantageGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILCombatAdvantageGroupConfigRow*))((::PBYTE)hIl2Cpp + HCPIGFBGGPC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
