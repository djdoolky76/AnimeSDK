#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingConditionType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingConditionDescRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLMMOAFIBBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E806860)
#define DLMMOAFIBBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E806E30)
#define DLMMOAFIBBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E8069D0)
#define DLMMOAFIBBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E8062D0)
#define DLMMOAFIBBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E806560)
#define DLMMOAFIBBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E806A70)
#define DLMMOAFIBBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E806AC0)
#define DLMMOAFIBBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E8068A0)
#define DLMMOAFIBBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E806500)
#define DLMMOAFIBBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E8066D0)
#define DLMMOAFIBBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E806930)
#define DLMMOAFIBBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E806250)

inline static constexpr unsigned int DLMMOAFIBBF_TypeDefinitionIndex = 11049;

	class DLMMOAFIBBF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DLMMOAFIBBF")->GetStaticField(0x3F680);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DLMMOAFIBBF")->GetStaticField(0x3F688);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>**)UnitySDK::FromName("", "DLMMOAFIBBF")->GetStaticField(0x3F690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DLMMOAFIBBF")->GetStaticField(0xCB70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DLMMOAFIBBF")->GetStaticField(0xCB71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>*(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingConditionDescRow* LMBKNCAIDLC(::RPG::GameCore::ChenLingConditionType a1)
		{
			return ((::RPG::GameCore::ChenLingConditionDescRow*(*)(::RPG::GameCore::ChenLingConditionType))((::PBYTE)hIl2Cpp + DLMMOAFIBBF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLMMOAFIBBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DLMMOAFIBBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLMMOAFIBBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DLMMOAFIBBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingConditionDescRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingConditionDescRow*))((::PBYTE)hIl2Cpp + DLMMOAFIBBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
