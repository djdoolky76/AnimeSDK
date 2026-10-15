#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionRogueConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMJNHPNJFDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCAFED0)
#define CMJNHPNJFDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB0AB0)
#define CMJNHPNJFDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB0270)
#define CMJNHPNJFDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCAFF10)
#define CMJNHPNJFDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB07B0)
#define CMJNHPNJFDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB0310)
#define CMJNHPNJFDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB0360)
#define CMJNHPNJFDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB0140)
#define CMJNHPNJFDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB0750)
#define CMJNHPNJFDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB0920)
#define CMJNHPNJFDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB01D0)
#define CMJNHPNJFDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB06D0)

inline static constexpr unsigned int CMJNHPNJFDL_TypeDefinitionIndex = 15171;

	class CMJNHPNJFDL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CMJNHPNJFDL")->GetStaticField(0x44B10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueConfigRow*>**)UnitySDK::FromName("", "CMJNHPNJFDL")->GetStaticField(0x44B18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CMJNHPNJFDL")->GetStaticField(0x44B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CMJNHPNJFDL")->GetStaticField(0x10570);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CMJNHPNJFDL")->GetStaticField(0x10571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CMJNHPNJFDL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMJNHPNJFDL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CMJNHPNJFDL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionRogueConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionRogueConfigRow*))((::PBYTE)hIl2Cpp + CMJNHPNJFDL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueConfigRow*>(*)())((::PBYTE)hIl2Cpp + CMJNHPNJFDL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionRogueConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionRogueConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CMJNHPNJFDL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
