#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONNGDPFDIKP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D276F20)
#define ONNGDPFDIKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2774A0)
#define ONNGDPFDIKP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D277090)
#define ONNGDPFDIKP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D276A10)
#define ONNGDPFDIKP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D276CA0)
#define ONNGDPFDIKP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D277130)
#define ONNGDPFDIKP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D277180)
#define ONNGDPFDIKP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D276F60)
#define ONNGDPFDIKP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D276C40)
#define ONNGDPFDIKP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D276DD0)
#define ONNGDPFDIKP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D276FF0)
#define ONNGDPFDIKP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D276990)

inline static constexpr unsigned int ONNGDPFDIKP_TypeDefinitionIndex = 14292;

	class ONNGDPFDIKP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONNGDPFDIKP")->GetStaticField(0x4A540);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ONNGDPFDIKP")->GetStaticField(0x4A548);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>**)UnitySDK::FromName("", "ONNGDPFDIKP")->GetStaticField(0x4A550);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONNGDPFDIKP")->GetStaticField(0x111F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONNGDPFDIKP")->GetStaticField(0x111F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::OfferingTypeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::OfferingTypeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONNGDPFDIKP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNGDPFDIKP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONNGDPFDIKP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONNGDPFDIKP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONNGDPFDIKP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::OfferingTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::OfferingTypeConfigRow*))((::PBYTE)hIl2Cpp + ONNGDPFDIKP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
