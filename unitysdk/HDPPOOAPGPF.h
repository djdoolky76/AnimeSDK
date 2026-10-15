#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAmphoreusCardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDPPOOAPGPF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE98950)
#define HDPPOOAPGPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE98F20)
#define HDPPOOAPGPF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE98AC0)
#define HDPPOOAPGPF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE983C0)
#define HDPPOOAPGPF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE98650)
#define HDPPOOAPGPF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE98B60)
#define HDPPOOAPGPF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE98BB0)
#define HDPPOOAPGPF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE98990)
#define HDPPOOAPGPF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE985F0)
#define HDPPOOAPGPF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE987C0)
#define HDPPOOAPGPF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE98A20)
#define HDPPOOAPGPF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE98340)

	class HDPPOOAPGPF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDPPOOAPGPF")->GetStaticField(0x1CDB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HDPPOOAPGPF")->GetStaticField(0x1CDB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAmphoreusCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAmphoreusCardRow*>**)UnitySDK::FromName("", "HDPPOOAPGPF")->GetStaticField(0x1CDC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDPPOOAPGPF")->GetStaticField(0x68C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDPPOOAPGPF")->GetStaticField(0x68C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAmphoreusCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAmphoreusCardRow*>*(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAmphoreusCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAmphoreusCardRow*>(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAmphoreusCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveAmphoreusCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HDPPOOAPGPF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPPOOAPGPF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDPPOOAPGPF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPPOOAPGPF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDPPOOAPGPF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveAmphoreusCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveAmphoreusCardRow*))((::PBYTE)hIl2Cpp + HDPPOOAPGPF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
