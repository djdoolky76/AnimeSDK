#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHLAFIEPIMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D002B40)
#define JHLAFIEPIMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D003110)
#define JHLAFIEPIMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D002CB0)
#define JHLAFIEPIMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0025B0)
#define JHLAFIEPIMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D002840)
#define JHLAFIEPIMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D002D50)
#define JHLAFIEPIMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D002DA0)
#define JHLAFIEPIMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D002B80)
#define JHLAFIEPIMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0027E0)
#define JHLAFIEPIMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0029B0)
#define JHLAFIEPIMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D002C10)
#define JHLAFIEPIMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D002530)

inline static constexpr unsigned int JHLAFIEPIMC_TypeDefinitionIndex = 11769;

	class JHLAFIEPIMC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHLAFIEPIMC")->GetStaticField(0x2E5C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>**)UnitySDK::FromName("", "JHLAFIEPIMC")->GetStaticField(0x2E5C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JHLAFIEPIMC")->GetStaticField(0x2E5D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHLAFIEPIMC")->GetStaticField(0x9990);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHLAFIEPIMC")->GetStaticField(0x9991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>*(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestEquipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHLAFIEPIMC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHLAFIEPIMC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHLAFIEPIMC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHLAFIEPIMC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHLAFIEPIMC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestEquipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestEquipRow*))((::PBYTE)hIl2Cpp + JHLAFIEPIMC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
