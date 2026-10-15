#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecommendDisplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDIIEJPDBDM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A19B0)
#define PDIIEJPDBDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A1F30)
#define PDIIEJPDBDM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A1B20)
#define PDIIEJPDBDM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A1460)
#define PDIIEJPDBDM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A16F0)
#define PDIIEJPDBDM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A1BC0)
#define PDIIEJPDBDM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A1C10)
#define PDIIEJPDBDM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A19F0)
#define PDIIEJPDBDM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A1690)
#define PDIIEJPDBDM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A1860)
#define PDIIEJPDBDM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A1A80)
#define PDIIEJPDBDM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A13E0)

inline static constexpr unsigned int PDIIEJPDBDM_TypeDefinitionIndex = 14617;

	class PDIIEJPDBDM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecommendDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecommendDisplayConfigRow*>**)UnitySDK::FromName("", "PDIIEJPDBDM")->GetStaticField(0x4D6C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PDIIEJPDBDM")->GetStaticField(0x4D6C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PDIIEJPDBDM")->GetStaticField(0x4D6D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PDIIEJPDBDM")->GetStaticField(0x11B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PDIIEJPDBDM")->GetStaticField(0x11B21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecommendDisplayConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecommendDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecommendDisplayConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecommendDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RecommendDisplayConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RecommendDisplayConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PDIIEJPDBDM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDIIEJPDBDM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PDIIEJPDBDM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDIIEJPDBDM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PDIIEJPDBDM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RecommendDisplayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RecommendDisplayConfigRow*))((::PBYTE)hIl2Cpp + PDIIEJPDBDM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
