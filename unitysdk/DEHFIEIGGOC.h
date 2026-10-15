#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IMCMDHDALIB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEHFIEIGGOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD11690)
#define DEHFIEIGGOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD11C60)
#define DEHFIEIGGOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD11800)
#define DEHFIEIGGOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD11100)
#define DEHFIEIGGOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD11390)
#define DEHFIEIGGOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD118A0)
#define DEHFIEIGGOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD118F0)
#define DEHFIEIGGOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD116D0)
#define DEHFIEIGGOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD11330)
#define DEHFIEIGGOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD11500)
#define DEHFIEIGGOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD11760)
#define DEHFIEIGGOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD11080)

inline static constexpr unsigned int DEHFIEIGGOC_TypeDefinitionIndex = 13964;

	class DEHFIEIGGOC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IMCMDHDALIB*>**)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x4B760);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x4B768);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x4B770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x117C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DEHFIEIGGOC")->GetStaticField(0x117C1);
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
