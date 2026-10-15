#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBBIIGJGCOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAEB90)
#define IBBIIGJGCOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAF110)
#define IBBIIGJGCOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAED00)
#define IBBIIGJGCOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAE640)
#define IBBIIGJGCOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAE8D0)
#define IBBIIGJGCOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAEDA0)
#define IBBIIGJGCOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAEDF0)
#define IBBIIGJGCOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAEBD0)
#define IBBIIGJGCOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAE870)
#define IBBIIGJGCOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAEA00)
#define IBBIIGJGCOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAEC60)
#define IBBIIGJGCOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAE5C0)

inline static constexpr unsigned int IBBIIGJGCOM_TypeDefinitionIndex = 11002;

	class IBBIIGJGCOM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IBBIIGJGCOM")->GetStaticField(0x1EFD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceBattleItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceBattleItemRow*>**)UnitySDK::FromName("", "IBBIIGJGCOM")->GetStaticField(0x1EFD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IBBIIGJGCOM")->GetStaticField(0x1EFE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBBIIGJGCOM")->GetStaticField(0x6FE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IBBIIGJGCOM")->GetStaticField(0x6FE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceBattleItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceBattleItemRow*>*(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceBattleItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceBattleItemRow*>(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceBattleItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceBattleItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IBBIIGJGCOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBBIIGJGCOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBBIIGJGCOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBBIIGJGCOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IBBIIGJGCOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceBattleItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceBattleItemRow*))((::PBYTE)hIl2Cpp + IBBIIGJGCOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
