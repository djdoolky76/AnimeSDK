#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PsActivityRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGEABBDNALG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EC430)
#define LGEABBDNALG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0ECA00)
#define LGEABBDNALG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EC5A0)
#define LGEABBDNALG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EBEA0)
#define LGEABBDNALG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EC130)
#define LGEABBDNALG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EC640)
#define LGEABBDNALG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EC690)
#define LGEABBDNALG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EC470)
#define LGEABBDNALG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EC0D0)
#define LGEABBDNALG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0EC2A0)
#define LGEABBDNALG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EC500)
#define LGEABBDNALG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EBE20)

	class LGEABBDNALG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LGEABBDNALG")->GetStaticField(0x3CE20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>**)UnitySDK::FromName("", "LGEABBDNALG")->GetStaticField(0x3CE28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LGEABBDNALG")->GetStaticField(0x3CE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LGEABBDNALG")->GetStaticField(0xD110);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGEABBDNALG")->GetStaticField(0xD111);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>*(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PsActivityRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PsActivityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LGEABBDNALG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEABBDNALG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGEABBDNALG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGEABBDNALG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LGEABBDNALG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PsActivityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PsActivityRow*))((::PBYTE)hIl2Cpp + LGEABBDNALG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
