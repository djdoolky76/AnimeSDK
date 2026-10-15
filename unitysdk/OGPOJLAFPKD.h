#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGPOJLAFPKD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D274D40)
#define OGPOJLAFPKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D275920)
#define OGPOJLAFPKD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2750E0)
#define OGPOJLAFPKD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D274D80)
#define OGPOJLAFPKD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D275620)
#define OGPOJLAFPKD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D275180)
#define OGPOJLAFPKD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2751D0)
#define OGPOJLAFPKD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D274FB0)
#define OGPOJLAFPKD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2755C0)
#define OGPOJLAFPKD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D275790)
#define OGPOJLAFPKD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D275040)
#define OGPOJLAFPKD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D275540)

inline static constexpr unsigned int OGPOJLAFPKD_TypeDefinitionIndex = 15253;

	class OGPOJLAFPKD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x355C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>**)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x355C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x355D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0xB390);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0xB391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookCardRow*))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>*(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
