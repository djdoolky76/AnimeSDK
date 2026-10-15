#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaBasicRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJJKIMFLFNO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D80EEF0)
#define BJJKIMFLFNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D80F470)
#define BJJKIMFLFNO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D80F060)
#define BJJKIMFLFNO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D80E9E0)
#define BJJKIMFLFNO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D80EC70)
#define BJJKIMFLFNO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D80F100)
#define BJJKIMFLFNO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D80F150)
#define BJJKIMFLFNO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D80EF30)
#define BJJKIMFLFNO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D80EC10)
#define BJJKIMFLFNO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D80EDA0)
#define BJJKIMFLFNO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D80EFC0)
#define BJJKIMFLFNO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D80E960)

inline static constexpr unsigned int BJJKIMFLFNO_TypeDefinitionIndex = 12215;

	class BJJKIMFLFNO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0x35F90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaBasicRow*>**)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0x35F98);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0x35FA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0xB600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJJKIMFLFNO")->GetStaticField(0xB601);
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
