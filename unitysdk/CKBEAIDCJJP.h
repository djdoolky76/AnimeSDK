#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKBEAIDCJJP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC1D7A0)
#define CKBEAIDCJJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC1DD20)
#define CKBEAIDCJJP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC1D910)
#define CKBEAIDCJJP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC1D290)
#define CKBEAIDCJJP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC1D520)
#define CKBEAIDCJJP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC1D9B0)
#define CKBEAIDCJJP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC1DA00)
#define CKBEAIDCJJP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC1D7E0)
#define CKBEAIDCJJP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC1D4C0)
#define CKBEAIDCJJP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC1D650)
#define CKBEAIDCJJP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC1D870)
#define CKBEAIDCJJP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC1D210)

	class CKBEAIDCJJP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x43220);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>**)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x43228);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x43230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x102B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x102B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>*(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCupRow*))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
