#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleySpecialOrderFinishRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCMCMMMBGAB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D04F430)
#define KCMCMMMBGAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D04F9B0)
#define KCMCMMMBGAB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D04F5A0)
#define KCMCMMMBGAB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D04EEE0)
#define KCMCMMMBGAB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D04F170)
#define KCMCMMMBGAB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D04F640)
#define KCMCMMMBGAB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D04F690)
#define KCMCMMMBGAB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D04F470)
#define KCMCMMMBGAB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D04F110)
#define KCMCMMMBGAB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D04F2E0)
#define KCMCMMMBGAB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D04F500)
#define KCMCMMMBGAB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D04EE60)

inline static constexpr unsigned int KCMCMMMBGAB_TypeDefinitionIndex = 12627;

	class KCMCMMMBGAB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KCMCMMMBGAB")->GetStaticField(0x33A80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KCMCMMMBGAB")->GetStaticField(0x33A88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderFinishRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderFinishRow*>**)UnitySDK::FromName("", "KCMCMMMBGAB")->GetStaticField(0x33A90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KCMCMMMBGAB")->GetStaticField(0xA7D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KCMCMMMBGAB")->GetStaticField(0xA7D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderFinishRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderFinishRow*>*(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderFinishRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderFinishRow*>(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AlleySpecialOrderFinishRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleySpecialOrderFinishRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KCMCMMMBGAB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMCMMMBGAB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KCMCMMMBGAB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCMCMMMBGAB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KCMCMMMBGAB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AlleySpecialOrderFinishRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleySpecialOrderFinishRow*))((::PBYTE)hIl2Cpp + KCMCMMMBGAB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
