#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingStageWaveRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPCBOEACMLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9CA040)
#define BPCBOEACMLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9CA600)
#define BPCBOEACMLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9CA1B0)
#define BPCBOEACMLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9C9AB0)
#define BPCBOEACMLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9C9D40)
#define BPCBOEACMLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9CA250)
#define BPCBOEACMLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9CA2A0)
#define BPCBOEACMLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9CA080)
#define BPCBOEACMLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9C9CE0)
#define BPCBOEACMLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9C9E70)
#define BPCBOEACMLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9CA110)
#define BPCBOEACMLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9C9A30)

inline static constexpr unsigned int BPCBOEACMLA_TypeDefinitionIndex = 11081;

	class BPCBOEACMLA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BPCBOEACMLA")->GetStaticField(0x38C90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BPCBOEACMLA")->GetStaticField(0x38C98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageWaveRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageWaveRow*>**)UnitySDK::FromName("", "BPCBOEACMLA")->GetStaticField(0x38CA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BPCBOEACMLA")->GetStaticField(0xB710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BPCBOEACMLA")->GetStaticField(0xB711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageWaveRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageWaveRow*>*(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageWaveRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageWaveRow*>(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingStageWaveRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChenLingStageWaveRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCBOEACMLA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCBOEACMLA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BPCBOEACMLA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBOEACMLA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BPCBOEACMLA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingStageWaveRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingStageWaveRow*))((::PBYTE)hIl2Cpp + BPCBOEACMLA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
