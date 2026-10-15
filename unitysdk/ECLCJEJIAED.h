#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class ODBFJMGGCOJ;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECLCJEJIAED_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD6BCA0)
#define ECLCJEJIAED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD6C270)
#define ECLCJEJIAED_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD6BE10)
#define ECLCJEJIAED_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD6B710)
#define ECLCJEJIAED_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD6B9A0)
#define ECLCJEJIAED_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD6BEB0)
#define ECLCJEJIAED_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD6BF00)
#define ECLCJEJIAED_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD6BCE0)
#define ECLCJEJIAED_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD6B940)
#define ECLCJEJIAED_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD6BB10)
#define ECLCJEJIAED_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD6BD70)
#define ECLCJEJIAED_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD6B690)

inline static constexpr unsigned int ECLCJEJIAED_TypeDefinitionIndex = 11552;

	class ECLCJEJIAED : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ODBFJMGGCOJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ODBFJMGGCOJ*>**)UnitySDK::FromName("", "ECLCJEJIAED")->GetStaticField(0x53530);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ECLCJEJIAED")->GetStaticField(0x53538);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ECLCJEJIAED")->GetStaticField(0x53540);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ECLCJEJIAED")->GetStaticField(0x127F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ECLCJEJIAED")->GetStaticField(0x127F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ODBFJMGGCOJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ODBFJMGGCOJ*>*(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ODBFJMGGCOJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ODBFJMGGCOJ*>(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_FPHGMAMDFHE_OFFSET))();
		}

		static ::ODBFJMGGCOJ* LMBKNCAIDLC(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::ODBFJMGGCOJ*(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + ECLCJEJIAED_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLCJEJIAED_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ECLCJEJIAED_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECLCJEJIAED_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ECLCJEJIAED_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ODBFJMGGCOJ* a1)
		{
			return ((::System::Void(*)(::ODBFJMGGCOJ*))((::PBYTE)hIl2Cpp + ECLCJEJIAED_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
