#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCampRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONFCKIOPEHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A1230)
#define ONFCKIOPEHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A1800)
#define ONFCKIOPEHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A13A0)
#define ONFCKIOPEHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A0CA0)
#define ONFCKIOPEHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A0F30)
#define ONFCKIOPEHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A1440)
#define ONFCKIOPEHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A1490)
#define ONFCKIOPEHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A1270)
#define ONFCKIOPEHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A0ED0)
#define ONFCKIOPEHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A10A0)
#define ONFCKIOPEHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A1300)
#define ONFCKIOPEHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A0C20)

	class ONFCKIOPEHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>**)UnitySDK::FromName("", "ONFCKIOPEHP")->GetStaticField(0x3A120);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ONFCKIOPEHP")->GetStaticField(0x3A128);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONFCKIOPEHP")->GetStaticField(0x3A130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONFCKIOPEHP")->GetStaticField(0xC620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONFCKIOPEHP")->GetStaticField(0xC621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>*(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCampRow*>(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingCampRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingCampRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONFCKIOPEHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFCKIOPEHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONFCKIOPEHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONFCKIOPEHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONFCKIOPEHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingCampRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingCampRow*))((::PBYTE)hIl2Cpp + ONFCKIOPEHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
