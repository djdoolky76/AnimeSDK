#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionRoomIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOOBKMCIKDD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFF1670)
#define FOOBKMCIKDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF1C40)
#define FOOBKMCIKDD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFF17E0)
#define FOOBKMCIKDD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFF10E0)
#define FOOBKMCIKDD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFF1370)
#define FOOBKMCIKDD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFF1880)
#define FOOBKMCIKDD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFF18D0)
#define FOOBKMCIKDD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFF16B0)
#define FOOBKMCIKDD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFF1310)
#define FOOBKMCIKDD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFF14E0)
#define FOOBKMCIKDD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFF1740)
#define FOOBKMCIKDD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFF1060)

inline static constexpr unsigned int FOOBKMCIKDD_TypeDefinitionIndex = 11895;

	class FOOBKMCIKDD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*>**)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0xB920);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0xB928);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0xB930);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x14B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOOBKMCIKDD")->GetStaticField(0x14B1);
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
