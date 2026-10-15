#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityStarFightGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLLFNHOFLHD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD8640)
#define FLLFNHOFLHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD8BC0)
#define FLLFNHOFLHD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD87B0)
#define FLLFNHOFLHD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD8130)
#define FLLFNHOFLHD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD83C0)
#define FLLFNHOFLHD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD8850)
#define FLLFNHOFLHD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD88A0)
#define FLLFNHOFLHD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD8680)
#define FLLFNHOFLHD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD8360)
#define FLLFNHOFLHD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD84F0)
#define FLLFNHOFLHD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD8710)
#define FLLFNHOFLHD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD80B0)

inline static constexpr unsigned int FLLFNHOFLHD_TypeDefinitionIndex = 12393;

	class FLLFNHOFLHD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FLLFNHOFLHD")->GetStaticField(0x12BE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLLFNHOFLHD")->GetStaticField(0x12BE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightGroupRow*>**)UnitySDK::FromName("", "FLLFNHOFLHD")->GetStaticField(0x12BF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLLFNHOFLHD")->GetStaticField(0x3D60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLLFNHOFLHD")->GetStaticField(0x3D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightGroupRow*>*(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightGroupRow*>(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityStarFightGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityStarFightGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLLFNHOFLHD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLFNHOFLHD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLLFNHOFLHD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLLFNHOFLHD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLLFNHOFLHD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityStarFightGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityStarFightGroupRow*))((::PBYTE)hIl2Cpp + FLLFNHOFLHD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
