#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirBattleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPLDLGGFAEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDED2A0)
#define FPLDLGGFAEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDED870)
#define FPLDLGGFAEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDED410)
#define FPLDLGGFAEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDECD10)
#define FPLDLGGFAEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDECFA0)
#define FPLDLGGFAEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDED4B0)
#define FPLDLGGFAEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDED500)
#define FPLDLGGFAEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDED2E0)
#define FPLDLGGFAEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDECF40)
#define FPLDLGGFAEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDED110)
#define FPLDLGGFAEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDED370)
#define FPLDLGGFAEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDECC90)

inline static constexpr unsigned int FPLDLGGFAEI_TypeDefinitionIndex = 12144;

	class FPLDLGGFAEI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FPLDLGGFAEI")->GetStaticField(0x13980);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirBattleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirBattleRow*>**)UnitySDK::FromName("", "FPLDLGGFAEI")->GetStaticField(0x13988);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FPLDLGGFAEI")->GetStaticField(0x13990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FPLDLGGFAEI")->GetStaticField(0x4090);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FPLDLGGFAEI")->GetStaticField(0x4091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirBattleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirBattleRow*>*(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirBattleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirBattleRow*>(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirBattleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirBattleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FPLDLGGFAEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLDLGGFAEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FPLDLGGFAEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPLDLGGFAEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FPLDLGGFAEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirBattleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirBattleRow*))((::PBYTE)hIl2Cpp + FPLDLGGFAEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
