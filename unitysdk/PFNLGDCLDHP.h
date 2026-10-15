#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityLocalLegendGroupConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFNLGDCLDHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2DE8E0)
#define PFNLGDCLDHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2DEE60)
#define PFNLGDCLDHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2DEA50)
#define PFNLGDCLDHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2DE3D0)
#define PFNLGDCLDHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2DE660)
#define PFNLGDCLDHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2DEAF0)
#define PFNLGDCLDHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2DEB40)
#define PFNLGDCLDHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2DE920)
#define PFNLGDCLDHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2DE600)
#define PFNLGDCLDHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2DE790)
#define PFNLGDCLDHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2DE9B0)
#define PFNLGDCLDHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2DE350)

	class PFNLGDCLDHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*>**)UnitySDK::FromName("", "PFNLGDCLDHP")->GetStaticField(0x3F5A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFNLGDCLDHP")->GetStaticField(0x3F5A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PFNLGDCLDHP")->GetStaticField(0x3F5B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PFNLGDCLDHP")->GetStaticField(0xD840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFNLGDCLDHP")->GetStaticField(0xD841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityLocalLegendGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityLocalLegendGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PFNLGDCLDHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNLGDCLDHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PFNLGDCLDHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFNLGDCLDHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PFNLGDCLDHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityLocalLegendGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityLocalLegendGroupConfigRow*))((::PBYTE)hIl2Cpp + PFNLGDCLDHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
