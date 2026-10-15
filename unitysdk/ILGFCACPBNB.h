#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleGravityBallRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILGFCACPBNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF206A0)
#define ILGFCACPBNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF20C70)
#define ILGFCACPBNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF20810)
#define ILGFCACPBNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF20110)
#define ILGFCACPBNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF203A0)
#define ILGFCACPBNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF208B0)
#define ILGFCACPBNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF20900)
#define ILGFCACPBNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF206E0)
#define ILGFCACPBNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF20340)
#define ILGFCACPBNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF20510)
#define ILGFCACPBNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF20770)
#define ILGFCACPBNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF20090)

	class ILGFCACPBNB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleGravityBallRow*>**)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x243C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x243C8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x243D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x7F70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ILGFCACPBNB")->GetStaticField(0x7F71);
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
