#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelRoundRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHMJEDOBICA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D095550)
#define KHMJEDOBICA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D095AD0)
#define KHMJEDOBICA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0956C0)
#define KHMJEDOBICA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D095000)
#define KHMJEDOBICA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D095290)
#define KHMJEDOBICA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D095760)
#define KHMJEDOBICA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0957B0)
#define KHMJEDOBICA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D095590)
#define KHMJEDOBICA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D095230)
#define KHMJEDOBICA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0953C0)
#define KHMJEDOBICA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D095620)
#define KHMJEDOBICA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D094F80)

	class KHMJEDOBICA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KHMJEDOBICA")->GetStaticField(0x34A40);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KHMJEDOBICA")->GetStaticField(0x34A48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>**)UnitySDK::FromName("", "KHMJEDOBICA")->GetStaticField(0x34A50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KHMJEDOBICA")->GetStaticField(0xB180);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KHMJEDOBICA")->GetStaticField(0xB181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>*(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelRoundRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelRoundRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KHMJEDOBICA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMJEDOBICA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KHMJEDOBICA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHMJEDOBICA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KHMJEDOBICA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelRoundRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelRoundRow*))((::PBYTE)hIl2Cpp + KHMJEDOBICA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
