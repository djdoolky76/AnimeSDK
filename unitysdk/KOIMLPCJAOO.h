#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesFunctionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOIMLPCJAOO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0BF410)
#define KOIMLPCJAOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF9E0)
#define KOIMLPCJAOO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0BF580)
#define KOIMLPCJAOO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0BEE80)
#define KOIMLPCJAOO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0BF110)
#define KOIMLPCJAOO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0BF620)
#define KOIMLPCJAOO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0BF670)
#define KOIMLPCJAOO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0BF450)
#define KOIMLPCJAOO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0BF0B0)
#define KOIMLPCJAOO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0BF280)
#define KOIMLPCJAOO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0BF4E0)
#define KOIMLPCJAOO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0BEE00)

inline static constexpr unsigned int KOIMLPCJAOO_TypeDefinitionIndex = 12268;

	class KOIMLPCJAOO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOIMLPCJAOO")->GetStaticField(0x39280);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KOIMLPCJAOO")->GetStaticField(0x39288);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesFunctionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesFunctionRow*>**)UnitySDK::FromName("", "KOIMLPCJAOO")->GetStaticField(0x39290);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOIMLPCJAOO")->GetStaticField(0xC380);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOIMLPCJAOO")->GetStaticField(0xC381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesFunctionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesFunctionRow*>*(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesFunctionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesFunctionRow*>(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesFunctionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesFunctionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOIMLPCJAOO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIMLPCJAOO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOIMLPCJAOO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOIMLPCJAOO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KOIMLPCJAOO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesFunctionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesFunctionRow*))((::PBYTE)hIl2Cpp + KOIMLPCJAOO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
