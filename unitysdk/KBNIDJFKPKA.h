#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraArrangementPresetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBNIDJFKPKA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D035C80)
#define KBNIDJFKPKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D036250)
#define KBNIDJFKPKA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D035DF0)
#define KBNIDJFKPKA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0356F0)
#define KBNIDJFKPKA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D035980)
#define KBNIDJFKPKA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D035E90)
#define KBNIDJFKPKA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D035EE0)
#define KBNIDJFKPKA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D035CC0)
#define KBNIDJFKPKA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D035920)
#define KBNIDJFKPKA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D035AF0)
#define KBNIDJFKPKA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D035D50)
#define KBNIDJFKPKA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D035670)

inline static constexpr unsigned int KBNIDJFKPKA_TypeDefinitionIndex = 13051;

	class KBNIDJFKPKA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>**)UnitySDK::FromName("", "KBNIDJFKPKA")->GetStaticField(0x31E30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KBNIDJFKPKA")->GetStaticField(0x31E38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KBNIDJFKPKA")->GetStaticField(0x31E40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KBNIDJFKPKA")->GetStaticField(0xA440);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KBNIDJFKPKA")->GetStaticField(0xA441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>*(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraArrangementPresetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraArrangementPresetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KBNIDJFKPKA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNIDJFKPKA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KBNIDJFKPKA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBNIDJFKPKA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KBNIDJFKPKA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraArrangementPresetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraArrangementPresetRow*))((::PBYTE)hIl2Cpp + KBNIDJFKPKA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
