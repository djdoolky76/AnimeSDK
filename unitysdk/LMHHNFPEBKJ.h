#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTeamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMHHNFPEBKJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1150F0)
#define LMHHNFPEBKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D115670)
#define LMHHNFPEBKJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D115260)
#define LMHHNFPEBKJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D114BE0)
#define LMHHNFPEBKJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D114E70)
#define LMHHNFPEBKJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D115300)
#define LMHHNFPEBKJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D115350)
#define LMHHNFPEBKJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D115130)
#define LMHHNFPEBKJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D114E10)
#define LMHHNFPEBKJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D114FA0)
#define LMHHNFPEBKJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1151C0)
#define LMHHNFPEBKJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D114B60)

inline static constexpr unsigned int LMHHNFPEBKJ_TypeDefinitionIndex = 13032;

	class LMHHNFPEBKJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMHHNFPEBKJ")->GetStaticField(0x44870);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LMHHNFPEBKJ")->GetStaticField(0x44878);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamRow*>**)UnitySDK::FromName("", "LMHHNFPEBKJ")->GetStaticField(0x44880);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMHHNFPEBKJ")->GetStaticField(0x10510);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LMHHNFPEBKJ")->GetStaticField(0x10511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamRow*>*(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamRow*>(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraTeamRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraTeamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraTeamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraTeamRow*))((::PBYTE)hIl2Cpp + LMHHNFPEBKJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
