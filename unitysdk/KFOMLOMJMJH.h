#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class KCENGCADKLL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFOMLOMJMJH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D08E0E0)
#define KFOMLOMJMJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D08E6B0)
#define KFOMLOMJMJH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D08E250)
#define KFOMLOMJMJH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D08DB50)
#define KFOMLOMJMJH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D08DDE0)
#define KFOMLOMJMJH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D08E2F0)
#define KFOMLOMJMJH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D08E340)
#define KFOMLOMJMJH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D08E120)
#define KFOMLOMJMJH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D08DD80)
#define KFOMLOMJMJH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D08DF50)
#define KFOMLOMJMJH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D08E1B0)
#define KFOMLOMJMJH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D08DAD0)

inline static constexpr unsigned int KFOMLOMJMJH_TypeDefinitionIndex = 11508;

	class KFOMLOMJMJH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KFOMLOMJMJH")->GetStaticField(0x34750);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCENGCADKLL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCENGCADKLL*>**)UnitySDK::FromName("", "KFOMLOMJMJH")->GetStaticField(0x34758);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KFOMLOMJMJH")->GetStaticField(0x34760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KFOMLOMJMJH")->GetStaticField(0xB0C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KFOMLOMJMJH")->GetStaticField(0xB0C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCENGCADKLL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCENGCADKLL*>*(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KCENGCADKLL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KCENGCADKLL*>(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_FPHGMAMDFHE_OFFSET))();
		}

		static ::KCENGCADKLL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KCENGCADKLL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KFOMLOMJMJH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOMLOMJMJH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KFOMLOMJMJH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFOMLOMJMJH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KFOMLOMJMJH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KCENGCADKLL* a1)
		{
			return ((::System::Void(*)(::KCENGCADKLL*))((::PBYTE)hIl2Cpp + KFOMLOMJMJH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
