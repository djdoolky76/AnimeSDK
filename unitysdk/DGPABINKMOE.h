#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarEventOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGPABINKMOE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DEEDEC0)
#define DGPABINKMOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEE490)
#define DGPABINKMOE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DEEE030)
#define DGPABINKMOE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DEED930)
#define DGPABINKMOE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DEEDBC0)
#define DGPABINKMOE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DEEE0D0)
#define DGPABINKMOE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DEEE120)
#define DGPABINKMOE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DEEDF00)
#define DGPABINKMOE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DEEDB60)
#define DGPABINKMOE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DEEDD30)
#define DGPABINKMOE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DEEDF90)
#define DGPABINKMOE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DEED8B0)

inline static constexpr unsigned int DGPABINKMOE_TypeDefinitionIndex = 12297;

	class DGPABINKMOE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DGPABINKMOE")->GetStaticField(0x3BDB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*>**)UnitySDK::FromName("", "DGPABINKMOE")->GetStaticField(0x3BDB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DGPABINKMOE")->GetStaticField(0x3BDC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DGPABINKMOE")->GetStaticField(0xD350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DGPABINKMOE")->GetStaticField(0xD351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*>*(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*>(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarEventOptionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAvatarEventOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGPABINKMOE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGPABINKMOE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DGPABINKMOE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGPABINKMOE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DGPABINKMOE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesAvatarEventOptionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarEventOptionRow*))((::PBYTE)hIl2Cpp + DGPABINKMOE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
