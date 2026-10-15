#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FHKCLKBHLON;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJLMDMPIJBJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD91850)
#define EJLMDMPIJBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD91DD0)
#define EJLMDMPIJBJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD919C0)
#define EJLMDMPIJBJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD91300)
#define EJLMDMPIJBJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD91590)
#define EJLMDMPIJBJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD91A60)
#define EJLMDMPIJBJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD91AB0)
#define EJLMDMPIJBJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD91890)
#define EJLMDMPIJBJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD91530)
#define EJLMDMPIJBJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD91700)
#define EJLMDMPIJBJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD91920)
#define EJLMDMPIJBJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD91280)

inline static constexpr unsigned int EJLMDMPIJBJ_TypeDefinitionIndex = 13585;

	class EJLMDMPIJBJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJLMDMPIJBJ")->GetStaticField(0x1B20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FHKCLKBHLON*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FHKCLKBHLON*>**)UnitySDK::FromName("", "EJLMDMPIJBJ")->GetStaticField(0x1B28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJLMDMPIJBJ")->GetStaticField(0x1B30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJLMDMPIJBJ")->GetStaticField(0x9E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJLMDMPIJBJ")->GetStaticField(0x9E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FHKCLKBHLON*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FHKCLKBHLON*>*(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FHKCLKBHLON*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FHKCLKBHLON*>(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::FHKCLKBHLON* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FHKCLKBHLON*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FHKCLKBHLON* a1)
		{
			return ((::System::Void(*)(::FHKCLKBHLON*))((::PBYTE)hIl2Cpp + EJLMDMPIJBJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
