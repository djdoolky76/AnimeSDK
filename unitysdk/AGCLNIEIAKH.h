#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenInteractionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGCLNIEIAKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCB9C20)
#define AGCLNIEIAKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBA1F0)
#define AGCLNIEIAKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCB9D90)
#define AGCLNIEIAKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCB9690)
#define AGCLNIEIAKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCB9920)
#define AGCLNIEIAKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCB9E30)
#define AGCLNIEIAKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCB9E80)
#define AGCLNIEIAKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCB9C60)
#define AGCLNIEIAKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCB98C0)
#define AGCLNIEIAKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCB9A90)
#define AGCLNIEIAKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCB9CF0)
#define AGCLNIEIAKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCB9610)

inline static constexpr unsigned int AGCLNIEIAKH_TypeDefinitionIndex = 11656;

	class AGCLNIEIAKH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>**)UnitySDK::FromName("", "AGCLNIEIAKH")->GetStaticField(0x37E30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGCLNIEIAKH")->GetStaticField(0x37E38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AGCLNIEIAKH")->GetStaticField(0x37E40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGCLNIEIAKH")->GetStaticField(0xBE60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGCLNIEIAKH")->GetStaticField(0xBE61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>*(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenInteractionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenInteractionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGCLNIEIAKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCLNIEIAKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGCLNIEIAKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGCLNIEIAKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGCLNIEIAKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenInteractionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenInteractionRow*))((::PBYTE)hIl2Cpp + AGCLNIEIAKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
