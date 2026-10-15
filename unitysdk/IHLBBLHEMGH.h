#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHLBBLHEMGH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF119E0)
#define IHLBBLHEMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF11FA0)
#define IHLBBLHEMGH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF11B50)
#define IHLBBLHEMGH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF11480)
#define IHLBBLHEMGH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF11710)
#define IHLBBLHEMGH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF11BF0)
#define IHLBBLHEMGH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF11C40)
#define IHLBBLHEMGH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF11A20)
#define IHLBBLHEMGH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF116B0)
#define IHLBBLHEMGH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF11840)
#define IHLBBLHEMGH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF11AB0)
#define IHLBBLHEMGH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF11400)

	class IHLBBLHEMGH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x23840);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x23848);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipLevelRow*>**)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x23850);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x7DF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHLBBLHEMGH")->GetStaticField(0x7DF1);
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
