#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJNFHMGIOLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C8480)
#define PJNFHMGIOLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C8A50)
#define PJNFHMGIOLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C85F0)
#define PJNFHMGIOLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C7EF0)
#define PJNFHMGIOLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C8180)
#define PJNFHMGIOLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C8690)
#define PJNFHMGIOLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C86E0)
#define PJNFHMGIOLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C84C0)
#define PJNFHMGIOLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C8120)
#define PJNFHMGIOLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C82F0)
#define PJNFHMGIOLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C8550)
#define PJNFHMGIOLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C7E70)

inline static constexpr unsigned int PJNFHMGIOLN_TypeDefinitionIndex = 13202;

	class PJNFHMGIOLN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersConfigRow*>**)UnitySDK::FromName("", "PJNFHMGIOLN")->GetStaticField(0x50F90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PJNFHMGIOLN")->GetStaticField(0x50F98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PJNFHMGIOLN")->GetStaticField(0x50FA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJNFHMGIOLN")->GetStaticField(0x12390);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PJNFHMGIOLN")->GetStaticField(0x12391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersConfigRow*>(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PJNFHMGIOLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJNFHMGIOLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PJNFHMGIOLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJNFHMGIOLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PJNFHMGIOLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersConfigRow*))((::PBYTE)hIl2Cpp + PJNFHMGIOLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
