#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOLIPPMAFCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1226C0)
#define LOLIPPMAFCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D122C90)
#define LOLIPPMAFCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D122830)
#define LOLIPPMAFCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D122130)
#define LOLIPPMAFCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1223C0)
#define LOLIPPMAFCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1228D0)
#define LOLIPPMAFCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D122920)
#define LOLIPPMAFCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D122700)
#define LOLIPPMAFCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D122360)
#define LOLIPPMAFCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D122530)
#define LOLIPPMAFCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D122790)
#define LOLIPPMAFCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1220B0)

inline static constexpr unsigned int LOLIPPMAFCI_TypeDefinitionIndex = 11101;

	class LOLIPPMAFCI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LOLIPPMAFCI")->GetStaticField(0x45B40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRow*>**)UnitySDK::FromName("", "LOLIPPMAFCI")->GetStaticField(0x45B48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LOLIPPMAFCI")->GetStaticField(0x45B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LOLIPPMAFCI")->GetStaticField(0x10B00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LOLIPPMAFCI")->GetStaticField(0x10B01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRow*>*(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRow*>(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingFesItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingFesItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LOLIPPMAFCI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOLIPPMAFCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LOLIPPMAFCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LOLIPPMAFCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LOLIPPMAFCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingFesItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesItemRow*))((::PBYTE)hIl2Cpp + LOLIPPMAFCI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
