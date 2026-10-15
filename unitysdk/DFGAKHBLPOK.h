#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFGAKHBLPOK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE8380)
#define DFGAKHBLPOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE8950)
#define DFGAKHBLPOK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE84F0)
#define DFGAKHBLPOK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE7DF0)
#define DFGAKHBLPOK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE8080)
#define DFGAKHBLPOK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE8590)
#define DFGAKHBLPOK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE85E0)
#define DFGAKHBLPOK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE83C0)
#define DFGAKHBLPOK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE8020)
#define DFGAKHBLPOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE81F0)
#define DFGAKHBLPOK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE8450)
#define DFGAKHBLPOK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE7D70)

inline static constexpr unsigned int DFGAKHBLPOK_TypeDefinitionIndex = 12933;

	class DFGAKHBLPOK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFGAKHBLPOK")->GetStaticField(0x450A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFGAKHBLPOK")->GetStaticField(0x450A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>**)UnitySDK::FromName("", "DFGAKHBLPOK")->GetStaticField(0x450B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFGAKHBLPOK")->GetStaticField(0x104B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFGAKHBLPOK")->GetStaticField(0x104B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRow*>(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeDialogueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFGAKHBLPOK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGAKHBLPOK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFGAKHBLPOK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFGAKHBLPOK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFGAKHBLPOK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeDialogueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeDialogueRow*))((::PBYTE)hIl2Cpp + DFGAKHBLPOK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
