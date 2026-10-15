#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicDifficultyCompRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALGOOODEOLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCD8B10)
#define ALGOOODEOLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD9090)
#define ALGOOODEOLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD8C80)
#define ALGOOODEOLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCD8600)
#define ALGOOODEOLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD8890)
#define ALGOOODEOLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD8D20)
#define ALGOOODEOLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD8D70)
#define ALGOOODEOLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD8B50)
#define ALGOOODEOLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD8830)
#define ALGOOODEOLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD89C0)
#define ALGOOODEOLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD8BE0)
#define ALGOOODEOLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD8580)

inline static constexpr unsigned int ALGOOODEOLN_TypeDefinitionIndex = 14867;

	class ALGOOODEOLN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ALGOOODEOLN")->GetStaticField(0x3B360);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ALGOOODEOLN")->GetStaticField(0x3B368);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyCompRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyCompRow*>**)UnitySDK::FromName("", "ALGOOODEOLN")->GetStaticField(0x3B370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ALGOOODEOLN")->GetStaticField(0xC950);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ALGOOODEOLN")->GetStaticField(0xC951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyCompRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyCompRow*>*(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyCompRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyCompRow*>(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicDifficultyCompRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicDifficultyCompRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ALGOOODEOLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALGOOODEOLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ALGOOODEOLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALGOOODEOLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ALGOOODEOLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicDifficultyCompRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicDifficultyCompRow*))((::PBYTE)hIl2Cpp + ALGOOODEOLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
