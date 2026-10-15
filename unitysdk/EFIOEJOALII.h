#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BACIMFPMOPJ;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFIOEJOALII_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD79B90)
#define EFIOEJOALII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7A110)
#define EFIOEJOALII_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD79D00)
#define EFIOEJOALII_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD79640)
#define EFIOEJOALII_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD798D0)
#define EFIOEJOALII_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD79DA0)
#define EFIOEJOALII_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD79DF0)
#define EFIOEJOALII_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD79BD0)
#define EFIOEJOALII_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD79870)
#define EFIOEJOALII_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD79A00)
#define EFIOEJOALII_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD79C60)
#define EFIOEJOALII_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD795C0)

inline static constexpr unsigned int EFIOEJOALII_TypeDefinitionIndex = 11569;

	class EFIOEJOALII : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BACIMFPMOPJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BACIMFPMOPJ*>**)UnitySDK::FromName("", "EFIOEJOALII")->GetStaticField(0x53C90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EFIOEJOALII")->GetStaticField(0x53C98);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EFIOEJOALII")->GetStaticField(0x53CA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EFIOEJOALII")->GetStaticField(0x12980);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EFIOEJOALII")->GetStaticField(0x12981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BACIMFPMOPJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BACIMFPMOPJ*>*(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BACIMFPMOPJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BACIMFPMOPJ*>(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_FPHGMAMDFHE_OFFSET))();
		}

		static ::BACIMFPMOPJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BACIMFPMOPJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EFIOEJOALII_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFIOEJOALII_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EFIOEJOALII_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFIOEJOALII_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EFIOEJOALII_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BACIMFPMOPJ* a1)
		{
			return ((::System::Void(*)(::BACIMFPMOPJ*))((::PBYTE)hIl2Cpp + EFIOEJOALII_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
