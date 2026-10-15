#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishTypeConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLJIJEPKKDO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A99B0)
#define KLJIJEPKKDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A9F80)
#define KLJIJEPKKDO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A9B20)
#define KLJIJEPKKDO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A9420)
#define KLJIJEPKKDO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A96B0)
#define KLJIJEPKKDO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A9BC0)
#define KLJIJEPKKDO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A9C10)
#define KLJIJEPKKDO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A99F0)
#define KLJIJEPKKDO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A9650)
#define KLJIJEPKKDO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A9820)
#define KLJIJEPKKDO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A9A80)
#define KLJIJEPKKDO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A93A0)

inline static constexpr unsigned int KLJIJEPKKDO_TypeDefinitionIndex = 14159;

	class KLJIJEPKKDO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLJIJEPKKDO")->GetStaticField(0x37890);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KLJIJEPKKDO")->GetStaticField(0x37898);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>**)UnitySDK::FromName("", "KLJIJEPKKDO")->GetStaticField(0x378A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLJIJEPKKDO")->GetStaticField(0xBD40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLJIJEPKKDO")->GetStaticField(0xBD41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FinishTypeConfigRow* LMBKNCAIDLC(::RPG::GameCore::QuestFinishType a1)
		{
			return ((::RPG::GameCore::FinishTypeConfigRow*(*)(::RPG::GameCore::QuestFinishType))((::PBYTE)hIl2Cpp + KLJIJEPKKDO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJIJEPKKDO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLJIJEPKKDO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLJIJEPKKDO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLJIJEPKKDO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FinishTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FinishTypeConfigRow*))((::PBYTE)hIl2Cpp + KLJIJEPKKDO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
