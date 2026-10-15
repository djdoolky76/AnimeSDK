#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarEventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIEOFBAAEOJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D211900)
#define NIEOFBAAEOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D211ED0)
#define NIEOFBAAEOJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D211A70)
#define NIEOFBAAEOJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D211370)
#define NIEOFBAAEOJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D211600)
#define NIEOFBAAEOJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D211B10)
#define NIEOFBAAEOJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D211B60)
#define NIEOFBAAEOJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D211940)
#define NIEOFBAAEOJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2115A0)
#define NIEOFBAAEOJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D211770)
#define NIEOFBAAEOJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2119D0)
#define NIEOFBAAEOJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2112F0)

	class NIEOFBAAEOJ : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NIEOFBAAEOJ")->GetStaticField(0x2EA90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventRow*>**)UnitySDK::FromName("", "NIEOFBAAEOJ")->GetStaticField(0x2EA98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIEOFBAAEOJ")->GetStaticField(0x2EAA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIEOFBAAEOJ")->GetStaticField(0x9A60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIEOFBAAEOJ")->GetStaticField(0x9A61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventRow*>*(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarEventRow*>(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAvatarEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesAvatarEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarEventRow*))((::PBYTE)hIl2Cpp + NIEOFBAAEOJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
