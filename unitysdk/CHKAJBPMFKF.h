#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesOpticalRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHKAJBPMFKF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC0FF50)
#define CHKAJBPMFKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC104D0)
#define CHKAJBPMFKF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC100C0)
#define CHKAJBPMFKF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC0FA00)
#define CHKAJBPMFKF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC0FC90)
#define CHKAJBPMFKF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC10160)
#define CHKAJBPMFKF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC101B0)
#define CHKAJBPMFKF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC0FF90)
#define CHKAJBPMFKF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC0FC30)
#define CHKAJBPMFKF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC0FDC0)
#define CHKAJBPMFKF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC10020)
#define CHKAJBPMFKF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC0F980)

inline static constexpr unsigned int CHKAJBPMFKF_TypeDefinitionIndex = 12283;

	class CHKAJBPMFKF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x42E30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>**)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x42E38);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x42E40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x10140);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x10141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>*(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesOpticalRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesOpticalRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHKAJBPMFKF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKAJBPMFKF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHKAJBPMFKF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHKAJBPMFKF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CHKAJBPMFKF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesOpticalRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesOpticalRow*))((::PBYTE)hIl2Cpp + CHKAJBPMFKF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
