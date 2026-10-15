#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNGAEPHCADA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE0A70)
#define FNGAEPHCADA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1040)
#define FNGAEPHCADA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE0BE0)
#define FNGAEPHCADA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE04E0)
#define FNGAEPHCADA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE0770)
#define FNGAEPHCADA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE0C80)
#define FNGAEPHCADA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE0CD0)
#define FNGAEPHCADA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE0AB0)
#define FNGAEPHCADA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE0710)
#define FNGAEPHCADA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE08E0)
#define FNGAEPHCADA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE0B40)
#define FNGAEPHCADA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE0460)

inline static constexpr unsigned int FNGAEPHCADA_TypeDefinitionIndex = 13020;

	class FNGAEPHCADA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNGAEPHCADA")->GetStaticField(0x13250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNGAEPHCADA")->GetStaticField(0x13258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDisplayRow*>**)UnitySDK::FromName("", "FNGAEPHCADA")->GetStaticField(0x13260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNGAEPHCADA")->GetStaticField(0x3E30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNGAEPHCADA")->GetStaticField(0x3E31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDisplayRow*>(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNGAEPHCADA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNGAEPHCADA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNGAEPHCADA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGAEPHCADA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNGAEPHCADA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDisplayRow*))((::PBYTE)hIl2Cpp + FNGAEPHCADA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
