#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirNodeTypeConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJMBOBADMEB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD30C10)
#define DJMBOBADMEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD311E0)
#define DJMBOBADMEB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD30D80)
#define DJMBOBADMEB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD30680)
#define DJMBOBADMEB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD30910)
#define DJMBOBADMEB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD30E20)
#define DJMBOBADMEB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD30E70)
#define DJMBOBADMEB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD30C50)
#define DJMBOBADMEB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD308B0)
#define DJMBOBADMEB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD30A80)
#define DJMBOBADMEB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD30CE0)
#define DJMBOBADMEB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD30600)

	class DJMBOBADMEB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJMBOBADMEB")->GetStaticField(0x4DB90);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DJMBOBADMEB")->GetStaticField(0x4DB98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>**)UnitySDK::FromName("", "DJMBOBADMEB")->GetStaticField(0x4DBA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJMBOBADMEB")->GetStaticField(0x11E80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJMBOBADMEB")->GetStaticField(0x11E81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirNodeTypeConfigRow* LMBKNCAIDLC(::RPG::GameCore::PixAirNodeType a1)
		{
			return ((::RPG::GameCore::PixAirNodeTypeConfigRow*(*)(::RPG::GameCore::PixAirNodeType))((::PBYTE)hIl2Cpp + DJMBOBADMEB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJMBOBADMEB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJMBOBADMEB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJMBOBADMEB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJMBOBADMEB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirNodeTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirNodeTypeConfigRow*))((::PBYTE)hIl2Cpp + DJMBOBADMEB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
