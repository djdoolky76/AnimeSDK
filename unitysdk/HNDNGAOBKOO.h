#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNDNGAOBKOO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0ACCD0)
#define HNDNGAOBKOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AD2A0)
#define HNDNGAOBKOO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0ACE40)
#define HNDNGAOBKOO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0AC740)
#define HNDNGAOBKOO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0AC9D0)
#define HNDNGAOBKOO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0ACEE0)
#define HNDNGAOBKOO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0ACF30)
#define HNDNGAOBKOO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0ACD10)
#define HNDNGAOBKOO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0AC970)
#define HNDNGAOBKOO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0ACB40)
#define HNDNGAOBKOO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0ACDA0)
#define HNDNGAOBKOO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0AC6C0)

inline static constexpr unsigned int HNDNGAOBKOO_TypeDefinitionIndex = 12251;

	class HNDNGAOBKOO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HNDNGAOBKOO")->GetStaticField(0x171B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>**)UnitySDK::FromName("", "HNDNGAOBKOO")->GetStaticField(0x171B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HNDNGAOBKOO")->GetStaticField(0x171C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HNDNGAOBKOO")->GetStaticField(0x4C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HNDNGAOBKOO")->GetStaticField(0x4C51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>*(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAvatarLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HNDNGAOBKOO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDNGAOBKOO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HNDNGAOBKOO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDNGAOBKOO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HNDNGAOBKOO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesAvatarLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarLevelRow*))((::PBYTE)hIl2Cpp + HNDNGAOBKOO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
