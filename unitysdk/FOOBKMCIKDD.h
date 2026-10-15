#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionRoomIconRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOOBKMCIKDD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE17990)
#define FOOBKMCIKDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE17F60)
#define FOOBKMCIKDD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE17B00)
#define FOOBKMCIKDD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE17400)
#define FOOBKMCIKDD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE17690)
#define FOOBKMCIKDD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE17BA0)
#define FOOBKMCIKDD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE17BF0)
#define FOOBKMCIKDD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE179D0)
#define FOOBKMCIKDD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE17630)
#define FOOBKMCIKDD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE17800)
#define FOOBKMCIKDD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE17A60)
#define FOOBKMCIKDD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE17380)

inline static constexpr unsigned int FOOBKMCIKDD_TypeDefinitionIndex = 11838;

	class FOOBKMCIKDD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>**)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x15510);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x15518);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x15520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x5140);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x5141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>*(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestionRoomIconRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestionRoomIconRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOOBKMCIKDD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOBKMCIKDD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOOBKMCIKDD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOOBKMCIKDD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FOOBKMCIKDD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestionRoomIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestionRoomIconRow*))((::PBYTE)hIl2Cpp + FOOBKMCIKDD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
