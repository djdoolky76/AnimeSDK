#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersGuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFHBFHCINBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E59E6C0)
#define JFHBFHCINBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59EC90)
#define JFHBFHCINBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E59E830)
#define JFHBFHCINBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E59E130)
#define JFHBFHCINBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E59E3C0)
#define JFHBFHCINBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E59E8D0)
#define JFHBFHCINBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E59E920)
#define JFHBFHCINBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E59E700)
#define JFHBFHCINBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E59E360)
#define JFHBFHCINBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E59E530)
#define JFHBFHCINBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E59E790)
#define JFHBFHCINBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E59E0B0)

inline static constexpr unsigned int JFHBFHCINBK_TypeDefinitionIndex = 13288;

	class JFHBFHCINBK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGuestRow*>**)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x34240);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x34248);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0x34250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0xA200);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JFHBFHCINBK")->GetStaticField(0xA201);
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
