#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceSlotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGBIPFGABEG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D060E50)
#define KGBIPFGABEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0613D0)
#define KGBIPFGABEG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D060FC0)
#define KGBIPFGABEG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D060900)
#define KGBIPFGABEG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D060B90)
#define KGBIPFGABEG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D061060)
#define KGBIPFGABEG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0610B0)
#define KGBIPFGABEG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D060E90)
#define KGBIPFGABEG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D060B30)
#define KGBIPFGABEG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D060CC0)
#define KGBIPFGABEG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D060F20)
#define KGBIPFGABEG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D060880)

inline static constexpr unsigned int KGBIPFGABEG_TypeDefinitionIndex = 14906;

	class KGBIPFGABEG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>**)UnitySDK::FromName("", "KGBIPFGABEG")->GetStaticField(0x34680);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KGBIPFGABEG")->GetStaticField(0x34688);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KGBIPFGABEG")->GetStaticField(0x34690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KGBIPFGABEG")->GetStaticField(0xA9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KGBIPFGABEG")->GetStaticField(0xA9F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>*(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDiceSlotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousDiceSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KGBIPFGABEG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGBIPFGABEG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KGBIPFGABEG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGBIPFGABEG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KGBIPFGABEG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueNousDiceSlotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceSlotRow*))((::PBYTE)hIl2Cpp + KGBIPFGABEG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
