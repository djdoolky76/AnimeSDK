#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleDollyZoomTeleportRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGHLNPAPDBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CECC590)
#define IGHLNPAPDBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CECCB60)
#define IGHLNPAPDBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CECC700)
#define IGHLNPAPDBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CECC000)
#define IGHLNPAPDBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CECC290)
#define IGHLNPAPDBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CECC7A0)
#define IGHLNPAPDBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CECC7F0)
#define IGHLNPAPDBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CECC5D0)
#define IGHLNPAPDBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CECC230)
#define IGHLNPAPDBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CECC400)
#define IGHLNPAPDBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CECC660)
#define IGHLNPAPDBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CECBF80)

inline static constexpr unsigned int IGHLNPAPDBP_TypeDefinitionIndex = 14088;

	class IGHLNPAPDBP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IGHLNPAPDBP")->GetStaticField(0x21B10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IGHLNPAPDBP")->GetStaticField(0x21B18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*>**)UnitySDK::FromName("", "IGHLNPAPDBP")->GetStaticField(0x21B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IGHLNPAPDBP")->GetStaticField(0x7650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IGHLNPAPDBP")->GetStaticField(0x7651);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*>*(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*>(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IGHLNPAPDBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGHLNPAPDBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IGHLNPAPDBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGHLNPAPDBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IGHLNPAPDBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleDollyZoomTeleportRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*))((::PBYTE)hIl2Cpp + IGHLNPAPDBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
