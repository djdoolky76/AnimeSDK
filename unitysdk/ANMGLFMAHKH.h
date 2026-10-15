#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class PBICIFBPKHF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANMGLFMAHKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE5D20)
#define ANMGLFMAHKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE62A0)
#define ANMGLFMAHKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE5E90)
#define ANMGLFMAHKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE57D0)
#define ANMGLFMAHKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE5A60)
#define ANMGLFMAHKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE5F30)
#define ANMGLFMAHKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE5F80)
#define ANMGLFMAHKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE5D60)
#define ANMGLFMAHKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE5A00)
#define ANMGLFMAHKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE5B90)
#define ANMGLFMAHKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE5DF0)
#define ANMGLFMAHKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE5750)

	class ANMGLFMAHKH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ANMGLFMAHKH")->GetStaticField(0x3C3D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*>**)UnitySDK::FromName("", "ANMGLFMAHKH")->GetStaticField(0x3C3D8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ANMGLFMAHKH")->GetStaticField(0x3C3E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ANMGLFMAHKH")->GetStaticField(0xCE20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ANMGLFMAHKH")->GetStaticField(0xCE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*>*(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*>(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::PBICIFBPKHF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::PBICIFBPKHF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANMGLFMAHKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANMGLFMAHKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANMGLFMAHKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANMGLFMAHKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ANMGLFMAHKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PBICIFBPKHF* a1)
		{
			return ((::System::Void(*)(::PBICIFBPKHF*))((::PBYTE)hIl2Cpp + ANMGLFMAHKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
