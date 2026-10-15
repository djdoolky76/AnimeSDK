#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POEAEHMBBMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E8AB0)
#define POEAEHMBBMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E9030)
#define POEAEHMBBMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E8C20)
#define POEAEHMBBMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E8560)
#define POEAEHMBBMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E87F0)
#define POEAEHMBBMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E8CC0)
#define POEAEHMBBMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E8D10)
#define POEAEHMBBMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E8AF0)
#define POEAEHMBBMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E8790)
#define POEAEHMBBMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E8920)
#define POEAEHMBBMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E8B80)
#define POEAEHMBBMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E84E0)

inline static constexpr unsigned int POEAEHMBBMN_TypeDefinitionIndex = 11085;

	class POEAEHMBBMN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x52620);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x52628);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>**)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x52630);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x12830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "POEAEHMBBMN")->GetStaticField(0x12831);
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
