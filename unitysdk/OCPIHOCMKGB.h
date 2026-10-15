#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MechanismBarEffectConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCPIHOCMKGB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D253CF0)
#define OCPIHOCMKGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2542F0)
#define OCPIHOCMKGB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D253E60)
#define OCPIHOCMKGB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D253720)
#define OCPIHOCMKGB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2539B0)
#define OCPIHOCMKGB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D253F00)
#define OCPIHOCMKGB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D253F50)
#define OCPIHOCMKGB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D253D30)
#define OCPIHOCMKGB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D253950)
#define OCPIHOCMKGB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D253B20)
#define OCPIHOCMKGB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D253DC0)
#define OCPIHOCMKGB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2536A0)

	class OCPIHOCMKGB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>**)UnitySDK::FromName("", "OCPIHOCMKGB")->GetStaticField(0x320E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OCPIHOCMKGB")->GetStaticField(0x320E8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OCPIHOCMKGB")->GetStaticField(0x320F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OCPIHOCMKGB")->GetStaticField(0xA910);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OCPIHOCMKGB")->GetStaticField(0xA911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MechanismBarEffectConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MechanismBarEffectConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCPIHOCMKGB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPIHOCMKGB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OCPIHOCMKGB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OCPIHOCMKGB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OCPIHOCMKGB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MechanismBarEffectConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MechanismBarEffectConfigRow*))((::PBYTE)hIl2Cpp + OCPIHOCMKGB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
