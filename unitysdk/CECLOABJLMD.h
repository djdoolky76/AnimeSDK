#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesQuestGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CECLOABJLMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ED45170)
#define CECLOABJLMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED45740)
#define CECLOABJLMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ED452E0)
#define CECLOABJLMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ED44BE0)
#define CECLOABJLMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ED44E70)
#define CECLOABJLMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ED45380)
#define CECLOABJLMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ED453D0)
#define CECLOABJLMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ED451B0)
#define CECLOABJLMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ED44E10)
#define CECLOABJLMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ED44FE0)
#define CECLOABJLMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ED45240)
#define CECLOABJLMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ED44B60)

inline static constexpr unsigned int CECLOABJLMD_TypeDefinitionIndex = 12283;

	class CECLOABJLMD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x2DF90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>**)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x2DF98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x2DFA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x99C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x99C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesQuestGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CECLOABJLMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CECLOABJLMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CECLOABJLMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CECLOABJLMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesQuestGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesQuestGroupRow*))((::PBYTE)hIl2Cpp + CECLOABJLMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
