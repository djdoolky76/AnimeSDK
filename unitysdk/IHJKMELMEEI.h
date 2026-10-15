#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHJKMELMEEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF10B70)
#define IHJKMELMEEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF110F0)
#define IHJKMELMEEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF10CE0)
#define IHJKMELMEEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF10620)
#define IHJKMELMEEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF108B0)
#define IHJKMELMEEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF10D80)
#define IHJKMELMEEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF10DD0)
#define IHJKMELMEEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF10BB0)
#define IHJKMELMEEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF10850)
#define IHJKMELMEEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF109E0)
#define IHJKMELMEEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF10C40)
#define IHJKMELMEEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF105A0)

inline static constexpr unsigned int IHJKMELMEEI_TypeDefinitionIndex = 11140;

	class IHJKMELMEEI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHJKMELMEEI")->GetStaticField(0x23780);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>**)UnitySDK::FromName("", "IHJKMELMEEI")->GetStaticField(0x23788);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IHJKMELMEEI")->GetStaticField(0x23790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHJKMELMEEI")->GetStaticField(0x7DE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHJKMELMEEI")->GetStaticField(0x7DE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>*(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelChimeraPresetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraPresetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IHJKMELMEEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHJKMELMEEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IHJKMELMEEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHJKMELMEEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IHJKMELMEEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraPresetRow*))((::PBYTE)hIl2Cpp + IHJKMELMEEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
