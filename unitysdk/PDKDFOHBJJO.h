#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPresentConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDKDFOHBJJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2D0260)
#define PDKDFOHBJJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2D0830)
#define PDKDFOHBJJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2D03D0)
#define PDKDFOHBJJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2CFCD0)
#define PDKDFOHBJJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2CFF60)
#define PDKDFOHBJJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2D0470)
#define PDKDFOHBJJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2D04C0)
#define PDKDFOHBJJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2D02A0)
#define PDKDFOHBJJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2CFF00)
#define PDKDFOHBJJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2D00D0)
#define PDKDFOHBJJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2D0330)
#define PDKDFOHBJJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2CFC50)

	class PDKDFOHBJJO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PDKDFOHBJJO")->GetStaticField(0x3E700);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPresentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPresentConfigRow*>**)UnitySDK::FromName("", "PDKDFOHBJJO")->GetStaticField(0x3E708);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PDKDFOHBJJO")->GetStaticField(0x3E710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PDKDFOHBJJO")->GetStaticField(0xD630);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PDKDFOHBJJO")->GetStaticField(0xD631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPresentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPresentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPresentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPresentConfigRow*>(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPresentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPresentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PDKDFOHBJJO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKDFOHBJJO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PDKDFOHBJJO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDKDFOHBJJO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PDKDFOHBJJO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPresentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPresentConfigRow*))((::PBYTE)hIl2Cpp + PDKDFOHBJJO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
