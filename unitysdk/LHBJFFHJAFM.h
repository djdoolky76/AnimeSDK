#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamSkinConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHBJFFHJAFM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C27C0)
#define LHBJFFHJAFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2D40)
#define LHBJFFHJAFM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C2930)
#define LHBJFFHJAFM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C2270)
#define LHBJFFHJAFM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C2500)
#define LHBJFFHJAFM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C29D0)
#define LHBJFFHJAFM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C2A20)
#define LHBJFFHJAFM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C2800)
#define LHBJFFHJAFM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C24A0)
#define LHBJFFHJAFM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C2630)
#define LHBJFFHJAFM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C2890)
#define LHBJFFHJAFM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C21F0)

inline static constexpr unsigned int LHBJFFHJAFM_TypeDefinitionIndex = 14320;

	class LHBJFFHJAFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>**)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0x3B4B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0x3B4B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0x3B4C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0xBF10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0xBF11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamSkinConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PamSkinConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamSkinConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamSkinConfigRow*))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
