#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingTeamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMOLFAMDGBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EAF5E00)
#define BMOLFAMDGBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF63D0)
#define BMOLFAMDGBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EAF5F70)
#define BMOLFAMDGBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EAF5870)
#define BMOLFAMDGBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EAF5B00)
#define BMOLFAMDGBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EAF6010)
#define BMOLFAMDGBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EAF6060)
#define BMOLFAMDGBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EAF5E40)
#define BMOLFAMDGBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EAF5AA0)
#define BMOLFAMDGBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EAF5C70)
#define BMOLFAMDGBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EAF5ED0)
#define BMOLFAMDGBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EAF57F0)

inline static constexpr unsigned int BMOLFAMDGBP_TypeDefinitionIndex = 10973;

	class BMOLFAMDGBP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMOLFAMDGBP")->GetStaticField(0x4CA20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BMOLFAMDGBP")->GetStaticField(0x4CA28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>**)UnitySDK::FromName("", "BMOLFAMDGBP")->GetStaticField(0x4CA30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMOLFAMDGBP")->GetStaticField(0xE9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMOLFAMDGBP")->GetStaticField(0xE9F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>*(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTeamRow*>(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingTeamRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingTeamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMOLFAMDGBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOLFAMDGBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMOLFAMDGBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMOLFAMDGBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMOLFAMDGBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingTeamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingTeamRow*))((::PBYTE)hIl2Cpp + BMOLFAMDGBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
