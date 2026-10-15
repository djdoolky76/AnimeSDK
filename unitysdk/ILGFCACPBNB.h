#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleGravityBallRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILGFCACPBNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF2660)
#define ILGFCACPBNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF2C30)
#define ILGFCACPBNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF27D0)
#define ILGFCACPBNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF20D0)
#define ILGFCACPBNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF2360)
#define ILGFCACPBNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF2870)
#define ILGFCACPBNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF28C0)
#define ILGFCACPBNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF26A0)
#define ILGFCACPBNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF2300)
#define ILGFCACPBNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF24D0)
#define ILGFCACPBNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF2730)
#define ILGFCACPBNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF2050)

inline static constexpr unsigned int ILGFCACPBNB_TypeDefinitionIndex = 14097;

	class ILGFCACPBNB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>**)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x237B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x237B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x237C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x7B20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x7B21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>*(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleGravityBallRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleGravityBallRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ILGFCACPBNB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGFCACPBNB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ILGFCACPBNB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGFCACPBNB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ILGFCACPBNB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleGravityBallRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleGravityBallRow*))((::PBYTE)hIl2Cpp + ILGFCACPBNB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
