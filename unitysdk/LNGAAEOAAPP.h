#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCommonDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNGAAEOAAPP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EDAA0)
#define LNGAAEOAAPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EE070)
#define LNGAAEOAAPP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EDC10)
#define LNGAAEOAAPP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0ED510)
#define LNGAAEOAAPP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0ED7A0)
#define LNGAAEOAAPP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EDCB0)
#define LNGAAEOAAPP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EDD00)
#define LNGAAEOAAPP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EDAE0)
#define LNGAAEOAAPP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0ED740)
#define LNGAAEOAAPP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0ED910)
#define LNGAAEOAAPP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EDB70)
#define LNGAAEOAAPP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0ED490)

inline static constexpr unsigned int LNGAAEOAAPP_TypeDefinitionIndex = 14696;

	class LNGAAEOAAPP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNGAAEOAAPP")->GetStaticField(0x3EF40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LNGAAEOAAPP")->GetStaticField(0x3EF48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>**)UnitySDK::FromName("", "LNGAAEOAAPP")->GetStaticField(0x3EF50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNGAAEOAAPP")->GetStaticField(0xED50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNGAAEOAAPP")->GetStaticField(0xED51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueCommonDialogueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueCommonDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNGAAEOAAPP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGAAEOAAPP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNGAAEOAAPP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNGAAEOAAPP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNGAAEOAAPP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueCommonDialogueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCommonDialogueRow*))((::PBYTE)hIl2Cpp + LNGAAEOAAPP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
