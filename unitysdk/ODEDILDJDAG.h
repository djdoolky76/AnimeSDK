#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceRegionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODEDILDJDAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E45BF80)
#define ODEDILDJDAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45C550)
#define ODEDILDJDAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E45C0F0)
#define ODEDILDJDAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E45B9F0)
#define ODEDILDJDAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E45BC80)
#define ODEDILDJDAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E45C190)
#define ODEDILDJDAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E45C1E0)
#define ODEDILDJDAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E45BFC0)
#define ODEDILDJDAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E45BC20)
#define ODEDILDJDAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E45BDF0)
#define ODEDILDJDAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E45C050)
#define ODEDILDJDAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E45B970)

inline static constexpr unsigned int ODEDILDJDAG_TypeDefinitionIndex = 11014;

	class ODEDILDJDAG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODEDILDJDAG")->GetStaticField(0x4EB60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceRegionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceRegionRow*>**)UnitySDK::FromName("", "ODEDILDJDAG")->GetStaticField(0x4EB68);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODEDILDJDAG")->GetStaticField(0x4EB70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODEDILDJDAG")->GetStaticField(0xFB80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODEDILDJDAG")->GetStaticField(0xFB81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceRegionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceRegionRow*>*(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceRegionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceRegionRow*>(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceRegionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceRegionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODEDILDJDAG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODEDILDJDAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ODEDILDJDAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODEDILDJDAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ODEDILDJDAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceRegionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceRegionRow*))((::PBYTE)hIl2Cpp + ODEDILDJDAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
