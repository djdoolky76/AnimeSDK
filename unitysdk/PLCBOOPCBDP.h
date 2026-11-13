#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelTriggerEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLCBOOPCBDP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E73C280)
#define PLCBOOPCBDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73C800)
#define PLCBOOPCBDP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E73C3F0)
#define PLCBOOPCBDP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E73BD30)
#define PLCBOOPCBDP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E73BFC0)
#define PLCBOOPCBDP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E73C490)
#define PLCBOOPCBDP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E73C4E0)
#define PLCBOOPCBDP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E73C2C0)
#define PLCBOOPCBDP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E73BF60)
#define PLCBOOPCBDP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E73C0F0)
#define PLCBOOPCBDP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E73C350)
#define PLCBOOPCBDP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E73BCB0)

inline static constexpr unsigned int PLCBOOPCBDP_TypeDefinitionIndex = 11165;

	class PLCBOOPCBDP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>**)UnitySDK::FromName("", "PLCBOOPCBDP")->GetStaticField(0x40AA0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PLCBOOPCBDP")->GetStaticField(0x40AA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLCBOOPCBDP")->GetStaticField(0x40AB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLCBOOPCBDP")->GetStaticField(0xD030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLCBOOPCBDP")->GetStaticField(0xD031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>*(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelTriggerEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelTriggerEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PLCBOOPCBDP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCBOOPCBDP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLCBOOPCBDP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLCBOOPCBDP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLCBOOPCBDP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelTriggerEventRow*))((::PBYTE)hIl2Cpp + PLCBOOPCBDP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
