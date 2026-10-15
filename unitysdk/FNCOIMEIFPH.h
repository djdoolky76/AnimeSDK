#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourTriggerEventContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNCOIMEIFPH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDFD40)
#define FNCOIMEIFPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE0310)
#define FNCOIMEIFPH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDDFEB0)
#define FNCOIMEIFPH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDF7B0)
#define FNCOIMEIFPH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDFA40)
#define FNCOIMEIFPH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDDFF50)
#define FNCOIMEIFPH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDDFFA0)
#define FNCOIMEIFPH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDFD80)
#define FNCOIMEIFPH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDF9E0)
#define FNCOIMEIFPH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDFBB0)
#define FNCOIMEIFPH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDFE10)
#define FNCOIMEIFPH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDF730)

inline static constexpr unsigned int FNCOIMEIFPH_TypeDefinitionIndex = 12113;

	class FNCOIMEIFPH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNCOIMEIFPH")->GetStaticField(0x13070);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNCOIMEIFPH")->GetStaticField(0x13078);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventContentRow*>**)UnitySDK::FromName("", "FNCOIMEIFPH")->GetStaticField(0x13080);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNCOIMEIFPH")->GetStaticField(0x3DF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNCOIMEIFPH")->GetStaticField(0x3DF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventContentRow*>*(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventContentRow*>(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourTriggerEventContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourTriggerEventContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNCOIMEIFPH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNCOIMEIFPH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNCOIMEIFPH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCOIMEIFPH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNCOIMEIFPH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourTriggerEventContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourTriggerEventContentRow*))((::PBYTE)hIl2Cpp + FNCOIMEIFPH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
