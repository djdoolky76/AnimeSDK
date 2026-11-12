#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class ABNJPNLFKLN;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNDNOJMKJLJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF18C00)
#define DNDNOJMKJLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF191D0)
#define DNDNOJMKJLJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF18D70)
#define DNDNOJMKJLJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF18670)
#define DNDNOJMKJLJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF18900)
#define DNDNOJMKJLJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF18E10)
#define DNDNOJMKJLJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF18E60)
#define DNDNOJMKJLJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF18C40)
#define DNDNOJMKJLJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF188A0)
#define DNDNOJMKJLJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF18A70)
#define DNDNOJMKJLJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF18CD0)
#define DNDNOJMKJLJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF185F0)

inline static constexpr unsigned int DNDNOJMKJLJ_TypeDefinitionIndex = 12030;

	class DNDNOJMKJLJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ABNJPNLFKLN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ABNJPNLFKLN*>**)UnitySDK::FromName("", "DNDNOJMKJLJ")->GetStaticField(0x31AB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DNDNOJMKJLJ")->GetStaticField(0x31AB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DNDNOJMKJLJ")->GetStaticField(0x31AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DNDNOJMKJLJ")->GetStaticField(0xA800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DNDNOJMKJLJ")->GetStaticField(0xA801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ABNJPNLFKLN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ABNJPNLFKLN*>*(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ABNJPNLFKLN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ABNJPNLFKLN*>(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::ABNJPNLFKLN* LMBKNCAIDLC(::RPG::GameCore::MechCraftTraitType a1)
		{
			return ((::ABNJPNLFKLN*(*)(::RPG::GameCore::MechCraftTraitType))((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ABNJPNLFKLN* a1)
		{
			return ((::System::Void(*)(::ABNJPNLFKLN*))((::PBYTE)hIl2Cpp + DNDNOJMKJLJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
