#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFHGKLADOKI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC87580)
#define AFHGKLADOKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC87B80)
#define AFHGKLADOKI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC876F0)
#define AFHGKLADOKI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC86FB0)
#define AFHGKLADOKI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC87240)
#define AFHGKLADOKI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC87790)
#define AFHGKLADOKI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC877E0)
#define AFHGKLADOKI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC875C0)
#define AFHGKLADOKI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC871E0)
#define AFHGKLADOKI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC873B0)
#define AFHGKLADOKI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC87650)
#define AFHGKLADOKI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC86F30)

inline static constexpr unsigned int AFHGKLADOKI_TypeDefinitionIndex = 10969;

	class AFHGKLADOKI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AFHGKLADOKI")->GetStaticField(0x3E530);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AFHGKLADOKI")->GetStaticField(0x3E538);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingSkillRow*>**)UnitySDK::FromName("", "AFHGKLADOKI")->GetStaticField(0x3E540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AFHGKLADOKI")->GetStaticField(0xEB50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AFHGKLADOKI")->GetStaticField(0xEB51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingSkillRow*>*(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingSkillRow*>(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingSkillRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::B51RacingSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AFHGKLADOKI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFHGKLADOKI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AFHGKLADOKI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AFHGKLADOKI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AFHGKLADOKI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingSkillRow*))((::PBYTE)hIl2Cpp + AFHGKLADOKI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
