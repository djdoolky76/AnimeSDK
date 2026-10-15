#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCardPackRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENCNIHCJIDJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD7C190)
#define ENCNIHCJIDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7CD70)
#define ENCNIHCJIDJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD7C530)
#define ENCNIHCJIDJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD7C1D0)
#define ENCNIHCJIDJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD7CA70)
#define ENCNIHCJIDJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD7C5D0)
#define ENCNIHCJIDJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7C620)
#define ENCNIHCJIDJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD7C400)
#define ENCNIHCJIDJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD7CA10)
#define ENCNIHCJIDJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD7CBE0)
#define ENCNIHCJIDJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD7C490)
#define ENCNIHCJIDJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD7C990)

inline static constexpr unsigned int ENCNIHCJIDJ_TypeDefinitionIndex = 15251;

	class ENCNIHCJIDJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ENCNIHCJIDJ")->GetStaticField(0xB290);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPackRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPackRow*>**)UnitySDK::FromName("", "ENCNIHCJIDJ")->GetStaticField(0xB298);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ENCNIHCJIDJ")->GetStaticField(0xB2A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ENCNIHCJIDJ")->GetStaticField(0x2640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ENCNIHCJIDJ")->GetStaticField(0x2641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookCardPackRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookCardPackRow*))((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPackRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPackRow*>*(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPackRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPackRow*>(*)())((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookCardPackRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookCardPackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ENCNIHCJIDJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
