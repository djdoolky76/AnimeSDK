#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkCardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBMGHIOBEKG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1377B0)
#define MBMGHIOBEKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D137D80)
#define MBMGHIOBEKG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D137920)
#define MBMGHIOBEKG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D137220)
#define MBMGHIOBEKG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1374B0)
#define MBMGHIOBEKG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1379C0)
#define MBMGHIOBEKG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D137A10)
#define MBMGHIOBEKG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1377F0)
#define MBMGHIOBEKG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D137450)
#define MBMGHIOBEKG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D137620)
#define MBMGHIOBEKG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D137880)
#define MBMGHIOBEKG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1371A0)

	class MBMGHIOBEKG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBMGHIOBEKG")->GetStaticField(0x47610);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MBMGHIOBEKG")->GetStaticField(0x47618);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>**)UnitySDK::FromName("", "MBMGHIOBEKG")->GetStaticField(0x47620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBMGHIOBEKG")->GetStaticField(0x10FD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBMGHIOBEKG")->GetStaticField(0x10FD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>*(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBMGHIOBEKG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMGHIOBEKG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MBMGHIOBEKG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBMGHIOBEKG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MBMGHIOBEKG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ClockParkCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkCardRow*))((::PBYTE)hIl2Cpp + MBMGHIOBEKG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
