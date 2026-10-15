#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideFloorConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DIAGHDPAKLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD24B40)
#define DIAGHDPAKLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD25100)
#define DIAGHDPAKLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD24CB0)
#define DIAGHDPAKLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD245B0)
#define DIAGHDPAKLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD24840)
#define DIAGHDPAKLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD24D50)
#define DIAGHDPAKLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD24DA0)
#define DIAGHDPAKLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD24B80)
#define DIAGHDPAKLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD247E0)
#define DIAGHDPAKLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD24970)
#define DIAGHDPAKLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD24C10)
#define DIAGHDPAKLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD24530)

	class DIAGHDPAKLA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DIAGHDPAKLA")->GetStaticField(0x4CB60);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DIAGHDPAKLA")->GetStaticField(0x4CB68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>**)UnitySDK::FromName("", "DIAGHDPAKLA")->GetStaticField(0x4CB70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DIAGHDPAKLA")->GetStaticField(0x11AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DIAGHDPAKLA")->GetStaticField(0x11AC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::OverrideFloorConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::OverrideFloorConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DIAGHDPAKLA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIAGHDPAKLA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DIAGHDPAKLA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIAGHDPAKLA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DIAGHDPAKLA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::OverrideFloorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::OverrideFloorConfigRow*))((::PBYTE)hIl2Cpp + DIAGHDPAKLA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
