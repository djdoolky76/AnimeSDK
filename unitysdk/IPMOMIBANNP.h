#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OKEFHOAGJGH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPMOMIBANNP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF052F0)
#define IPMOMIBANNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF058B0)
#define IPMOMIBANNP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF05460)
#define IPMOMIBANNP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF04D50)
#define IPMOMIBANNP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF04FE0)
#define IPMOMIBANNP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF05500)
#define IPMOMIBANNP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF05550)
#define IPMOMIBANNP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF05330)
#define IPMOMIBANNP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF04F80)
#define IPMOMIBANNP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF05150)
#define IPMOMIBANNP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF053C0)
#define IPMOMIBANNP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF04CD0)

inline static constexpr unsigned int IPMOMIBANNP_TypeDefinitionIndex = 13900;

	class IPMOMIBANNP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPMOMIBANNP")->GetStaticField(0x24450);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OKEFHOAGJGH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OKEFHOAGJGH*>**)UnitySDK::FromName("", "IPMOMIBANNP")->GetStaticField(0x24458);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPMOMIBANNP")->GetStaticField(0x24460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPMOMIBANNP")->GetStaticField(0x7DA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPMOMIBANNP")->GetStaticField(0x7DA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OKEFHOAGJGH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OKEFHOAGJGH*>*(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OKEFHOAGJGH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OKEFHOAGJGH*>(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_FPHGMAMDFHE_OFFSET))();
		}

		static ::OKEFHOAGJGH* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::OKEFHOAGJGH*(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + IPMOMIBANNP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMOMIBANNP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPMOMIBANNP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPMOMIBANNP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPMOMIBANNP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OKEFHOAGJGH* a1)
		{
			return ((::System::Void(*)(::OKEFHOAGJGH*))((::PBYTE)hIl2Cpp + IPMOMIBANNP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
