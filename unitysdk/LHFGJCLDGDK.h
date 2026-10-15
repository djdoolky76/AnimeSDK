#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingTREventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHFGJCLDGDK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F1410)
#define LHFGJCLDGDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F19E0)
#define LHFGJCLDGDK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F1580)
#define LHFGJCLDGDK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F0E80)
#define LHFGJCLDGDK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F1110)
#define LHFGJCLDGDK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F1620)
#define LHFGJCLDGDK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F1670)
#define LHFGJCLDGDK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F1450)
#define LHFGJCLDGDK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F10B0)
#define LHFGJCLDGDK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F1280)
#define LHFGJCLDGDK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F14E0)
#define LHFGJCLDGDK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F0E00)

inline static constexpr unsigned int LHFGJCLDGDK_TypeDefinitionIndex = 10975;

	class LHFGJCLDGDK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHFGJCLDGDK")->GetStaticField(0x3D4D0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LHFGJCLDGDK")->GetStaticField(0x3D4D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTREventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTREventRow*>**)UnitySDK::FromName("", "LHFGJCLDGDK")->GetStaticField(0x3D4E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHFGJCLDGDK")->GetStaticField(0xD230);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHFGJCLDGDK")->GetStaticField(0xD231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTREventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTREventRow*>*(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTREventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTREventRow*>(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingTREventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingTREventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHFGJCLDGDK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHFGJCLDGDK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHFGJCLDGDK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHFGJCLDGDK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHFGJCLDGDK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingTREventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingTREventRow*))((::PBYTE)hIl2Cpp + LHFGJCLDGDK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
