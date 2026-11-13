#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightFormationWaveConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODNIANBCEHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6069A0)
#define ODNIANBCEHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E606F70)
#define ODNIANBCEHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E606B10)
#define ODNIANBCEHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E606410)
#define ODNIANBCEHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6066A0)
#define ODNIANBCEHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E606BB0)
#define ODNIANBCEHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E606C00)
#define ODNIANBCEHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6069E0)
#define ODNIANBCEHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E606640)
#define ODNIANBCEHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E606810)
#define ODNIANBCEHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E606A70)
#define ODNIANBCEHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E606390)

inline static constexpr unsigned int ODNIANBCEHP_TypeDefinitionIndex = 13754;

	class ODNIANBCEHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFormationWaveConfigRow*>**)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x55FA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x55FA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x55FB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x12570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODNIANBCEHP")->GetStaticField(0x12571);
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
