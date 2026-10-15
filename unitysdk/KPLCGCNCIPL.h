#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGachaAvatarStarRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPLCGCNCIPL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0CC920)
#define KPLCGCNCIPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0CCEA0)
#define KPLCGCNCIPL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0CCA90)
#define KPLCGCNCIPL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0CC3D0)
#define KPLCGCNCIPL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0CC660)
#define KPLCGCNCIPL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0CCB30)
#define KPLCGCNCIPL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0CCB80)
#define KPLCGCNCIPL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0CC960)
#define KPLCGCNCIPL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0CC600)
#define KPLCGCNCIPL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0CC790)
#define KPLCGCNCIPL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0CC9F0)
#define KPLCGCNCIPL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0CC350)

	class KPLCGCNCIPL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPLCGCNCIPL")->GetStaticField(0x3A560);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KPLCGCNCIPL")->GetStaticField(0x3A568);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*>**)UnitySDK::FromName("", "KPLCGCNCIPL")->GetStaticField(0x3A570);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPLCGCNCIPL")->GetStaticField(0xC6E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPLCGCNCIPL")->GetStaticField(0xC6E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*>*(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*>(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveGachaAvatarStarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveGachaAvatarStarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPLCGCNCIPL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLCGCNCIPL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPLCGCNCIPL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPLCGCNCIPL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPLCGCNCIPL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveGachaAvatarStarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveGachaAvatarStarRow*))((::PBYTE)hIl2Cpp + KPLCGCNCIPL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
