#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPKDELKIJIF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09D7F0)
#define KPKDELKIJIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09E340)
#define KPKDELKIJIF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09DB90)
#define KPKDELKIJIF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09D830)
#define KPKDELKIJIF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09E080)
#define KPKDELKIJIF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09DC30)
#define KPKDELKIJIF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09DC80)
#define KPKDELKIJIF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09DA60)
#define KPKDELKIJIF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09E020)
#define KPKDELKIJIF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09E1B0)
#define KPKDELKIJIF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09DAF0)
#define KPKDELKIJIF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09DFA0)

inline static constexpr unsigned int KPKDELKIJIF_TypeDefinitionIndex = 15302;

	class KPKDELKIJIF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasRow*>**)UnitySDK::FromName("", "KPKDELKIJIF")->GetStaticField(0x378D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPKDELKIJIF")->GetStaticField(0x378D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPKDELKIJIF")->GetStaticField(0x378E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPKDELKIJIF")->GetStaticField(0xB3B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPKDELKIJIF")->GetStaticField(0xB3B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPKDELKIJIF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPKDELKIJIF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPKDELKIJIF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TitanAtlasRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TitanAtlasRow*))((::PBYTE)hIl2Cpp + KPKDELKIJIF_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasRow*>(*)())((::PBYTE)hIl2Cpp + KPKDELKIJIF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TitanAtlasRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TitanAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPKDELKIJIF_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
