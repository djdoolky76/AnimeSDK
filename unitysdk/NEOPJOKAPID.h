#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DifficultyAdjustmentStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEOPJOKAPID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1FD840)
#define NEOPJOKAPID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1FE390)
#define NEOPJOKAPID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1FDBE0)
#define NEOPJOKAPID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1FD880)
#define NEOPJOKAPID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1FE0D0)
#define NEOPJOKAPID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1FDC80)
#define NEOPJOKAPID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1FDCD0)
#define NEOPJOKAPID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1FDAB0)
#define NEOPJOKAPID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1FE070)
#define NEOPJOKAPID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1FE200)
#define NEOPJOKAPID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1FDB40)
#define NEOPJOKAPID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1FDFF0)

inline static constexpr unsigned int NEOPJOKAPID_TypeDefinitionIndex = 15177;

	class NEOPJOKAPID : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DifficultyAdjustmentStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DifficultyAdjustmentStageRow*>**)UnitySDK::FromName("", "NEOPJOKAPID")->GetStaticField(0x2DD20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NEOPJOKAPID")->GetStaticField(0x2DD28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NEOPJOKAPID")->GetStaticField(0x2DD30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NEOPJOKAPID")->GetStaticField(0x9610);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NEOPJOKAPID")->GetStaticField(0x9611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NEOPJOKAPID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEOPJOKAPID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NEOPJOKAPID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DifficultyAdjustmentStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DifficultyAdjustmentStageRow*))((::PBYTE)hIl2Cpp + NEOPJOKAPID_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DifficultyAdjustmentStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DifficultyAdjustmentStageRow*>*(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DifficultyAdjustmentStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DifficultyAdjustmentStageRow*>(*)())((::PBYTE)hIl2Cpp + NEOPJOKAPID_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DifficultyAdjustmentStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DifficultyAdjustmentStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NEOPJOKAPID_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
