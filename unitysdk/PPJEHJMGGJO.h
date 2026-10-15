#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageLevelValueConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPJEHJMGGJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2EE190)
#define PPJEHJMGGJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EE760)
#define PPJEHJMGGJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2EE300)
#define PPJEHJMGGJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2EDC00)
#define PPJEHJMGGJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2EDE90)
#define PPJEHJMGGJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2EE3A0)
#define PPJEHJMGGJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2EE3F0)
#define PPJEHJMGGJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2EE1D0)
#define PPJEHJMGGJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2EDE30)
#define PPJEHJMGGJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2EE000)
#define PPJEHJMGGJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2EE260)
#define PPJEHJMGGJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2EDB80)

inline static constexpr unsigned int PPJEHJMGGJO_TypeDefinitionIndex = 13624;

	class PPJEHJMGGJO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x52A60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x52A68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageLevelValueConfigRow*>**)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x52A70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x128F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPJEHJMGGJO")->GetStaticField(0x128F1);
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
