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

#define EKACBDKEDIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF66E60)
#define EKACBDKEDIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF67430)
#define EKACBDKEDIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF66FD0)
#define EKACBDKEDIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF668D0)
#define EKACBDKEDIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF66B60)
#define EKACBDKEDIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF67070)
#define EKACBDKEDIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF670C0)
#define EKACBDKEDIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF66EA0)
#define EKACBDKEDIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF66B00)
#define EKACBDKEDIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF66CD0)
#define EKACBDKEDIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF66F30)
#define EKACBDKEDIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF66850)

inline static constexpr unsigned int EKACBDKEDIA_TypeDefinitionIndex = 11759;

	class EKACBDKEDIA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x38690);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x38698);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>**)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0x386A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0xC3A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKACBDKEDIA")->GetStaticField(0xC3A1);
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
