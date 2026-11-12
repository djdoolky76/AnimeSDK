#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIOAJNKBPEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE73020)
#define AIOAJNKBPEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE735A0)
#define AIOAJNKBPEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE73190)
#define AIOAJNKBPEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE72AD0)
#define AIOAJNKBPEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE72D60)
#define AIOAJNKBPEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE73230)
#define AIOAJNKBPEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE73280)
#define AIOAJNKBPEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE73060)
#define AIOAJNKBPEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE72D00)
#define AIOAJNKBPEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE72E90)
#define AIOAJNKBPEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE730F0)
#define AIOAJNKBPEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE72A50)

inline static constexpr unsigned int AIOAJNKBPEE_TypeDefinitionIndex = 13876;

	class AIOAJNKBPEE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x2EA30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>**)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x2EA38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x2EA40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x9BE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x9BE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialDialogueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialDialogueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialDialogueRow*))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
