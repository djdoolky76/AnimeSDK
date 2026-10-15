#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveNodeTypeDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKACBDKEDIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD94050)
#define EKACBDKEDIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD94620)
#define EKACBDKEDIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD941C0)
#define EKACBDKEDIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD93AC0)
#define EKACBDKEDIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD93D50)
#define EKACBDKEDIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD94260)
#define EKACBDKEDIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD942B0)
#define EKACBDKEDIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD94090)
#define EKACBDKEDIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD93CF0)
#define EKACBDKEDIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD93EC0)
#define EKACBDKEDIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD94120)
#define EKACBDKEDIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD93A40)

inline static constexpr unsigned int EKACBDKEDIA_TypeDefinitionIndex = 11702;

	class EKACBDKEDIA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x1DE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x1DE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>**)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x1DF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x1C90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x1C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>*(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveNodeTypeDataRow* LMBKNCAIDLC(::RPG::GameCore::IdleLiveNodeType a1)
		{
			return ((::RPG::GameCore::IdleLiveNodeTypeDataRow*(*)(::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + EKACBDKEDIA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKACBDKEDIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EKACBDKEDIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKACBDKEDIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EKACBDKEDIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveNodeTypeDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveNodeTypeDataRow*))((::PBYTE)hIl2Cpp + EKACBDKEDIA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
