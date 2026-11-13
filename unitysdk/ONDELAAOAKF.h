#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONDELAAOAKF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA19A70)
#define ONDELAAOAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA19FF0)
#define ONDELAAOAKF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA19BE0)
#define ONDELAAOAKF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA19500)
#define ONDELAAOAKF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA19790)
#define ONDELAAOAKF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA19C80)
#define ONDELAAOAKF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA19CD0)
#define ONDELAAOAKF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA19AB0)
#define ONDELAAOAKF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA19730)
#define ONDELAAOAKF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA19900)
#define ONDELAAOAKF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA19B40)
#define ONDELAAOAKF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA19480)

inline static constexpr unsigned int ONDELAAOAKF_TypeDefinitionIndex = 14711;

	class ONDELAAOAKF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>**)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x58E40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x58E48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x58E50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x12F20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x12F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PossessionConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::PossessionConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONDELAAOAKF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PossessionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
