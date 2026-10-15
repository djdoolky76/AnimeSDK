#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersGuestRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFHBFHCINBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D026580)
#define JFHBFHCINBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D026B50)
#define JFHBFHCINBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0266F0)
#define JFHBFHCINBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D025FF0)
#define JFHBFHCINBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D026280)
#define JFHBFHCINBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D026790)
#define JFHBFHCINBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0267E0)
#define JFHBFHCINBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0265C0)
#define JFHBFHCINBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D026220)
#define JFHBFHCINBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0263F0)
#define JFHBFHCINBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D026650)
#define JFHBFHCINBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D025F70)

	class JFHBFHCINBK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x2D6E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>**)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x2D6E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x2D6F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x9410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x9411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>*(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersGuestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersGuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JFHBFHCINBK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHBFHCINBK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JFHBFHCINBK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFHBFHCINBK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JFHBFHCINBK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersGuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersGuestRow*))((::PBYTE)hIl2Cpp + JFHBFHCINBK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
