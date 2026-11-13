#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OONKKNLPGCF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKJEKIFMGNO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F42AE90)
#define KKJEKIFMGNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F42B410)
#define KKJEKIFMGNO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F42B000)
#define KKJEKIFMGNO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F42A940)
#define KKJEKIFMGNO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F42ABD0)
#define KKJEKIFMGNO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F42B0A0)
#define KKJEKIFMGNO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F42B0F0)
#define KKJEKIFMGNO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F42AED0)
#define KKJEKIFMGNO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F42AB70)
#define KKJEKIFMGNO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F42AD40)
#define KKJEKIFMGNO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F42AF60)
#define KKJEKIFMGNO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F42A8C0)

inline static constexpr unsigned int KKJEKIFMGNO_TypeDefinitionIndex = 12064;

	class KKJEKIFMGNO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OONKKNLPGCF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OONKKNLPGCF*>**)UnitySDK::FromName("", "KKJEKIFMGNO")->GetStaticField(0x36460);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKJEKIFMGNO")->GetStaticField(0x36468);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KKJEKIFMGNO")->GetStaticField(0x36470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKJEKIFMGNO")->GetStaticField(0xA9B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKJEKIFMGNO")->GetStaticField(0xA9B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OONKKNLPGCF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OONKKNLPGCF*>*(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OONKKNLPGCF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OONKKNLPGCF*>(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_FPHGMAMDFHE_OFFSET))();
		}

		static ::OONKKNLPGCF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OONKKNLPGCF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKJEKIFMGNO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJEKIFMGNO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKJEKIFMGNO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKJEKIFMGNO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKJEKIFMGNO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OONKKNLPGCF* a1)
		{
			return ((::System::Void(*)(::OONKKNLPGCF*))((::PBYTE)hIl2Cpp + KKJEKIFMGNO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
