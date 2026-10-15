#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LODDLFHPMOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D11FDF0)
#define LODDLFHPMOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1203C0)
#define LODDLFHPMOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D11FF60)
#define LODDLFHPMOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D11F860)
#define LODDLFHPMOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D11FAF0)
#define LODDLFHPMOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D120000)
#define LODDLFHPMOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D120050)
#define LODDLFHPMOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D11FE30)
#define LODDLFHPMOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D11FA90)
#define LODDLFHPMOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D11FC60)
#define LODDLFHPMOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D11FEC0)
#define LODDLFHPMOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D11F7E0)

inline static constexpr unsigned int LODDLFHPMOH_TypeDefinitionIndex = 13723;

	class LODDLFHPMOH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LODDLFHPMOH")->GetStaticField(0x458A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>**)UnitySDK::FromName("", "LODDLFHPMOH")->GetStaticField(0x458A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LODDLFHPMOH")->GetStaticField(0x458B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LODDLFHPMOH")->GetStaticField(0x10A70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LODDLFHPMOH")->GetStaticField(0x10A71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>*(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialConditionRow*>(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LODDLFHPMOH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODDLFHPMOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LODDLFHPMOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LODDLFHPMOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LODDLFHPMOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialConditionRow*))((::PBYTE)hIl2Cpp + LODDLFHPMOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
