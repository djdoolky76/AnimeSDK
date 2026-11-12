#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityReCollectionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMCNJAEKEBA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBA9B20)
#define BMCNJAEKEBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAA0A0)
#define BMCNJAEKEBA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBA9C90)
#define BMCNJAEKEBA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBA9610)
#define BMCNJAEKEBA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBA98A0)
#define BMCNJAEKEBA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBA9D30)
#define BMCNJAEKEBA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBA9D80)
#define BMCNJAEKEBA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBA9B60)
#define BMCNJAEKEBA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBA9840)
#define BMCNJAEKEBA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBA99D0)
#define BMCNJAEKEBA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBA9BF0)
#define BMCNJAEKEBA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBA9590)

inline static constexpr unsigned int BMCNJAEKEBA_TypeDefinitionIndex = 12386;

	class BMCNJAEKEBA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMCNJAEKEBA")->GetStaticField(0x49E40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionConfigRow*>**)UnitySDK::FromName("", "BMCNJAEKEBA")->GetStaticField(0x49E48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BMCNJAEKEBA")->GetStaticField(0x49E50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMCNJAEKEBA")->GetStaticField(0xF140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMCNJAEKEBA")->GetStaticField(0xF141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityReCollectionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityReCollectionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMCNJAEKEBA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCNJAEKEBA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMCNJAEKEBA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMCNJAEKEBA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMCNJAEKEBA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityReCollectionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityReCollectionConfigRow*))((::PBYTE)hIl2Cpp + BMCNJAEKEBA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
