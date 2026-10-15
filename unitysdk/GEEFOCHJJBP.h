#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenInteractPropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEEFOCHJJBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE06660)
#define GEEFOCHJJBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE06C30)
#define GEEFOCHJJBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE067D0)
#define GEEFOCHJJBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE060D0)
#define GEEFOCHJJBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE06360)
#define GEEFOCHJJBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE06870)
#define GEEFOCHJJBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE068C0)
#define GEEFOCHJJBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE066A0)
#define GEEFOCHJJBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE06300)
#define GEEFOCHJJBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE064D0)
#define GEEFOCHJJBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE06730)
#define GEEFOCHJJBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE06050)

inline static constexpr unsigned int GEEFOCHJJBP_TypeDefinitionIndex = 11658;

	class GEEFOCHJJBP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GEEFOCHJJBP")->GetStaticField(0x14D40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractPropRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractPropRow*>**)UnitySDK::FromName("", "GEEFOCHJJBP")->GetStaticField(0x14D48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GEEFOCHJJBP")->GetStaticField(0x14D50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GEEFOCHJJBP")->GetStaticField(0x4710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GEEFOCHJJBP")->GetStaticField(0x4711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractPropRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractPropRow*>*(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractPropRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractPropRow*>(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenInteractPropRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenInteractPropRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEEFOCHJJBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEEFOCHJJBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GEEFOCHJJBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEEFOCHJJBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GEEFOCHJJBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenInteractPropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenInteractPropRow*))((::PBYTE)hIl2Cpp + GEEFOCHJJBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
