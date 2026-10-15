#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCSubStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJBDKGICDMI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC18F10)
#define CJBDKGICDMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC194E0)
#define CJBDKGICDMI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC19080)
#define CJBDKGICDMI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC18980)
#define CJBDKGICDMI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC18C10)
#define CJBDKGICDMI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC19120)
#define CJBDKGICDMI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC19170)
#define CJBDKGICDMI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC18F50)
#define CJBDKGICDMI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC18BB0)
#define CJBDKGICDMI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC18D80)
#define CJBDKGICDMI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC18FE0)
#define CJBDKGICDMI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC18900)

inline static constexpr unsigned int CJBDKGICDMI_TypeDefinitionIndex = 14800;

	class CJBDKGICDMI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CJBDKGICDMI")->GetStaticField(0x43110);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CJBDKGICDMI")->GetStaticField(0x43118);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>**)UnitySDK::FromName("", "CJBDKGICDMI")->GetStaticField(0x43120);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CJBDKGICDMI")->GetStaticField(0x10270);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CJBDKGICDMI")->GetStaticField(0x10271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>*(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryRow*>(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCSubStoryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCSubStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CJBDKGICDMI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBDKGICDMI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CJBDKGICDMI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJBDKGICDMI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CJBDKGICDMI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCSubStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCSubStoryRow*))((::PBYTE)hIl2Cpp + CJBDKGICDMI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
