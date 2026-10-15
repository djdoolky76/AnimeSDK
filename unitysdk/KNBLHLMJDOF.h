#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersCommentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNBLHLMJDOF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0B5E50)
#define KNBLHLMJDOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0B6420)
#define KNBLHLMJDOF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0B5FC0)
#define KNBLHLMJDOF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0B58C0)
#define KNBLHLMJDOF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0B5B50)
#define KNBLHLMJDOF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0B6060)
#define KNBLHLMJDOF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0B60B0)
#define KNBLHLMJDOF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0B5E90)
#define KNBLHLMJDOF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0B5AF0)
#define KNBLHLMJDOF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0B5CC0)
#define KNBLHLMJDOF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0B5F20)
#define KNBLHLMJDOF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0B5840)

	class KNBLHLMJDOF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersCommentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersCommentRow*>**)UnitySDK::FromName("", "KNBLHLMJDOF")->GetStaticField(0x38290);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KNBLHLMJDOF")->GetStaticField(0x38298);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KNBLHLMJDOF")->GetStaticField(0x382A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KNBLHLMJDOF")->GetStaticField(0xBFC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KNBLHLMJDOF")->GetStaticField(0xBFC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersCommentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersCommentRow*>*(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersCommentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersCommentRow*>(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersCommentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersCommentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KNBLHLMJDOF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBLHLMJDOF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KNBLHLMJDOF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KNBLHLMJDOF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KNBLHLMJDOF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersCommentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersCommentRow*))((::PBYTE)hIl2Cpp + KNBLHLMJDOF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
