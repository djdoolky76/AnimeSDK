#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextDanmuContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBJPNDMGIIO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC65B0)
#define BBJPNDMGIIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC7190)
#define BBJPNDMGIIO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC6950)
#define BBJPNDMGIIO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC65F0)
#define BBJPNDMGIIO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC6E90)
#define BBJPNDMGIIO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC69F0)
#define BBJPNDMGIIO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC6A40)
#define BBJPNDMGIIO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC6820)
#define BBJPNDMGIIO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC6E30)
#define BBJPNDMGIIO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC7000)
#define BBJPNDMGIIO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC68B0)
#define BBJPNDMGIIO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC6DB0)

inline static constexpr unsigned int BBJPNDMGIIO_TypeDefinitionIndex = 15195;

	class BBJPNDMGIIO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BBJPNDMGIIO")->GetStaticField(0x437D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>**)UnitySDK::FromName("", "BBJPNDMGIIO")->GetStaticField(0x437D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BBJPNDMGIIO")->GetStaticField(0x437E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBJPNDMGIIO")->GetStaticField(0x10000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BBJPNDMGIIO")->GetStaticField(0x10001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BBJPNDMGIIO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBJPNDMGIIO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BBJPNDMGIIO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TextDanmuContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextDanmuContentRow*))((::PBYTE)hIl2Cpp + BBJPNDMGIIO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>*(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextDanmuContentRow*>(*)())((::PBYTE)hIl2Cpp + BBJPNDMGIIO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TextDanmuContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TextDanmuContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BBJPNDMGIIO_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
