#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaBasicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJJKIMFLFNO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F19ADE0)
#define BJJKIMFLFNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F19B360)
#define BJJKIMFLFNO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F19AF50)
#define BJJKIMFLFNO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F19A8D0)
#define BJJKIMFLFNO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F19AB60)
#define BJJKIMFLFNO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F19AFF0)
#define BJJKIMFLFNO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F19B040)
#define BJJKIMFLFNO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F19AE20)
#define BJJKIMFLFNO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F19AB00)
#define BJJKIMFLFNO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F19AC90)
#define BJJKIMFLFNO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F19AEB0)
#define BJJKIMFLFNO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F19A850)

inline static constexpr unsigned int BJJKIMFLFNO_TypeDefinitionIndex = 12272;

	class BJJKIMFLFNO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0x499B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>**)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0x499B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0x499C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0xE340);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0xE341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>*(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGachaBasicRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesGachaBasicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BJJKIMFLFNO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJJKIMFLFNO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BJJKIMFLFNO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJJKIMFLFNO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BJJKIMFLFNO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGachaBasicRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGachaBasicRow*))((::PBYTE)hIl2Cpp + BJJKIMFLFNO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
