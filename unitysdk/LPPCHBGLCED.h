#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEffectProgressRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPPCHBGLCED_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D100130)
#define LPPCHBGLCED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D100700)
#define LPPCHBGLCED_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1002A0)
#define LPPCHBGLCED_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FFBA0)
#define LPPCHBGLCED_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FFE30)
#define LPPCHBGLCED_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D100340)
#define LPPCHBGLCED_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D100390)
#define LPPCHBGLCED_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D100170)
#define LPPCHBGLCED_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FFDD0)
#define LPPCHBGLCED_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FFFA0)
#define LPPCHBGLCED_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D100200)
#define LPPCHBGLCED_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FFB20)

inline static constexpr unsigned int LPPCHBGLCED_TypeDefinitionIndex = 11038;

	class LPPCHBGLCED : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectProgressRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectProgressRow*>**)UnitySDK::FromName("", "LPPCHBGLCED")->GetStaticField(0x3FED0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LPPCHBGLCED")->GetStaticField(0x3FED8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPPCHBGLCED")->GetStaticField(0x3FEE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPPCHBGLCED")->GetStaticField(0xF200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPPCHBGLCED")->GetStaticField(0xF201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectProgressRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectProgressRow*>*(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectProgressRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectProgressRow*>(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEffectProgressRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingEffectProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPPCHBGLCED_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPCHBGLCED_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPPCHBGLCED_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPPCHBGLCED_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPPCHBGLCED_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEffectProgressRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEffectProgressRow*))((::PBYTE)hIl2Cpp + LPPCHBGLCED_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
