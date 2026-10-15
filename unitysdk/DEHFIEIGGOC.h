#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IMCMDHDALIB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEHFIEIGGOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE3510)
#define DEHFIEIGGOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE3AE0)
#define DEHFIEIGGOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE3680)
#define DEHFIEIGGOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE2F80)
#define DEHFIEIGGOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE3210)
#define DEHFIEIGGOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE3720)
#define DEHFIEIGGOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE3770)
#define DEHFIEIGGOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE3550)
#define DEHFIEIGGOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE31B0)
#define DEHFIEIGGOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE3380)
#define DEHFIEIGGOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE35E0)
#define DEHFIEIGGOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE2F00)

inline static constexpr unsigned int DEHFIEIGGOC_TypeDefinitionIndex = 13964;

	class DEHFIEIGGOC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x44D80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>**)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x44D88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x44D90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x10430);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x10431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>*(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::IMCMDHDALIB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IMCMDHDALIB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DEHFIEIGGOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHFIEIGGOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DEHFIEIGGOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEHFIEIGGOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DEHFIEIGGOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IMCMDHDALIB* a1)
		{
			return ((::System::Void(*)(::IMCMDHDALIB*))((::PBYTE)hIl2Cpp + DEHFIEIGGOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
