#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEvaluationGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJKJNEOGKFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF195D0)
#define IJKJNEOGKFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF19B50)
#define IJKJNEOGKFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF19740)
#define IJKJNEOGKFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF19080)
#define IJKJNEOGKFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF19310)
#define IJKJNEOGKFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF197E0)
#define IJKJNEOGKFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF19830)
#define IJKJNEOGKFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF19610)
#define IJKJNEOGKFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF192B0)
#define IJKJNEOGKFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF19440)
#define IJKJNEOGKFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF196A0)
#define IJKJNEOGKFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF19000)

inline static constexpr unsigned int IJKJNEOGKFG_TypeDefinitionIndex = 13030;

	class IJKJNEOGKFG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationGroupRow*>**)UnitySDK::FromName("", "IJKJNEOGKFG")->GetStaticField(0x23C40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IJKJNEOGKFG")->GetStaticField(0x23C48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IJKJNEOGKFG")->GetStaticField(0x23C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IJKJNEOGKFG")->GetStaticField(0x7EA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IJKJNEOGKFG")->GetStaticField(0x7EA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationGroupRow*>*(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationGroupRow*>(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraEvaluationGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraEvaluationGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IJKJNEOGKFG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKJNEOGKFG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IJKJNEOGKFG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJKJNEOGKFG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IJKJNEOGKFG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraEvaluationGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraEvaluationGroupRow*))((::PBYTE)hIl2Cpp + IJKJNEOGKFG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
