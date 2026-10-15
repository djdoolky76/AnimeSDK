#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkinSpecialActionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLNCBLKOHNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD3FB60)
#define DLNCBLKOHNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD40AD0)
#define DLNCBLKOHNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD3FCD0)
#define DLNCBLKOHNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD3F5D0)
#define DLNCBLKOHNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD3F860)
#define DLNCBLKOHNH_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1CD40A40)
#define DLNCBLKOHNH_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1CD40250)
#define DLNCBLKOHNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD3FD70)
#define DLNCBLKOHNH_JGBEHLBONOI_OFFSET UNITYSDK_OFFSET(0x1CD40130)
#define DLNCBLKOHNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD3FDC0)
#define DLNCBLKOHNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD3FBA0)
#define DLNCBLKOHNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD3F800)
#define DLNCBLKOHNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD3F9D0)
#define DLNCBLKOHNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD3FC30)
#define DLNCBLKOHNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD3F550)

	class DLNCBLKOHNH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_HMNGMEFJJAL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x50350);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x50358);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinSpecialActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinSpecialActionRow*>**)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x50360);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x50368);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x120E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x120E1);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DLNCBLKOHNH")->GetStaticField(0x120E2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinSpecialActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinSpecialActionRow*>*(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinSpecialActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinSpecialActionRow*>(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkinSpecialActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarSkinSpecialActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBLKOHNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DLNCBLKOHNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLNCBLKOHNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DLNCBLKOHNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarSkinSpecialActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkinSpecialActionRow*))((::PBYTE)hIl2Cpp + DLNCBLKOHNH_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::String* JGBEHLBONOI(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + DLNCBLKOHNH_JGBEHLBONOI_OFFSET))(a1, a2);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNCBLKOHNH_HFBAFEEPOLN_OFFSET))();
		}

	};
