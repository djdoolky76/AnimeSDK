#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FELFHPGLFGC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAMFKBDLOJM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C2E70)
#define PAMFKBDLOJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C3470)
#define PAMFKBDLOJM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C2FE0)
#define PAMFKBDLOJM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C2890)
#define PAMFKBDLOJM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C2B20)
#define PAMFKBDLOJM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C3080)
#define PAMFKBDLOJM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C30D0)
#define PAMFKBDLOJM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C2EB0)
#define PAMFKBDLOJM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C2AC0)
#define PAMFKBDLOJM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C2C90)
#define PAMFKBDLOJM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C2F40)
#define PAMFKBDLOJM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C2810)

inline static constexpr unsigned int PAMFKBDLOJM_TypeDefinitionIndex = 14967;

	class PAMFKBDLOJM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PAMFKBDLOJM")->GetStaticField(0x3DCF0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PAMFKBDLOJM")->GetStaticField(0x3DCF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FELFHPGLFGC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FELFHPGLFGC*>**)UnitySDK::FromName("", "PAMFKBDLOJM")->GetStaticField(0x3DD00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PAMFKBDLOJM")->GetStaticField(0xD3C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PAMFKBDLOJM")->GetStaticField(0xD3C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FELFHPGLFGC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FELFHPGLFGC*>*(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FELFHPGLFGC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FELFHPGLFGC*>(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_FPHGMAMDFHE_OFFSET))();
		}

		static ::FELFHPGLFGC* LMBKNCAIDLC(::RPG::GameCore::RogueTournRoomType a1, ::RPG::GameCore::RogueTournMarkType a2)
		{
			return ((::FELFHPGLFGC*(*)(::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + PAMFKBDLOJM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMFKBDLOJM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PAMFKBDLOJM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMFKBDLOJM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PAMFKBDLOJM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FELFHPGLFGC* a1)
		{
			return ((::System::Void(*)(::FELFHPGLFGC*))((::PBYTE)hIl2Cpp + PAMFKBDLOJM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
