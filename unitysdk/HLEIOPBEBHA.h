#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTaskRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLEIOPBEBHA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE92030)
#define HLEIOPBEBHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE92600)
#define HLEIOPBEBHA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE921A0)
#define HLEIOPBEBHA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE91AA0)
#define HLEIOPBEBHA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE91D30)
#define HLEIOPBEBHA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE92240)
#define HLEIOPBEBHA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE92290)
#define HLEIOPBEBHA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE92070)
#define HLEIOPBEBHA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE91CD0)
#define HLEIOPBEBHA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE91EA0)
#define HLEIOPBEBHA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE92100)
#define HLEIOPBEBHA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE91A20)

inline static constexpr unsigned int HLEIOPBEBHA_TypeDefinitionIndex = 11727;

	class HLEIOPBEBHA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>**)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x1CCD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x1CCD8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x1CCE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x6360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x6361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>*(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTaskRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTaskRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTaskRow*))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
