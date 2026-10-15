#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class GGLPKOIOBFP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIEGEPBKMDN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE4EA70)
#define GIEGEPBKMDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE4F040)
#define GIEGEPBKMDN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE4EBE0)
#define GIEGEPBKMDN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE4E4E0)
#define GIEGEPBKMDN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE4E770)
#define GIEGEPBKMDN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE4EC80)
#define GIEGEPBKMDN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE4ECD0)
#define GIEGEPBKMDN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE4EAB0)
#define GIEGEPBKMDN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE4E710)
#define GIEGEPBKMDN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE4E8E0)
#define GIEGEPBKMDN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE4EB40)
#define GIEGEPBKMDN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE4E460)

inline static constexpr unsigned int GIEGEPBKMDN_TypeDefinitionIndex = 14437;

	class GIEGEPBKMDN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GGLPKOIOBFP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GGLPKOIOBFP*>**)UnitySDK::FromName("", "GIEGEPBKMDN")->GetStaticField(0x17A90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIEGEPBKMDN")->GetStaticField(0x17A98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GIEGEPBKMDN")->GetStaticField(0x17AA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIEGEPBKMDN")->GetStaticField(0x5860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIEGEPBKMDN")->GetStaticField(0x5861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GGLPKOIOBFP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GGLPKOIOBFP*>*(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GGLPKOIOBFP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GGLPKOIOBFP*>(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_FPHGMAMDFHE_OFFSET))();
		}

		static ::GGLPKOIOBFP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::GGLPKOIOBFP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIEGEPBKMDN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIEGEPBKMDN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIEGEPBKMDN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIEGEPBKMDN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIEGEPBKMDN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::GGLPKOIOBFP* a1)
		{
			return ((::System::Void(*)(::GGLPKOIOBFP*))((::PBYTE)hIl2Cpp + GIEGEPBKMDN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
