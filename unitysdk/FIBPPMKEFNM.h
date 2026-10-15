#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesBtnUnlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBtnUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIBPPMKEFNM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDC76C0)
#define FIBPPMKEFNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC7C40)
#define FIBPPMKEFNM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDC7830)
#define FIBPPMKEFNM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDC71B0)
#define FIBPPMKEFNM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDC7440)
#define FIBPPMKEFNM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDC78D0)
#define FIBPPMKEFNM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDC7920)
#define FIBPPMKEFNM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDC7700)
#define FIBPPMKEFNM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDC73E0)
#define FIBPPMKEFNM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDC7570)
#define FIBPPMKEFNM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDC7790)
#define FIBPPMKEFNM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDC7130)

inline static constexpr unsigned int FIBPPMKEFNM_TypeDefinitionIndex = 12276;

	class FIBPPMKEFNM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBtnUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBtnUnlockRow*>**)UnitySDK::FromName("", "FIBPPMKEFNM")->GetStaticField(0x11AA0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FIBPPMKEFNM")->GetStaticField(0x11AA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FIBPPMKEFNM")->GetStaticField(0x11AB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FIBPPMKEFNM")->GetStaticField(0x39C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FIBPPMKEFNM")->GetStaticField(0x39C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBtnUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBtnUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBtnUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBtnUnlockRow*>(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesBtnUnlockRow* LMBKNCAIDLC(::RPG::GameCore::PlanetFesBtnUnlockType a1)
		{
			return ((::RPG::GameCore::PlanetFesBtnUnlockRow*(*)(::RPG::GameCore::PlanetFesBtnUnlockType))((::PBYTE)hIl2Cpp + FIBPPMKEFNM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBPPMKEFNM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FIBPPMKEFNM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIBPPMKEFNM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FIBPPMKEFNM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesBtnUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesBtnUnlockRow*))((::PBYTE)hIl2Cpp + FIBPPMKEFNM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
