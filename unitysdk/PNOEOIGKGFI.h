#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonGridConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNOEOIGKGFI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E61E0)
#define PNOEOIGKGFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E67B0)
#define PNOEOIGKGFI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E6350)
#define PNOEOIGKGFI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E5C50)
#define PNOEOIGKGFI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E5EE0)
#define PNOEOIGKGFI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E63F0)
#define PNOEOIGKGFI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E6440)
#define PNOEOIGKGFI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E6220)
#define PNOEOIGKGFI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E5E80)
#define PNOEOIGKGFI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E6050)
#define PNOEOIGKGFI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E62B0)
#define PNOEOIGKGFI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E5BD0)

inline static constexpr unsigned int PNOEOIGKGFI_TypeDefinitionIndex = 12529;

	class PNOEOIGKGFI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNOEOIGKGFI")->GetStaticField(0x522E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNOEOIGKGFI")->GetStaticField(0x522E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridConfigRow*>**)UnitySDK::FromName("", "PNOEOIGKGFI")->GetStaticField(0x522F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNOEOIGKGFI")->GetStaticField(0x127A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNOEOIGKGFI")->GetStaticField(0x127A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGridConfigRow*>(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonGridConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonGridConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNOEOIGKGFI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOEOIGKGFI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNOEOIGKGFI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOEOIGKGFI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNOEOIGKGFI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonGridConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonGridConfigRow*))((::PBYTE)hIl2Cpp + PNOEOIGKGFI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
