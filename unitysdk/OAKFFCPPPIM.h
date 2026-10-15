#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LABIBNCBFCD;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAKFFCPPPIM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D24C000)
#define OAKFFCPPPIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D24C580)
#define OAKFFCPPPIM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D24C170)
#define OAKFFCPPPIM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D24BAB0)
#define OAKFFCPPPIM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D24BD40)
#define OAKFFCPPPIM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D24C210)
#define OAKFFCPPPIM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D24C260)
#define OAKFFCPPPIM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D24C040)
#define OAKFFCPPPIM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D24BCE0)
#define OAKFFCPPPIM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D24BE70)
#define OAKFFCPPPIM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D24C0D0)
#define OAKFFCPPPIM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D24BA30)

inline static constexpr unsigned int OAKFFCPPPIM_TypeDefinitionIndex = 11497;

	class OAKFFCPPPIM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAKFFCPPPIM")->GetStaticField(0x31B40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LABIBNCBFCD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LABIBNCBFCD*>**)UnitySDK::FromName("", "OAKFFCPPPIM")->GetStaticField(0x31B48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OAKFFCPPPIM")->GetStaticField(0x31B50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAKFFCPPPIM")->GetStaticField(0xA7A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAKFFCPPPIM")->GetStaticField(0xA7A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LABIBNCBFCD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LABIBNCBFCD*>*(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LABIBNCBFCD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LABIBNCBFCD*>(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_FPHGMAMDFHE_OFFSET))();
		}

		static ::LABIBNCBFCD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LABIBNCBFCD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAKFFCPPPIM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAKFFCPPPIM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAKFFCPPPIM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAKFFCPPPIM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAKFFCPPPIM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LABIBNCBFCD* a1)
		{
			return ((::System::Void(*)(::LABIBNCBFCD*))((::PBYTE)hIl2Cpp + OAKFFCPPPIM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
