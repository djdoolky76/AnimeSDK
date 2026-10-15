#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrayConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONHBKBNELPB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A2C80)
#define ONHBKBNELPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A3250)
#define ONHBKBNELPB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A2DF0)
#define ONHBKBNELPB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A26F0)
#define ONHBKBNELPB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A2980)
#define ONHBKBNELPB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A2E90)
#define ONHBKBNELPB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A2EE0)
#define ONHBKBNELPB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A2CC0)
#define ONHBKBNELPB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A2920)
#define ONHBKBNELPB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A2AF0)
#define ONHBKBNELPB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A2D50)
#define ONHBKBNELPB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A2670)

	class ONHBKBNELPB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>**)UnitySDK::FromName("", "ONHBKBNELPB")->GetStaticField(0x3A310);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ONHBKBNELPB")->GetStaticField(0x3A318);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONHBKBNELPB")->GetStaticField(0x3A320);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONHBKBNELPB")->GetStaticField(0xC6A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONHBKBNELPB")->GetStaticField(0xC6A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPrayConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPrayConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONHBKBNELPB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHBKBNELPB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONHBKBNELPB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONHBKBNELPB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONHBKBNELPB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPrayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPrayConfigRow*))((::PBYTE)hIl2Cpp + ONHBKBNELPB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
