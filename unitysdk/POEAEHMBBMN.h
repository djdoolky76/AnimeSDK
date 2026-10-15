#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POEAEHMBBMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D316580)
#define POEAEHMBBMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D316B00)
#define POEAEHMBBMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D3166F0)
#define POEAEHMBBMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D316030)
#define POEAEHMBBMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D3162C0)
#define POEAEHMBBMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D316790)
#define POEAEHMBBMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3167E0)
#define POEAEHMBBMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D3165C0)
#define POEAEHMBBMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D316260)
#define POEAEHMBBMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D3163F0)
#define POEAEHMBBMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D316650)
#define POEAEHMBBMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D315FB0)

	class POEAEHMBBMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>**)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x47010);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x47018);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x47020);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x10EC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x10EC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>*(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingPrivilegeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingPrivilegeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + POEAEHMBBMN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POEAEHMBBMN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + POEAEHMBBMN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + POEAEHMBBMN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + POEAEHMBBMN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingPrivilegeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingPrivilegeRow*))((::PBYTE)hIl2Cpp + POEAEHMBBMN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
