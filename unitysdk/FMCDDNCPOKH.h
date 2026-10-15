#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollShopConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMCDDNCPOKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDAFD0)
#define FMCDDNCPOKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDDB550)
#define FMCDDNCPOKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDDB140)
#define FMCDDNCPOKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDAA80)
#define FMCDDNCPOKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDAD10)
#define FMCDDNCPOKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDDB1E0)
#define FMCDDNCPOKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDDB230)
#define FMCDDNCPOKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDB010)
#define FMCDDNCPOKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDACB0)
#define FMCDDNCPOKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDAE40)
#define FMCDDNCPOKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDB0A0)
#define FMCDDNCPOKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDAA00)

inline static constexpr unsigned int FMCDDNCPOKH_TypeDefinitionIndex = 15079;

	class FMCDDNCPOKH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopConfigRow*>**)UnitySDK::FromName("", "FMCDDNCPOKH")->GetStaticField(0x12CC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FMCDDNCPOKH")->GetStaticField(0x12CC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FMCDDNCPOKH")->GetStaticField(0x12CD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FMCDDNCPOKH")->GetStaticField(0x3D90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FMCDDNCPOKH")->GetStaticField(0x3D91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopConfigRow*>(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RollShopConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RollShopConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FMCDDNCPOKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMCDDNCPOKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMCDDNCPOKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMCDDNCPOKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FMCDDNCPOKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RollShopConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RollShopConfigRow*))((::PBYTE)hIl2Cpp + FMCDDNCPOKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
