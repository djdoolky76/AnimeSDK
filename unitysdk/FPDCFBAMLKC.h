#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTutorialStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPDCFBAMLKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDEC0F0)
#define FPDCFBAMLKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEC6C0)
#define FPDCFBAMLKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDEC260)
#define FPDCFBAMLKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDEBB60)
#define FPDCFBAMLKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDEBDF0)
#define FPDCFBAMLKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDEC300)
#define FPDCFBAMLKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDEC350)
#define FPDCFBAMLKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDEC130)
#define FPDCFBAMLKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDEBD90)
#define FPDCFBAMLKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDEBF60)
#define FPDCFBAMLKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDEC1C0)
#define FPDCFBAMLKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDEBAE0)

inline static constexpr unsigned int FPDCFBAMLKC_TypeDefinitionIndex = 13646;

	class FPDCFBAMLKC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FPDCFBAMLKC")->GetStaticField(0x13960);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>**)UnitySDK::FromName("", "FPDCFBAMLKC")->GetStaticField(0x13968);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FPDCFBAMLKC")->GetStaticField(0x13970);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FPDCFBAMLKC")->GetStaticField(0x4080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FPDCFBAMLKC")->GetStaticField(0x4081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTutorialStageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTutorialStageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FPDCFBAMLKC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDCFBAMLKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FPDCFBAMLKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPDCFBAMLKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FPDCFBAMLKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTutorialStageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialStageConfigRow*))((::PBYTE)hIl2Cpp + FPDCFBAMLKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
