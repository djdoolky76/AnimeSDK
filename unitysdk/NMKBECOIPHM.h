#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMKBECOIPHM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20AFB0)
#define NMKBECOIPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20B530)
#define NMKBECOIPHM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20B120)
#define NMKBECOIPHM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D20AA60)
#define NMKBECOIPHM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20ACF0)
#define NMKBECOIPHM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20B1C0)
#define NMKBECOIPHM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20B210)
#define NMKBECOIPHM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20AFF0)
#define NMKBECOIPHM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D20AC90)
#define NMKBECOIPHM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20AE20)
#define NMKBECOIPHM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20B080)
#define NMKBECOIPHM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D20A9E0)

inline static constexpr unsigned int NMKBECOIPHM_TypeDefinitionIndex = 13037;

	class NMKBECOIPHM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NMKBECOIPHM")->GetStaticField(0x41C50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NMKBECOIPHM")->GetStaticField(0x41C58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>**)UnitySDK::FromName("", "NMKBECOIPHM")->GetStaticField(0x41C60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NMKBECOIPHM")->GetStaticField(0xFA40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NMKBECOIPHM")->GetStaticField(0xFA41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraPhaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMKBECOIPHM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKBECOIPHM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NMKBECOIPHM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NMKBECOIPHM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NMKBECOIPHM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraPhaseRow*))((::PBYTE)hIl2Cpp + NMKBECOIPHM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
