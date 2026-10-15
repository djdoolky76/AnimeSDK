#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageLevelValueConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPJEHJMGGJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D31BC60)
#define PPJEHJMGGJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D31C230)
#define PPJEHJMGGJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D31BDD0)
#define PPJEHJMGGJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D31B6D0)
#define PPJEHJMGGJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D31B960)
#define PPJEHJMGGJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D31BE70)
#define PPJEHJMGGJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D31BEC0)
#define PPJEHJMGGJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D31BCA0)
#define PPJEHJMGGJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D31B900)
#define PPJEHJMGGJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D31BAD0)
#define PPJEHJMGGJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D31BD30)
#define PPJEHJMGGJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D31B650)

	class PPJEHJMGGJO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>**)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x47670);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x47678);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x47680);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x10FE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x10FE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightStageLevelValueConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightStageLevelValueConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPJEHJMGGJO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJEHJMGGJO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPJEHJMGGJO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPJEHJMGGJO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPJEHJMGGJO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightStageLevelValueConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightStageLevelValueConfigRow*))((::PBYTE)hIl2Cpp + PPJEHJMGGJO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
