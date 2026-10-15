#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGAOLNCNEEJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCEDD50)
#define DGAOLNCNEEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEE320)
#define DGAOLNCNEEJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCEDEC0)
#define DGAOLNCNEEJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCED7C0)
#define DGAOLNCNEEJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCEDA50)
#define DGAOLNCNEEJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCEDF60)
#define DGAOLNCNEEJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCEDFB0)
#define DGAOLNCNEEJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCEDD90)
#define DGAOLNCNEEJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCED9F0)
#define DGAOLNCNEEJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCEDBC0)
#define DGAOLNCNEEJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCEDE20)
#define DGAOLNCNEEJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCED740)

inline static constexpr unsigned int DGAOLNCNEEJ_TypeDefinitionIndex = 12219;

	class DGAOLNCNEEJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>**)UnitySDK::FromName("", "DGAOLNCNEEJ")->GetStaticField(0x455F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DGAOLNCNEEJ")->GetStaticField(0x455F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DGAOLNCNEEJ")->GetStaticField(0x45600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DGAOLNCNEEJ")->GetStaticField(0x105F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DGAOLNCNEEJ")->GetStaticField(0x105F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>*(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGachaCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesGachaCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGachaCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGachaCardRow*))((::PBYTE)hIl2Cpp + DGAOLNCNEEJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
