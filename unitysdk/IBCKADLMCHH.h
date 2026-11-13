#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBCKADLMCHH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6A9440)
#define IBCKADLMCHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A9A10)
#define IBCKADLMCHH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6A95B0)
#define IBCKADLMCHH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6A8EB0)
#define IBCKADLMCHH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6A9140)
#define IBCKADLMCHH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6A9650)
#define IBCKADLMCHH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6A96A0)
#define IBCKADLMCHH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6A9480)
#define IBCKADLMCHH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6A90E0)
#define IBCKADLMCHH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6A92B0)
#define IBCKADLMCHH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6A9510)
#define IBCKADLMCHH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6A8E30)

inline static constexpr unsigned int IBCKADLMCHH_TypeDefinitionIndex = 13720;

	class IBCKADLMCHH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IBCKADLMCHH")->GetStaticField(0x1CBB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IBCKADLMCHH")->GetStaticField(0x1CBB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightTagConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightTagConfigRow*>**)UnitySDK::FromName("", "IBCKADLMCHH")->GetStaticField(0x1CBC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBCKADLMCHH")->GetStaticField(0x63F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IBCKADLMCHH")->GetStaticField(0x63F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightTagConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightTagConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSpotLightTagConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSpotLightTagConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IBCKADLMCHH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCKADLMCHH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBCKADLMCHH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBCKADLMCHH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IBCKADLMCHH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSpotLightTagConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpotLightTagConfigRow*))((::PBYTE)hIl2Cpp + IBCKADLMCHH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
