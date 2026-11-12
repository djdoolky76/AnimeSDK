#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesOpticalRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHKAJBPMFKF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EDCD920)
#define CHKAJBPMFKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDCDEA0)
#define CHKAJBPMFKF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EDCDA90)
#define CHKAJBPMFKF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EDCD3D0)
#define CHKAJBPMFKF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EDCD660)
#define CHKAJBPMFKF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EDCDB30)
#define CHKAJBPMFKF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EDCDB80)
#define CHKAJBPMFKF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EDCD960)
#define CHKAJBPMFKF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EDCD600)
#define CHKAJBPMFKF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EDCD790)
#define CHKAJBPMFKF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EDCD9F0)
#define CHKAJBPMFKF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EDCD350)

inline static constexpr unsigned int CHKAJBPMFKF_TypeDefinitionIndex = 12340;

	class CHKAJBPMFKF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x33610);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x33618);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesOpticalRow*>**)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0x33620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0xAE40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHKAJBPMFKF")->GetStaticField(0xAE41);
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
