#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnExtraHcoinRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKBFDNNACNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEEC520)
#define IKBFDNNACNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEECAF0)
#define IKBFDNNACNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEEC690)
#define IKBFDNNACNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEEBF90)
#define IKBFDNNACNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEEC220)
#define IKBFDNNACNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEEC730)
#define IKBFDNNACNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEEC780)
#define IKBFDNNACNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEEC560)
#define IKBFDNNACNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEEC1C0)
#define IKBFDNNACNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEEC390)
#define IKBFDNNACNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEEC5F0)
#define IKBFDNNACNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEEBF10)

inline static constexpr unsigned int IKBFDNNACNB_TypeDefinitionIndex = 14521;

	class IKBFDNNACNB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IKBFDNNACNB")->GetStaticField(0x23300);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IKBFDNNACNB")->GetStaticField(0x23308);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnExtraHcoinRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnExtraHcoinRow*>**)UnitySDK::FromName("", "IKBFDNNACNB")->GetStaticField(0x23310);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IKBFDNNACNB")->GetStaticField(0x79E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IKBFDNNACNB")->GetStaticField(0x79E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnExtraHcoinRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnExtraHcoinRow*>*(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnExtraHcoinRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnExtraHcoinRow*>(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnExtraHcoinRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnExtraHcoinRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IKBFDNNACNB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKBFDNNACNB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IKBFDNNACNB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKBFDNNACNB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IKBFDNNACNB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnExtraHcoinRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnExtraHcoinRow*))((::PBYTE)hIl2Cpp + IKBFDNNACNB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
