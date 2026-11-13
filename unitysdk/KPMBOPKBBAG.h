#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingDriverRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPMBOPKBBAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E936950)
#define KPMBOPKBBAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E936F20)
#define KPMBOPKBBAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E936AC0)
#define KPMBOPKBBAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9363C0)
#define KPMBOPKBBAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E936650)
#define KPMBOPKBBAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E936B60)
#define KPMBOPKBBAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E936BB0)
#define KPMBOPKBBAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E936990)
#define KPMBOPKBBAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9365F0)
#define KPMBOPKBBAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9367C0)
#define KPMBOPKBBAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E936A20)
#define KPMBOPKBBAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E936340)

inline static constexpr unsigned int KPMBOPKBBAG_TypeDefinitionIndex = 10989;

	class KPMBOPKBBAG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPMBOPKBBAG")->GetStaticField(0x371B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPMBOPKBBAG")->GetStaticField(0x371B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDriverRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDriverRow*>**)UnitySDK::FromName("", "KPMBOPKBBAG")->GetStaticField(0x371C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPMBOPKBBAG")->GetStaticField(0xACF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPMBOPKBBAG")->GetStaticField(0xACF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDriverRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDriverRow*>*(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDriverRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDriverRow*>(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingDriverRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingDriverRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPMBOPKBBAG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMBOPKBBAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPMBOPKBBAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPMBOPKBBAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPMBOPKBBAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingDriverRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingDriverRow*))((::PBYTE)hIl2Cpp + KPMBOPKBBAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
