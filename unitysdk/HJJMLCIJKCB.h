#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourLevelConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJJMLCIJKCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB7810)
#define HJJMLCIJKCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB7D90)
#define HJJMLCIJKCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB7980)
#define HJJMLCIJKCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB72C0)
#define HJJMLCIJKCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB7550)
#define HJJMLCIJKCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB7A20)
#define HJJMLCIJKCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB7A70)
#define HJJMLCIJKCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB7850)
#define HJJMLCIJKCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB74F0)
#define HJJMLCIJKCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB7680)
#define HJJMLCIJKCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB78E0)
#define HJJMLCIJKCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB7240)

inline static constexpr unsigned int HJJMLCIJKCB_TypeDefinitionIndex = 12098;

	class HJJMLCIJKCB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x1EAC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>**)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x1EAC8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x1EAD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x7010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x7011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourLevelConfigRow*))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
