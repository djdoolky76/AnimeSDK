#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelCoreflameVesselLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBAANLAENGC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9D6570)
#define HBAANLAENGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6B30)
#define HBAANLAENGC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9D66E0)
#define HBAANLAENGC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9D6010)
#define HBAANLAENGC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9D62A0)
#define HBAANLAENGC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9D6780)
#define HBAANLAENGC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9D67D0)
#define HBAANLAENGC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9D65B0)
#define HBAANLAENGC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9D6240)
#define HBAANLAENGC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9D63D0)
#define HBAANLAENGC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9D6640)
#define HBAANLAENGC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9D5F90)

inline static constexpr unsigned int HBAANLAENGC_TypeDefinitionIndex = 11134;

	class HBAANLAENGC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*>**)UnitySDK::FromName("", "HBAANLAENGC")->GetStaticField(0x138E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HBAANLAENGC")->GetStaticField(0x138E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBAANLAENGC")->GetStaticField(0x138F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBAANLAENGC")->GetStaticField(0x45D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBAANLAENGC")->GetStaticField(0x45D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*>*(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*>(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HBAANLAENGC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBAANLAENGC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBAANLAENGC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBAANLAENGC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBAANLAENGC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*))((::PBYTE)hIl2Cpp + HBAANLAENGC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
