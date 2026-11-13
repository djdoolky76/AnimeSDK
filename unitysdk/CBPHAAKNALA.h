#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBPHAAKNALA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB18580)
#define CBPHAAKNALA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB18B00)
#define CBPHAAKNALA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB186F0)
#define CBPHAAKNALA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB18030)
#define CBPHAAKNALA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB182C0)
#define CBPHAAKNALA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB18790)
#define CBPHAAKNALA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB187E0)
#define CBPHAAKNALA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB185C0)
#define CBPHAAKNALA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB18260)
#define CBPHAAKNALA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB18430)
#define CBPHAAKNALA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB18650)
#define CBPHAAKNALA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB17FB0)

inline static constexpr unsigned int CBPHAAKNALA_TypeDefinitionIndex = 11070;

	class CBPHAAKNALA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierRow*>**)UnitySDK::FromName("", "CBPHAAKNALA")->GetStaticField(0x508F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CBPHAAKNALA")->GetStaticField(0x508F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBPHAAKNALA")->GetStaticField(0x50900);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBPHAAKNALA")->GetStaticField(0x11770);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBPHAAKNALA")->GetStaticField(0x11771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierRow*>*(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierRow*>(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingSoldierRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingSoldierRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBPHAAKNALA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBPHAAKNALA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBPHAAKNALA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBPHAAKNALA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBPHAAKNALA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingSoldierRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingSoldierRow*))((::PBYTE)hIl2Cpp + CBPHAAKNALA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
