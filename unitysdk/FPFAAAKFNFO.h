#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitAstropolisConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPFAAAKFNFO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFF4D30)
#define FPFAAAKFNFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5300)
#define FPFAAAKFNFO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFF4EA0)
#define FPFAAAKFNFO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFF47A0)
#define FPFAAAKFNFO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFF4A30)
#define FPFAAAKFNFO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFF4F40)
#define FPFAAAKFNFO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFF4F90)
#define FPFAAAKFNFO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFF4D70)
#define FPFAAAKFNFO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFF49D0)
#define FPFAAAKFNFO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFF4BA0)
#define FPFAAAKFNFO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFF4E00)
#define FPFAAAKFNFO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFF4720)

inline static constexpr unsigned int FPFAAAKFNFO_TypeDefinitionIndex = 13848;

	class FPFAAAKFNFO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*>**)UnitySDK::FromName("", "FPFAAAKFNFO")->GetStaticField(0xBBE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FPFAAAKFNFO")->GetStaticField(0xBBE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FPFAAAKFNFO")->GetStaticField(0xBBF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FPFAAAKFNFO")->GetStaticField(0x1520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FPFAAAKFNFO")->GetStaticField(0x1521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*>(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitAstropolisConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitAstropolisConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FPFAAAKFNFO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPFAAAKFNFO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FPFAAAKFNFO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPFAAAKFNFO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FPFAAAKFNFO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitAstropolisConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitAstropolisConfigRow*))((::PBYTE)hIl2Cpp + FPFAAAKFNFO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
