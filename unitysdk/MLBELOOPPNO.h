#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicGambleUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLBELOOPPNO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1CBD40)
#define MLBELOOPPNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CC310)
#define MLBELOOPPNO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1CBEB0)
#define MLBELOOPPNO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1CB7B0)
#define MLBELOOPPNO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1CBA40)
#define MLBELOOPPNO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1CBF50)
#define MLBELOOPPNO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1CBFA0)
#define MLBELOOPPNO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1CBD80)
#define MLBELOOPPNO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1CB9E0)
#define MLBELOOPPNO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1CBBB0)
#define MLBELOOPPNO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1CBE10)
#define MLBELOOPPNO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1CB730)

inline static constexpr unsigned int MLBELOOPPNO_TypeDefinitionIndex = 14891;

	class MLBELOOPPNO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MLBELOOPPNO")->GetStaticField(0x2A8C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>**)UnitySDK::FromName("", "MLBELOOPPNO")->GetStaticField(0x2A8C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MLBELOOPPNO")->GetStaticField(0x2A8D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MLBELOOPPNO")->GetStaticField(0x8510);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MLBELOOPPNO")->GetStaticField(0x8511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>*(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicGambleUnitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicGambleUnitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MLBELOOPPNO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBELOOPPNO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MLBELOOPPNO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLBELOOPPNO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MLBELOOPPNO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicGambleUnitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicGambleUnitRow*))((::PBYTE)hIl2Cpp + MLBELOOPPNO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
