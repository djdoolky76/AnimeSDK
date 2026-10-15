#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DEIMJPPODHL;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKOHGBCOMFB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE00500)
#define FKOHGBCOMFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE00A80)
#define FKOHGBCOMFB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE00670)
#define FKOHGBCOMFB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDFFFB0)
#define FKOHGBCOMFB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE00240)
#define FKOHGBCOMFB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE00710)
#define FKOHGBCOMFB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE00760)
#define FKOHGBCOMFB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE00540)
#define FKOHGBCOMFB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE001E0)
#define FKOHGBCOMFB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE003B0)
#define FKOHGBCOMFB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE005D0)
#define FKOHGBCOMFB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDFFF30)

inline static constexpr unsigned int FKOHGBCOMFB_TypeDefinitionIndex = 11543;

	class FKOHGBCOMFB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FKOHGBCOMFB")->GetStaticField(0x14590);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DEIMJPPODHL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DEIMJPPODHL*>**)UnitySDK::FromName("", "FKOHGBCOMFB")->GetStaticField(0x14598);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FKOHGBCOMFB")->GetStaticField(0x145A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FKOHGBCOMFB")->GetStaticField(0x4D90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FKOHGBCOMFB")->GetStaticField(0x4D91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DEIMJPPODHL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DEIMJPPODHL*>*(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DEIMJPPODHL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DEIMJPPODHL*>(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_FPHGMAMDFHE_OFFSET))();
		}

		static ::DEIMJPPODHL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::DEIMJPPODHL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKOHGBCOMFB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOHGBCOMFB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKOHGBCOMFB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOHGBCOMFB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FKOHGBCOMFB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DEIMJPPODHL* a1)
		{
			return ((::System::Void(*)(::DEIMJPPODHL*))((::PBYTE)hIl2Cpp + FKOHGBCOMFB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
