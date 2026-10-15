#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyShipRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDFECCFDLKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA10390)
#define CDFECCFDLKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA10910)
#define CDFECCFDLKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA10500)
#define CDFECCFDLKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA0FE80)
#define CDFECCFDLKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA10110)
#define CDFECCFDLKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA105A0)
#define CDFECCFDLKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA105F0)
#define CDFECCFDLKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA103D0)
#define CDFECCFDLKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA100B0)
#define CDFECCFDLKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA10240)
#define CDFECCFDLKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA10460)
#define CDFECCFDLKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA0FE00)

	class CDFECCFDLKH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0x3BCF0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0x3BCF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>**)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0x3BD00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0xCBD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0xCBD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>*(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AlleyShipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyShipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDFECCFDLKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CDFECCFDLKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDFECCFDLKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CDFECCFDLKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AlleyShipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyShipRow*))((::PBYTE)hIl2Cpp + CDFECCFDLKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
