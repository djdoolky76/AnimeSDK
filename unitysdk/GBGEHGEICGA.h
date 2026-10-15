#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAwardTypeEnum.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesAwardTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBGEHGEICGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE24510)
#define GBGEHGEICGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE24AE0)
#define GBGEHGEICGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE24680)
#define GBGEHGEICGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE23F80)
#define GBGEHGEICGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE24210)
#define GBGEHGEICGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE24720)
#define GBGEHGEICGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE24770)
#define GBGEHGEICGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE24550)
#define GBGEHGEICGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE241B0)
#define GBGEHGEICGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE24380)
#define GBGEHGEICGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE245E0)
#define GBGEHGEICGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE23F00)

inline static constexpr unsigned int GBGEHGEICGA_TypeDefinitionIndex = 11110;

	class GBGEHGEICGA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GBGEHGEICGA")->GetStaticField(0x16430);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardTypeRow*>**)UnitySDK::FromName("", "GBGEHGEICGA")->GetStaticField(0x16438);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBGEHGEICGA")->GetStaticField(0x16440);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBGEHGEICGA")->GetStaticField(0x5420);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBGEHGEICGA")->GetStaticField(0x5421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardTypeRow*>*(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardTypeRow*>(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingFesAwardTypeRow* LMBKNCAIDLC(::RPG::GameCore::ChenLingFesAwardTypeEnum a1)
		{
			return ((::RPG::GameCore::ChenLingFesAwardTypeRow*(*)(::RPG::GameCore::ChenLingFesAwardTypeEnum))((::PBYTE)hIl2Cpp + GBGEHGEICGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBGEHGEICGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBGEHGEICGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBGEHGEICGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBGEHGEICGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingFesAwardTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesAwardTypeRow*))((::PBYTE)hIl2Cpp + GBGEHGEICGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
