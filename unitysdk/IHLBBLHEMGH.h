#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHLBBLHEMGH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6CDDD0)
#define IHLBBLHEMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CE390)
#define IHLBBLHEMGH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6CDF40)
#define IHLBBLHEMGH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6CD870)
#define IHLBBLHEMGH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6CDB00)
#define IHLBBLHEMGH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6CDFE0)
#define IHLBBLHEMGH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6CE030)
#define IHLBBLHEMGH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6CDE10)
#define IHLBBLHEMGH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6CDAA0)
#define IHLBBLHEMGH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6CDC30)
#define IHLBBLHEMGH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6CDEA0)
#define IHLBBLHEMGH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6CD7F0)

inline static constexpr unsigned int IHLBBLHEMGH_TypeDefinitionIndex = 12215;

	class IHLBBLHEMGH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x1FAE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>**)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x1FAE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x1FAF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x6B00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x6B01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>*(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEquipLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PixAirEquipLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IHLBBLHEMGH_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHLBBLHEMGH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IHLBBLHEMGH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHLBBLHEMGH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IHLBBLHEMGH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEquipLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEquipLevelRow*))((::PBYTE)hIl2Cpp + IHLBBLHEMGH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
