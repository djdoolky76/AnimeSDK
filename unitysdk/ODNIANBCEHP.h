#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightFormationWaveConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODNIANBCEHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D25ABB0)
#define ODNIANBCEHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25B180)
#define ODNIANBCEHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D25AD20)
#define ODNIANBCEHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D25A620)
#define ODNIANBCEHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D25A8B0)
#define ODNIANBCEHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D25ADC0)
#define ODNIANBCEHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D25AE10)
#define ODNIANBCEHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D25ABF0)
#define ODNIANBCEHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D25A850)
#define ODNIANBCEHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D25AA20)
#define ODNIANBCEHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D25AC80)
#define ODNIANBCEHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D25A5A0)

inline static constexpr unsigned int ODNIANBCEHP_TypeDefinitionIndex = 13632;

	class ODNIANBCEHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>**)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x33190);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x33198);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x331A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0xAC20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0xAC21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightFormationWaveConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightFormationWaveConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODNIANBCEHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNIANBCEHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ODNIANBCEHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODNIANBCEHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ODNIANBCEHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightFormationWaveConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightFormationWaveConfigRow*))((::PBYTE)hIl2Cpp + ODNIANBCEHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
